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

#define KCMGAIFFBPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB33DD30)
#define KCMGAIFFBPL_FKNKMOFOODM_OFFSET UNITYSDK_OFFSET(0xB33DC40)

inline static constexpr unsigned int KCMGAIFFBPL_TypeDefinitionIndex = 57639;

	class KCMGAIFFBPL : public ::System::Object
	{
	public:
		::System::String* ECLCEDOLOBG; // 0x10
		::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x18
		::RPG::GameCore::MonsterEnergyBarBaseClickConfig* LBNFEKIPKCL; // 0x20
		::System::String* JKMABBEGEAH; // 0x28
		::System::String* OLOIFNNLKJP; // 0x30
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x38
		::System::Collections::Generic::List_1<::MDDJNELCOMK*>* BNCNCFMAMIG; // 0x40
		::System::String* FCAHMLGMDMN; // 0x48
		::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x50
		::System::String* KOOOKCNNPFE; // 0x58
		::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x60
		::System::Int32 EOIHOACNHDH; // 0x64
		::System::Int32 EIADCADKKDN; // 0x68
		::System::Boolean OMKOELNJMGO; // 0x6C
		::System::Boolean CAGCHKJHMPD; // 0x6D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FixPoint HOCMHABKLGJ; // 0x70
		::RPG::GameCore::FixPoint APHMDCIGKEK; // 0x78
		::RPG::GameCore::FixPoint JADMAPDKLKL; // 0x80
		::RPG::GameCore::EnergyBarState NPCFKONPCCK; // 0x88
		::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x8C
		::System::Int32 IMPAJLCMHFP; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMGAIFFBPL_CTOR_OFFSET))(this);
		}

		::System::Void FKNKMOFOODM(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + KCMGAIFFBPL_FKNKMOFOODM_OFFSET))(this, a1);
		}

	};
