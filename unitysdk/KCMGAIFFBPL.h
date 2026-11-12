#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Object.h"
class KCMGAIFFBPL;
class KLJLODIBPDF;
class MDDJNELCOMK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCMGAIFFBPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC8740)
#define KCMGAIFFBPL_FKNKMOFOODM_OFFSET UNITYSDK_OFFSET(0xBBC8640)

inline static constexpr unsigned int KCMGAIFFBPL_TypeDefinitionIndex = 58868;

	class KCMGAIFFBPL : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::String* ECLCEDOLOBG; // 0x18
		::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x20
		::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x28
		::System::Collections::Generic::List_1<::MDDJNELCOMK*>* BNCNCFMAMIG; // 0x30
		::System::String* JKMABBEGEAH; // 0x38
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x40
		::System::String* KOOOKCNNPFE; // 0x48
		::System::String* FCAHMLGMDMN; // 0x50
		::KLJLODIBPDF* HGLEDGGDHKI; // 0x58
		::System::Int32 IMPAJLCMHFP; // 0x60
		::RPG::GameCore::EnergyBarState NPCFKONPCCK; // 0x64
		::System::Int32 EIADCADKKDN; // 0x68
		::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x6C
		::System::Int32 EOIHOACNHDH; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint JADMAPDKLKL; // 0x78
		::RPG::GameCore::FixPoint HOCMHABKLGJ; // 0x80
		::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x88
		::System::Boolean OMKOELNJMGO; // 0x8C
		::System::Boolean CAGCHKJHMPD; // 0x8D
		::System::Byte _padding1[0x2];
		::RPG::GameCore::FixPoint APHMDCIGKEK; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMGAIFFBPL_CTOR_OFFSET))(this);
		}

		::System::Void FKNKMOFOODM(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + KCMGAIFFBPL_FKNKMOFOODM_OFFSET))(this, a1);
		}

	};
