#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHCODKAMGCF;
namespace System { class String; }

#define DIBNMFGJFEH_AEDFCGPIIKO_OFFSET UNITYSDK_OFFSET(0xEBE9FA0)
#define DIBNMFGJFEH_AJFOMGLGMDG_OFFSET UNITYSDK_OFFSET(0xEBEA210)
#define DIBNMFGJFEH_BHFFLAGHFFO_OFFSET UNITYSDK_OFFSET(0xEBE9D10)
#define DIBNMFGJFEH_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBEA2C0)
#define DIBNMFGJFEH_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE9C00)
#define DIBNMFGJFEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBE9DD0)
#define DIBNMFGJFEH_EDBLNDIJNPC_OFFSET UNITYSDK_OFFSET(0xEBE9EC0)
#define DIBNMFGJFEH_EIJLDFNLHDK_OFFSET UNITYSDK_OFFSET(0xEBEA160)
#define DIBNMFGJFEH_HLJHBOEGLKA_OFFSET UNITYSDK_OFFSET(0xEBEA100)
#define DIBNMFGJFEH_JMJOAHNFJAO_OFFSET UNITYSDK_OFFSET(0xEBEA050)
#define DIBNMFGJFEH_MMNDNGOIOJE_OFFSET UNITYSDK_OFFSET(0xEBE9D70)
#define DIBNMFGJFEH_NGDNGHALLCK_OFFSET UNITYSDK_OFFSET(0xEBE9F40)
#define DIBNMFGJFEH_PPOGPHABEIF_OFFSET UNITYSDK_OFFSET(0xEBE9E40)

inline static constexpr unsigned int DIBNMFGJFEH_TypeDefinitionIndex = 69169;

	class DIBNMFGJFEH : public ::System::Object
	{
	public:
		::PHCODKAMGCF* FGKFCLFFELF; // 0x10
		::PHCODKAMGCF* EEKMMLKGMJC; // 0x18
		static ::System::Single* StaticGet_MJCJENKMJFC()
		{
			return (::System::Single*)UnitySDK::FromName("", "DIBNMFGJFEH")->GetStaticField(0x11DE0);
		}

		static ::System::Single* StaticGet_BPCGLEEILJG()
		{
			return (::System::Single*)UnitySDK::FromName("", "DIBNMFGJFEH")->GetStaticField(0x11DE4);
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
