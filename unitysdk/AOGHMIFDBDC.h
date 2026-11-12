#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class AOGHMIFDBDC;
class DEHLMHKDEKC;
class JBACCAGFHON;
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOGHMIFDBDC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16722250)
#define AOGHMIFDBDC_CTOR_OFFSET UNITYSDK_OFFSET(0x167223A0)
#define AOGHMIFDBDC_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x16722240)
#define AOGHMIFDBDC_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x16722230)
#define AOGHMIFDBDC_JKOFBAECIHD_OFFSET UNITYSDK_OFFSET(0x16722DC0)
#define AOGHMIFDBDC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16722FB0)
#define AOGHMIFDBDC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16722470)
#define AOGHMIFDBDC_LADNBLPENHJ_OFFSET UNITYSDK_OFFSET(0x16722E80)
#define AOGHMIFDBDC_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0x16722CE0)
#define AOGHMIFDBDC_MCLBPDJPHKI_OFFSET UNITYSDK_OFFSET(0x16723030)
#define AOGHMIFDBDC_OFLBNCGALFC_OFFSET UNITYSDK_OFFSET(0x16722BA0)

inline static constexpr unsigned int AOGHMIFDBDC_TypeDefinitionIndex = 80855;

	class AOGHMIFDBDC : public ::System::Object
	{
	public:
		::JBACCAGFHON* _Services_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceAIState, ::DEHLMHKDEKC*>* GDEEJGLLLHA; // 0x18
		::AGCPAMNLCGN* _Owner_k__BackingField; // 0x20
		::RPG::Common::StateMachine_1<::AGCPAMNLCGN*>* CBIGPGKJAEI; // 0x28
		::System::Void _ctor(::AGCPAMNLCGN* a1, ::JBACCAGFHON* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_CTOR_OFFSET))(this, a1, a2);
		}

		::JBACCAGFHON* get_Services()
		{
			return ((::JBACCAGFHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_GET_SERVICES_OFFSET))(this);
		}

		::AGCPAMNLCGN* get_Owner()
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_GET_OWNER_OFFSET))(this);
		}

		static ::AOGHMIFDBDC* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::JBACCAGFHON* a2)
		{
			return ((::AOGHMIFDBDC*(*)(::AGCPAMNLCGN*, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void OFLBNCGALFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_OFLBNCGALFC_OFFSET))(this);
		}

		::DEHLMHKDEKC* JKOFBAECIHD()
		{
			return ((::DEHLMHKDEKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_JKOFBAECIHD_OFFSET))(this);
		}

		::DEHLMHKDEKC* LCKCABJFHEA(::RPG::GameCore::CakeRaceAIState a1)
		{
			return ((::DEHLMHKDEKC*(*)(::PVOID, ::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_LCKCABJFHEA_OFFSET))(this, a1);
		}

		::System::Void LADNBLPENHJ(::RPG::GameCore::CakeRaceAIState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_LADNBLPENHJ_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MCLBPDJPHKI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AOGHMIFDBDC_MCLBPDJPHKI_OFFSET))(this, a1);
		}

	};
