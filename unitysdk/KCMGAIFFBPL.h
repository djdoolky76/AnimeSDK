#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Object.h"
class KCMGAIFFBPL;
class MDDJNELCOMK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterEnergyBarBaseClickConfig; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCMGAIFFBPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB337220)
#define KCMGAIFFBPL_FKNKMOFOODM_OFFSET UNITYSDK_OFFSET(0xB337130)

inline static constexpr unsigned int KCMGAIFFBPL_TypeDefinitionIndex = 57639;

	class KCMGAIFFBPL : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::RPG::GameCore::MonsterEnergyBarBaseClickConfig* LBNFEKIPKCL; // 0x18
		::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x20
		::System::String* KOOOKCNNPFE; // 0x28
		::System::String* JKMABBEGEAH; // 0x30
		::System::String* FCAHMLGMDMN; // 0x38
		::System::String* ECLCEDOLOBG; // 0x40
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x48
		::System::Collections::Generic::List_1<::MDDJNELCOMK*>* BNCNCFMAMIG; // 0x50
		::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x58
		::System::Int32 EIADCADKKDN; // 0x60
		::RPG::GameCore::EnergyBarState NPCFKONPCCK; // 0x64
		::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x68
		::System::Int32 EOIHOACNHDH; // 0x6C
		::RPG::GameCore::FixPoint APHMDCIGKEK; // 0x70
		::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x78
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint HOCMHABKLGJ; // 0x80
		::RPG::GameCore::FixPoint JADMAPDKLKL; // 0x88
		::System::Boolean CAGCHKJHMPD; // 0x90
		::System::Boolean OMKOELNJMGO; // 0x91
		::System::Byte _padding1[0x2];
		::System::Int32 IMPAJLCMHFP; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMGAIFFBPL_CTOR_OFFSET))(this);
		}

		::System::Void FKNKMOFOODM(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + KCMGAIFFBPL_FKNKMOFOODM_OFFSET))(this, a1);
		}

	};
