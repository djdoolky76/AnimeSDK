#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }

#define MPNCINEOKEJ_BAKANEIBLIP_OFFSET UNITYSDK_OFFSET(0xBA42630)
#define MPNCINEOKEJ_BKIMIPMLMKL_OFFSET UNITYSDK_OFFSET(0xBA424C0)
#define MPNCINEOKEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA428C0)
#define MPNCINEOKEJ_JGGOCPLLPPA_OFFSET UNITYSDK_OFFSET(0xBA41E10)
#define MPNCINEOKEJ_LBBFGADNEHG_OFFSET UNITYSDK_OFFSET(0xBA41FC0)
#define MPNCINEOKEJ_LPFCIDHEJFE_OFFSET UNITYSDK_OFFSET(0xBA42050)
#define MPNCINEOKEJ_NFDOMALHMOJ_OFFSET UNITYSDK_OFFSET(0xBA427A0)
#define MPNCINEOKEJ_NPAAKCGMOLP_OFFSET UNITYSDK_OFFSET(0xBA42290)

inline static constexpr unsigned int MPNCINEOKEJ_TypeDefinitionIndex = 72677;

	class MPNCINEOKEJ : public ::System::Object
	{
	public:
		static ::UnityEngine::Font** StaticGet_EGBLKEDNFDN()
		{
			return (::UnityEngine::Font**)UnitySDK::FromName("", "MPNCINEOKEJ")->GetStaticField(0x165B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>** StaticGet_DCELJHGLCLH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("", "MPNCINEOKEJ")->GetStaticField(0x165B8);
		}

		static ::System::Boolean* StaticGet_CPKGNGANNIO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPNCINEOKEJ")->GetStaticField(0x5470);
		}

		// static const ::System::Object CJKPHGBNHFL; // 0x0
		// static const ::System::String* NLLKNJLCEPA; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNCINEOKEJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean JGGOCPLLPPA(::UnityEngine::Font* a1, ::System::String* a2, ::UnityEngine::Font* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Font*, ::System::String*, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + MPNCINEOKEJ_JGGOCPLLPPA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LPFCIDHEJFE(::UnityEngine::Font* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Font*, ::System::String*))((::PBYTE)hIl2Cpp + MPNCINEOKEJ_LPFCIDHEJFE_OFFSET))(a1, a2);
		}

		static ::System::Boolean LBBFGADNEHG(::UnityEngine::Font* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + MPNCINEOKEJ_LBBFGADNEHG_OFFSET))(a1);
		}

		static ::System::Boolean NPAAKCGMOLP(::UnityEngine::Font* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + MPNCINEOKEJ_NPAAKCGMOLP_OFFSET))(a1);
		}

		static ::System::Boolean BKIMIPMLMKL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MPNCINEOKEJ_BKIMIPMLMKL_OFFSET))(a1);
		}

		static ::System::Void BAKANEIBLIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNCINEOKEJ_BAKANEIBLIP_OFFSET))();
		}

		static ::System::Void NFDOMALHMOJ(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + MPNCINEOKEJ_NFDOMALHMOJ_OFFSET))(a1);
		}

	};
