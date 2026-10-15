#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmPhase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJPIHOPHFLO_CKCKPIECIGG_OFFSET UNITYSDK_OFFSET(0xB97DDF0)
#define MJPIHOPHFLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB97E2D0)
#define MJPIHOPHFLO_GDMBLLICIDI_OFFSET UNITYSDK_OFFSET(0xB97BFE0)
#define MJPIHOPHFLO_IHLPFGJEPCN_OFFSET UNITYSDK_OFFSET(0xB97C8C0)
#define MJPIHOPHFLO_IOHAPJJCNBM_OFFSET UNITYSDK_OFFSET(0xB97CE30)
#define MJPIHOPHFLO_LMGFCDADEDC_OFFSET UNITYSDK_OFFSET(0xB97BA70)
#define MJPIHOPHFLO_NDPMCFINKOG_OFFSET UNITYSDK_OFFSET(0xB97D710)
#define MJPIHOPHFLO_NNDKMBNANNF_OFFSET UNITYSDK_OFFSET(0xB97BA20)

inline static constexpr unsigned int MJPIHOPHFLO_TypeDefinitionIndex = 61805;

	class MJPIHOPHFLO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* HBFGLENMBOA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPIHOPHFLO_CTOR_OFFSET))(this);
		}

		::System::Void NNDKMBNANNF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJPIHOPHFLO_NNDKMBNANNF_OFFSET))(this, a1);
		}

		::System::Void LMGFCDADEDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJPIHOPHFLO_LMGFCDADEDC_OFFSET))(this, a1);
		}

		::System::Void GDMBLLICIDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJPIHOPHFLO_GDMBLLICIDI_OFFSET))(this, a1);
		}

		::System::Void IHLPFGJEPCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJPIHOPHFLO_IHLPFGJEPCN_OFFSET))(this, a1);
		}

		::System::Void IOHAPJJCNBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJPIHOPHFLO_IOHAPJJCNBM_OFFSET))(this, a1);
		}

		::System::Void NDPMCFINKOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJPIHOPHFLO_NDPMCFINKOG_OFFSET))(this, a1);
		}

		::System::Void CKCKPIECIGG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJPIHOPHFLO_CKCKPIECIGG_OFFSET))(this, a1);
		}

	};
