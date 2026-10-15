#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }

#define BDNLCPKCNBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x162F88A0)
#define BDNLCPKCNBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162F8300)
#define BDNLCPKCNBJ_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0x162F8580)
#define BDNLCPKCNBJ_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x162F87C0)
#define BDNLCPKCNBJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x162F8760)
#define BDNLCPKCNBJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x162F7E70)
#define BDNLCPKCNBJ_NGKLKPIEGFI_OFFSET UNITYSDK_OFFSET(0x162F8100)
#define BDNLCPKCNBJ_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0x162F8820)
#define BDNLCPKCNBJ_PNMONIDIDMP_OFFSET UNITYSDK_OFFSET(0x162F8860)

inline static constexpr unsigned int BDNLCPKCNBJ_TypeDefinitionIndex = 57484;

	class BDNLCPKCNBJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MMBALLEHPBM; // 0x10
		::RPG::GameCore::GameEntity* FHEMCAFOIKG; // 0x18
		::RPG::GameCore::GameEntity* BMGFNCDBKGA; // 0x20
		::System::Boolean GFNOGAPBDBP; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 PFOLDOJPIEH; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void NGKLKPIEGFI(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_NGKLKPIEGFI_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_DISPOSE_OFFSET))(this);
		}

		::System::Void FEKHNFNGLNO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_FEKHNFNGLNO_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void PLNCKDADELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_PLNCKDADELF_OFFSET))(this);
		}

		::System::Void PNMONIDIDMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNLCPKCNBJ_PNMONIDIDMP_OFFSET))(this);
		}

	};
