#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayLinkExtraBehaviorMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define NEPMJIEFJCF_AAKLKBGOGIH_OFFSET UNITYSDK_OFFSET(0xBB763B0)
#define NEPMJIEFJCF_BMPBCJNPICB_OFFSET UNITYSDK_OFFSET(0xBB75E90)
#define NEPMJIEFJCF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB752F0)
#define NEPMJIEFJCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB753C0)
#define NEPMJIEFJCF_FCGLKKCPADC_OFFSET UNITYSDK_OFFSET(0xBB76410)
#define NEPMJIEFJCF_FNIHEOEKCJP_OFFSET UNITYSDK_OFFSET(0xBB75CF0)
#define NEPMJIEFJCF_GET_LINKOWNER_OFFSET UNITYSDK_OFFSET(0xBB76930)
#define NEPMJIEFJCF_GGDAEJGGHMO_OFFSET UNITYSDK_OFFSET(0xBB76790)
#define NEPMJIEFJCF_HEMHLKONOGC_OFFSET UNITYSDK_OFFSET(0xBB75F40)
#define NEPMJIEFJCF_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xBB76950)
#define NEPMJIEFJCF_IFJEBBNKHOM_OFFSET UNITYSDK_OFFSET(0xBB761B0)
#define NEPMJIEFJCF_JIPNDNKLHIL_OFFSET UNITYSDK_OFFSET(0xBB75E20)
#define NEPMJIEFJCF_KCEOHHLPLBB_OFFSET UNITYSDK_OFFSET(0xBB76470)
#define NEPMJIEFJCF_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xBB75870)
#define NEPMJIEFJCF_LEGKCKFJBDB_OFFSET UNITYSDK_OFFSET(0xBB76250)
#define NEPMJIEFJCF_MLAMNLMGBEM_OFFSET UNITYSDK_OFFSET(0xBB758D0)
#define NEPMJIEFJCF_NBHIBECPBBM_OFFSET UNITYSDK_OFFSET(0xBB764F0)
#define NEPMJIEFJCF_OCBMJGOLGJK_OFFSET UNITYSDK_OFFSET(0xBB75BA0)
#define NEPMJIEFJCF_ONAOAJHNPMM_OFFSET UNITYSDK_OFFSET(0xBB75490)
#define NEPMJIEFJCF_SET_LINKOWNER_OFFSET UNITYSDK_OFFSET(0xBB76940)

inline static constexpr unsigned int NEPMJIEFJCF_TypeDefinitionIndex = 55950;

	class NEPMJIEFJCF : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::System::Object*>* NJGEMJJHMOH; // 0x10
		::RPG::GameCore::GameEntity* _LinkOwner_k__BackingField; // 0x18
		::System::Int32 FONIMKAFEJO; // 0x20
		::System::Int32 AHJPBOBDLOF; // 0x24
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_DISPOSE_OFFSET))(this);
		}

		::System::Void ONAOAJHNPMM(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_ONAOAJHNPMM_OFFSET))(this, a1, a2);
		}

		::System::Void MLAMNLMGBEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_MLAMNLMGBEM_OFFSET))(this);
		}

		::System::Void OCBMJGOLGJK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_OCBMJGOLGJK_OFFSET))(this, a1, a2);
		}

		::System::Void FNIHEOEKCJP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_FNIHEOEKCJP_OFFSET))(this, a1);
		}

		::System::Void JIPNDNKLHIL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_JIPNDNKLHIL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActionDelayLinkExtraBehaviorMask BMPBCJNPICB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::ActionDelayLinkExtraBehaviorMask(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_BMPBCJNPICB_OFFSET))(this, a1);
		}

		::System::Int32 IFJEBBNKHOM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_IFJEBBNKHOM_OFFSET))(this, a1);
		}

		::System::Boolean LEGKCKFJBDB(::RPG::GameCore::TurnBasedGameMode* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_LEGKCKFJBDB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AAKLKBGOGIH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_AAKLKBGOGIH_OFFSET))(this, a1);
		}

		::System::Boolean FCGLKKCPADC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_FCGLKKCPADC_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Int32 KCEOHHLPLBB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_KCEOHHLPLBB_OFFSET))(this, a1, a2);
		}

		::System::Void NBHIBECPBBM(::RPG::GameCore::FixPoint a1, ::CHMCAGBDPJH a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_NBHIBECPBBM_OFFSET))(this, a1, a2);
		}

		::System::Void GGDAEJGGHMO(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_GGDAEJGGHMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HEMHLKONOGC(::RPG::GameCore::ActionDelayLinkExtraBehaviorMask a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionDelayLinkExtraBehaviorMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_HEMHLKONOGC_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* get_LinkOwner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_GET_LINKOWNER_OFFSET))(this);
		}

		::System::Void set_LinkOwner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_SET_LINKOWNER_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_HIDEJDELEEB_OFFSET))(this);
		}

	};
