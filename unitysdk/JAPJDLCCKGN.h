#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JAPJDLCCKGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEE1A30)

inline static constexpr unsigned int JAPJDLCCKGN_TypeDefinitionIndex = 36223;

	class JAPJDLCCKGN : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PNGMEBGFJCE()
		{
			return (::System::String**)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x38AC0);
		}

		static ::System::String** StaticGet_MPDNJBHBLHB()
		{
			return (::System::String**)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x38AC8);
		}

		static ::System::String** StaticGet_EDJHLEOIALL()
		{
			return (::System::String**)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x38AD0);
		}

		static ::System::Int32* StaticGet_NCHFCPGDGCM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0xC500);
		}

		static ::System::Int32* StaticGet_PJJMMJAGFGL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0xC504);
		}

		static ::System::Int32* StaticGet_OJJOEOIOOMJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0xC508);
		}

		static ::System::Int32* StaticGet_LPNCEIMDKFL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0xC50C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAPJDLCCKGN_CCTOR_OFFSET))();
		}

	};
