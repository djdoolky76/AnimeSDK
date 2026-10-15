#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHCODKAMGCF;
namespace System { class String; }

#define DIBNMFGJFEH_AEDFCGPIIKO_OFFSET UNITYSDK_OFFSET(0xEBF0390)
#define DIBNMFGJFEH_AJFOMGLGMDG_OFFSET UNITYSDK_OFFSET(0xEBF0600)
#define DIBNMFGJFEH_BHFFLAGHFFO_OFFSET UNITYSDK_OFFSET(0xEBF0100)
#define DIBNMFGJFEH_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBF06B0)
#define DIBNMFGJFEH_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEFFF0)
#define DIBNMFGJFEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBF01C0)
#define DIBNMFGJFEH_EDBLNDIJNPC_OFFSET UNITYSDK_OFFSET(0xEBF02B0)
#define DIBNMFGJFEH_EIJLDFNLHDK_OFFSET UNITYSDK_OFFSET(0xEBF0550)
#define DIBNMFGJFEH_HLJHBOEGLKA_OFFSET UNITYSDK_OFFSET(0xEBF04F0)
#define DIBNMFGJFEH_JMJOAHNFJAO_OFFSET UNITYSDK_OFFSET(0xEBF0440)
#define DIBNMFGJFEH_MMNDNGOIOJE_OFFSET UNITYSDK_OFFSET(0xEBF0160)
#define DIBNMFGJFEH_NGDNGHALLCK_OFFSET UNITYSDK_OFFSET(0xEBF0330)
#define DIBNMFGJFEH_PPOGPHABEIF_OFFSET UNITYSDK_OFFSET(0xEBF0230)

inline static constexpr unsigned int DIBNMFGJFEH_TypeDefinitionIndex = 69169;

	class DIBNMFGJFEH : public ::System::Object
	{
	public:
		::PHCODKAMGCF* EEKMMLKGMJC; // 0x10
		::PHCODKAMGCF* FGKFCLFFELF; // 0x18
		static ::System::Single* StaticGet_BPCGLEEILJG()
		{
			return (::System::Single*)UnitySDK::FromName("", "DIBNMFGJFEH")->GetStaticField(0x12A70);
		}

		static ::System::Single* StaticGet_MJCJENKMJFC()
		{
			return (::System::Single*)UnitySDK::FromName("", "DIBNMFGJFEH")->GetStaticField(0x12A74);
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
