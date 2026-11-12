#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIAPFKODINN_Track.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventureAudioManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define IIAPFKODINN_CNLGKJKOLNI_OFFSET UNITYSDK_OFFSET(0x173E7BC0)
#define IIAPFKODINN_CTOR_OFFSET UNITYSDK_OFFSET(0x173E84B0)
#define IIAPFKODINN_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0x173E7C10)
#define IIAPFKODINN_EMLDOPGPPIP_OFFSET UNITYSDK_OFFSET(0x173E7DD0)
#define IIAPFKODINN_FLMNGELBMND_OFFSET UNITYSDK_OFFSET(0x173E8240)
#define IIAPFKODINN_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x173E7E20)
#define IIAPFKODINN_HIMGJKBHNCO_OFFSET UNITYSDK_OFFSET(0x173E7F30)
#define IIAPFKODINN_LMDPDOGCPFN_OFFSET UNITYSDK_OFFSET(0x173E7FD0)
#define IIAPFKODINN_OHCFANBGOGI_OFFSET UNITYSDK_OFFSET(0x173E8110)
#define IIAPFKODINN_PIEHAPFFBFN_OFFSET UNITYSDK_OFFSET(0x173E7D80)

inline static constexpr unsigned int IIAPFKODINN_TypeDefinitionIndex = 77020;

	class IIAPFKODINN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* GGIHMIBKIIE; // 0x10
		::IIAPFKODINN_Track HBDGFLPGFJE; // 0x18
		::System::Boolean HKOPHLNFBIO; // 0x1C
		// static const ::System::String* CABFEMALJNM; // 0x0
		// static const ::System::String* KLMGLAHJEKE; // 0x0
		// static const ::System::String* ELBBBMDOJHI; // 0x0
		// static const ::System::String* ENIKEBBCPBA; // 0x0
		// static const ::System::String* MDEDDPEICPI; // 0x0
		// static const ::System::String* EHIEPKFMPID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPFKODINN_CTOR_OFFSET))(this);
		}

		::System::Void CNLGKJKOLNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPFKODINN_CNLGKJKOLNI_OFFSET))(this);
		}

		::System::Void PIEHAPFFBFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPFKODINN_PIEHAPFFBFN_OFFSET))(this);
		}

		::System::Void EMLDOPGPPIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPFKODINN_EMLDOPGPPIP_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPFKODINN_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void EGNMELNENAC(::IIAPFKODINN_Track a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAPFKODINN_Track))((::PBYTE)hIl2Cpp + IIAPFKODINN_EGNMELNENAC_OFFSET))(this, a1);
		}

		::System::Boolean LMDPDOGCPFN(::IIAPFKODINN_Track a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIAPFKODINN_Track, ::System::String*))((::PBYTE)hIl2Cpp + IIAPFKODINN_LMDPDOGCPFN_OFFSET))(this, a1, a2);
		}

		::System::Void OHCFANBGOGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPFKODINN_OHCFANBGOGI_OFFSET))(this);
		}

		::System::Void FLMNGELBMND(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* a1, ::IIAPFKODINN_Track a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>*, ::IIAPFKODINN_Track, ::System::String*))((::PBYTE)hIl2Cpp + IIAPFKODINN_FLMNGELBMND_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::AdventureAudioManager* HIMGJKBHNCO()
		{
			return ((::RPG::Client::AdventureAudioManager*(*)())((::PBYTE)hIl2Cpp + IIAPFKODINN_HIMGJKBHNCO_OFFSET))();
		}

	};
