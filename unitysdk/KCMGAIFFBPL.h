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

#define KCMGAIFFBPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A48A4F0)
#define KCMGAIFFBPL_FKNKMOFOODM_OFFSET UNITYSDK_OFFSET(0x1A48A400)

inline static constexpr unsigned int KCMGAIFFBPL_TypeDefinitionIndex = 58868;

	class KCMGAIFFBPL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MDDJNELCOMK*>* BNCNCFMAMIG; // 0x10
		::System::String* FCAHMLGMDMN; // 0x18
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x20
		::System::String* JKMABBEGEAH; // 0x28
		::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x30
		::KLJLODIBPDF* HGLEDGGDHKI; // 0x38
		::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x40
		::System::String* ECLCEDOLOBG; // 0x48
		::System::String* OLOIFNNLKJP; // 0x50
		::System::String* KOOOKCNNPFE; // 0x58
		::RPG::GameCore::FixPoint APHMDCIGKEK; // 0x60
		::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x68
		::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x6C
		::System::Int32 EOIHOACNHDH; // 0x70
		::System::Int32 IMPAJLCMHFP; // 0x74
		::System::Int32 EIADCADKKDN; // 0x78
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint JADMAPDKLKL; // 0x80
		::RPG::GameCore::FixPoint HOCMHABKLGJ; // 0x88
		::System::Boolean CAGCHKJHMPD; // 0x90
		::System::Boolean OMKOELNJMGO; // 0x91
		::System::Byte _padding1[0x2];
		::RPG::GameCore::EnergyBarState NPCFKONPCCK; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMGAIFFBPL_CTOR_OFFSET))(this);
		}

		::System::Void FKNKMOFOODM(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + KCMGAIFFBPL_FKNKMOFOODM_OFFSET))(this, a1);
		}

	};
