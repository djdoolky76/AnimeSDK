#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture3D; }

#define KPGLPOPHMBC_CKMHELNHGMF_OFFSET UNITYSDK_OFFSET(0xB5B68D0)
#define KPGLPOPHMBC_KDDHHHCPACP_OFFSET UNITYSDK_OFFSET(0xB5B6B90)
#define KPGLPOPHMBC_LPDILFOEMKE_OFFSET UNITYSDK_OFFSET(0xB5B6860)
#define KPGLPOPHMBC_NLADOOHBMHD_OFFSET UNITYSDK_OFFSET(0xB5B6930)
#define KPGLPOPHMBC_PNAODHAHKKE_OFFSET UNITYSDK_OFFSET(0xB5B6A10)

inline static constexpr unsigned int KPGLPOPHMBC_TypeDefinitionIndex = 49007;

	class KPGLPOPHMBC : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture3D** StaticGet_PBNHCEPGCAM()
		{
			return (::UnityEngine::Texture3D**)UnitySDK::FromName("", "KPGLPOPHMBC")->GetStaticField(0x63470);
		}

		static ::System::Boolean* StaticGet_KOBHDGPCPHB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPGLPOPHMBC")->GetStaticField(0x14900);
		}

		static ::System::Boolean* StaticGet_AABOIJCDIGC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPGLPOPHMBC")->GetStaticField(0x14901);
		}

		// static const ::System::Object INFMLBGMGKH; // 0x0
		// static const ::System::Object EJFHAKAHDLO; // 0x0
		static ::System::Boolean LPDILFOEMKE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPGLPOPHMBC_LPDILFOEMKE_OFFSET))();
		}

		static ::System::Boolean CKMHELNHGMF()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPGLPOPHMBC_CKMHELNHGMF_OFFSET))();
		}

		static ::System::String* NLADOOHBMHD()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + KPGLPOPHMBC_NLADOOHBMHD_OFFSET))();
		}

		static ::System::Void PNAODHAHKKE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPGLPOPHMBC_PNAODHAHKKE_OFFSET))();
		}

		static ::UnityEngine::Texture3D* KDDHHHCPACP(::UnityEngine::TextAsset* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Texture3D*(*)(::UnityEngine::TextAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + KPGLPOPHMBC_KDDHHHCPACP_OFFSET))(a1, a2);
		}

	};
