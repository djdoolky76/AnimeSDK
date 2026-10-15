#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KDFFHMDFALG;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DOPPIFIKBKI_ADJGJDFAIBB_OFFSET UNITYSDK_OFFSET(0x11FF6340)
#define DOPPIFIKBKI_BHKOMKBPEDN_OFFSET UNITYSDK_OFFSET(0x11FF6E80)
#define DOPPIFIKBKI_CEEFLDAANDN_OFFSET UNITYSDK_OFFSET(0x11FF7D30)
#define DOPPIFIKBKI_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x11FF4CB0)
#define DOPPIFIKBKI_CLCGAIDLHNB_OFFSET UNITYSDK_OFFSET(0x11FF4F40)
#define DOPPIFIKBKI_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF7DF0)
#define DOPPIFIKBKI_DGDEJPKHOEO_OFFSET UNITYSDK_OFFSET(0x11FF7230)
#define DOPPIFIKBKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FF4BC0)
#define DOPPIFIKBKI_EMDBDCAAMIA_OFFSET UNITYSDK_OFFSET(0x11FF7C30)
#define DOPPIFIKBKI_GCNAHPPCLIG_OFFSET UNITYSDK_OFFSET(0x11FF7720)
#define DOPPIFIKBKI_HJNFCIAFAMM_OFFSET UNITYSDK_OFFSET(0x11FF6E30)
#define DOPPIFIKBKI_IDOHMIGHMCG_OFFSET UNITYSDK_OFFSET(0x11FF79D0)
#define DOPPIFIKBKI_IGHLEIBOLNC_OFFSET UNITYSDK_OFFSET(0x11FF7900)
#define DOPPIFIKBKI_KBNOBPOIPDC_OFFSET UNITYSDK_OFFSET(0x11FF7CD0)
#define DOPPIFIKBKI_KOENMLBCBFG_OFFSET UNITYSDK_OFFSET(0x11FF6AD0)
#define DOPPIFIKBKI_LJINDPANADO_OFFSET UNITYSDK_OFFSET(0x11FF6CA0)
#define DOPPIFIKBKI_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0x11FF6A40)
#define DOPPIFIKBKI_NAGOFPEOIAD_OFFSET UNITYSDK_OFFSET(0x11FF70F0)
#define DOPPIFIKBKI_NKHEDDIAINP_OFFSET UNITYSDK_OFFSET(0x11FF7350)
#define DOPPIFIKBKI_OAIMEEPFPOP_OFFSET UNITYSDK_OFFSET(0x11FF7790)
#define DOPPIFIKBKI_OEMAFFJJAJN_OFFSET UNITYSDK_OFFSET(0x11FF63C0)
#define DOPPIFIKBKI_OHKKNAPILAN_OFFSET UNITYSDK_OFFSET(0x11FF7BE0)
#define DOPPIFIKBKI_PBHCOGMEFJK_OFFSET UNITYSDK_OFFSET(0x11FF7B90)
#define DOPPIFIKBKI_PNBCCHFNDAG_OFFSET UNITYSDK_OFFSET(0x11FF7C80)

inline static constexpr unsigned int DOPPIFIKBKI_TypeDefinitionIndex = 60618;

	class DOPPIFIKBKI : public ::NPEBLEKDAGI
	{
	public:
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x10
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x18
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>* DMIJDAKHLOI; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::ValueTuple>* DLJEDFLGCNL; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::ValueTuple>* KIFCEDBCHBN; // 0x38
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x40
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* MONOAGGOGCL; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_DISPOSE_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void ADJGJDFAIBB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_ADJGJDFAIBB_OFFSET))(this, a1, a2);
		}

		::System::Void LKINOKFJPCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_LKINOKFJPCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KOENMLBCBFG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_KOENMLBCBFG_OFFSET))(this, a1, a2);
		}

		::System::Void HJNFCIAFAMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_HJNFCIAFAMM_OFFSET))(this, a1);
		}

		::System::Void NAGOFPEOIAD(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_NAGOFPEOIAD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DGDEJPKHOEO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_DGDEJPKHOEO_OFFSET))(this, a1);
		}

		::System::Void NKHEDDIAINP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_NKHEDDIAINP_OFFSET))(this, a1);
		}

		::System::Void OAIMEEPFPOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_OAIMEEPFPOP_OFFSET))(this, a1);
		}

		::System::Boolean IGHLEIBOLNC(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_IGHLEIBOLNC_OFFSET))(this, a1, a2);
		}

		::System::Void IDOHMIGHMCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_IDOHMIGHMCG_OFFSET))(this);
		}

		::System::Void PBHCOGMEFJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_PBHCOGMEFJK_OFFSET))(this, a1);
		}

		::System::Void OHKKNAPILAN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_OHKKNAPILAN_OFFSET))(this, a1);
		}

		::System::Void EMDBDCAAMIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_EMDBDCAAMIA_OFFSET))(this, a1);
		}

		::System::Boolean PNBCCHFNDAG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_PNBCCHFNDAG_OFFSET))(this, a1);
		}

		::System::Void KBNOBPOIPDC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_KBNOBPOIPDC_OFFSET))(this, a1);
		}

		::System::Void OEMAFFJJAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_OEMAFFJJAJN_OFFSET))(this);
		}

		::System::Void CLCGAIDLHNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_CLCGAIDLHNB_OFFSET))(this);
		}

		::System::Void BHKOMKBPEDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_BHKOMKBPEDN_OFFSET))(this);
		}

		static ::System::Boolean GCNAHPPCLIG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_GCNAHPPCLIG_OFFSET))(a1);
		}

		::System::Boolean CEEFLDAANDN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_CEEFLDAANDN_OFFSET))(this, a1);
		}

		::System::Void LJINDPANADO(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + DOPPIFIKBKI_LJINDPANADO_OFFSET))(this, a1, a2);
		}

	};
