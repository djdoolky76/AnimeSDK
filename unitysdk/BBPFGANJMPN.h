#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
class NAOKFLDEDBJ;
class OHHPOGMFPBF;
namespace RPG::GameCore { class FireProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define BBPFGANJMPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E9E3A0)
#define BBPFGANJMPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E9E4F0)
#define BBPFGANJMPN_IFOMKIPFGMP_OFFSET UNITYSDK_OFFSET(0x15E9EFC0)
#define BBPFGANJMPN_KAMBFDCONPJ_OFFSET UNITYSDK_OFFSET(0x15E9EC80)
#define BBPFGANJMPN_KHAFEIGEIGI_OFFSET UNITYSDK_OFFSET(0x15E9EF20)
#define BBPFGANJMPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E9E5C0)
#define BBPFGANJMPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E9EE20)
#define BBPFGANJMPN_TICK_OFFSET UNITYSDK_OFFSET(0x15E9EE70)

inline static constexpr unsigned int BBPFGANJMPN_TypeDefinitionIndex = 55066;

	class BBPFGANJMPN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::FireProjectileBase* OFKGLJOAMLD; // 0x20
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::NAOKFLDEDBJ* BLDLELNJDML; // 0x30
		::KFELGAIGHAP* BCGLDJBEBPK; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireProjectileBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireProjectileBase*))((::PBYTE)hIl2Cpp + BBPFGANJMPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPFGANJMPN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPFGANJMPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KAMBFDCONPJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::OHHPOGMFPBF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::OHHPOGMFPBF*))((::PBYTE)hIl2Cpp + BBPFGANJMPN_KAMBFDCONPJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPFGANJMPN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBPFGANJMPN_TICK_OFFSET))(this, a1);
		}

		::System::Boolean KHAFEIGEIGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBPFGANJMPN_KHAFEIGEIGI_OFFSET))(this, a1);
		}

		::System::Void IFOMKIPFGMP(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + BBPFGANJMPN_IFOMKIPFGMP_OFFSET))(this, a1);
		}

	};
