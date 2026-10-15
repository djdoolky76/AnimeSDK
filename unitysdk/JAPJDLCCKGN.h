#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JAPJDLCCKGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC30FB0)

inline static constexpr unsigned int JAPJDLCCKGN_TypeDefinitionIndex = 35295;

	class JAPJDLCCKGN : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PNGMEBGFJCE()
		{
			return (::System::String**)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x1B50);
		}

		static ::System::String** StaticGet_MPDNJBHBLHB()
		{
			return (::System::String**)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x1B58);
		}

		static ::System::String** StaticGet_EDJHLEOIALL()
		{
			return (::System::String**)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x1B60);
		}

		static ::System::Int32* StaticGet_LPNCEIMDKFL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x9F0);
		}

		static ::System::Int32* StaticGet_NCHFCPGDGCM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x9F4);
		}

		static ::System::Int32* StaticGet_PJJMMJAGFGL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x9F8);
		}

		static ::System::Int32* StaticGet_OJJOEOIOOMJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JAPJDLCCKGN")->GetStaticField(0x9FC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAPJDLCCKGN_CCTOR_OFFSET))();
		}

	};
