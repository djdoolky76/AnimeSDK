#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFHFKPKKJI;
class EBPDFBGLNJM;
class ECNEEKNHIOE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJBIPAMPICI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A4DCF0)
#define GJBIPAMPICI_FKCIGNGIOCO_OFFSET UNITYSDK_OFFSET(0x15A4EB50)
#define GJBIPAMPICI_JOINNKMACGE_OFFSET UNITYSDK_OFFSET(0x15A4E210)
#define GJBIPAMPICI_MJILEKJLODM_OFFSET UNITYSDK_OFFSET(0x15A4DD60)
#define GJBIPAMPICI_NKPMGAIDFJE_OFFSET UNITYSDK_OFFSET(0x15A4E730)
#define GJBIPAMPICI_NOHILMOBENM_OFFSET UNITYSDK_OFFSET(0x15A4E880)
#define GJBIPAMPICI_PMMFMADNPLD_OFFSET UNITYSDK_OFFSET(0x15A4E7F0)

inline static constexpr unsigned int GJBIPAMPICI_TypeDefinitionIndex = 80831;

	class GJBIPAMPICI : public ::System::Object
	{
	public:
		::EBPDFBGLNJM* AGPMHKDDDEC; // 0x10
		::System::Void _ctor(::EBPDFBGLNJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPDFBGLNJM*))((::PBYTE)hIl2Cpp + GJBIPAMPICI_CTOR_OFFSET))(this, a1);
		}

		::System::Void MJILEKJLODM(::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOFHFKPKKJI*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJBIPAMPICI_MJILEKJLODM_OFFSET))(this, a1, a2);
		}

		::System::Void JOINNKMACGE(::AOFHFKPKKJI* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AOFHFKPKKJI*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GJBIPAMPICI_JOINNKMACGE_OFFSET))(this, a1, a2);
		}

		::System::Void NKPMGAIDFJE(::ECNEEKNHIOE* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJBIPAMPICI_NKPMGAIDFJE_OFFSET))(this, a1, a2);
		}

		::System::Boolean NOHILMOBENM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GJBIPAMPICI_NOHILMOBENM_OFFSET))(this, a1);
		}

		::System::Boolean PMMFMADNPLD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJBIPAMPICI_PMMFMADNPLD_OFFSET))(this, a1);
		}

		::System::Boolean FKCIGNGIOCO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJBIPAMPICI_FKCIGNGIOCO_OFFSET))(this, a1);
		}

	};
