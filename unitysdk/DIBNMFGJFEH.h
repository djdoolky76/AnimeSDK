#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHCODKAMGCF;
namespace System { class String; }

#define DIBNMFGJFEH_AEDFCGPIIKO_OFFSET UNITYSDK_OFFSET(0xF962100)
#define DIBNMFGJFEH_AJFOMGLGMDG_OFFSET UNITYSDK_OFFSET(0xF9622E0)
#define DIBNMFGJFEH_BHFFLAGHFFO_OFFSET UNITYSDK_OFFSET(0xF961E70)
#define DIBNMFGJFEH_CCTOR_OFFSET UNITYSDK_OFFSET(0xF962360)
#define DIBNMFGJFEH_CTOR_OFFSET UNITYSDK_OFFSET(0xF961D80)
#define DIBNMFGJFEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF961F30)
#define DIBNMFGJFEH_EDBLNDIJNPC_OFFSET UNITYSDK_OFFSET(0xF962020)
#define DIBNMFGJFEH_EIJLDFNLHDK_OFFSET UNITYSDK_OFFSET(0xF962260)
#define DIBNMFGJFEH_HLJHBOEGLKA_OFFSET UNITYSDK_OFFSET(0xF962200)
#define DIBNMFGJFEH_JMJOAHNFJAO_OFFSET UNITYSDK_OFFSET(0xF962180)
#define DIBNMFGJFEH_MMNDNGOIOJE_OFFSET UNITYSDK_OFFSET(0xF961ED0)
#define DIBNMFGJFEH_NGDNGHALLCK_OFFSET UNITYSDK_OFFSET(0xF9620A0)
#define DIBNMFGJFEH_PPOGPHABEIF_OFFSET UNITYSDK_OFFSET(0xF961FA0)

inline static constexpr unsigned int DIBNMFGJFEH_TypeDefinitionIndex = 71122;

	class DIBNMFGJFEH : public ::System::Object
	{
	public:
		::PHCODKAMGCF* EEKMMLKGMJC; // 0x10
		::PHCODKAMGCF* FGKFCLFFELF; // 0x18
		static ::System::Single* StaticGet_BPCGLEEILJG()
		{
			return (::System::Single*)UnitySDK::FromName("", "DIBNMFGJFEH")->GetStaticField(0x14710);
		}

		static ::System::Single* StaticGet_MJCJENKMJFC()
		{
			return (::System::Single*)UnitySDK::FromName("", "DIBNMFGJFEH")->GetStaticField(0x14714);
		}

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIBNMFGJFEH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_DISPOSE_OFFSET))(this);
		}

		::System::Boolean PPOGPHABEIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_PPOGPHABEIF_OFFSET))(this);
		}

		::System::Boolean EDBLNDIJNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_EDBLNDIJNPC_OFFSET))(this);
		}

		::System::Void NGDNGHALLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_NGDNGHALLCK_OFFSET))(this);
		}

		::System::Void BHFFLAGHFFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_BHFFLAGHFFO_OFFSET))(this);
		}

		::System::Void AEDFCGPIIKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_AEDFCGPIIKO_OFFSET))(this);
		}

		::System::Void JMJOAHNFJAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_JMJOAHNFJAO_OFFSET))(this);
		}

		::System::Void HLJHBOEGLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_HLJHBOEGLKA_OFFSET))(this);
		}

		::System::Void MMNDNGOIOJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_MMNDNGOIOJE_OFFSET))(this);
		}

		::System::Void EIJLDFNLHDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_EIJLDFNLHDK_OFFSET))(this);
		}

		::System::Void AJFOMGLGMDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNMFGJFEH_AJFOMGLGMDG_OFFSET))(this);
		}

	};
