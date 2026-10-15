#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Nullable_1.h"
class MDDJNELCOMK;
namespace RPG::GameCore { class MonsterEnergyBarBaseClickConfig; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int HMJGCFJMEAH_TypeDefinitionIndex = 55539;

	struct alignas(8) HMJGCFJMEAH
	{
		::System::Nullable_1<::System::Boolean> CAGCHKJHMPD; // 0x10
		::System::Nullable_1<::System::Boolean> OMKOELNJMGO; // 0x12
		::RPG::GameCore::EnergyBarState MEPFOEEGBEA; // 0x14
		::System::Nullable_1<::System::Int32> IMPAJLCMHFP; // 0x18
		::System::Nullable_1<::System::Int32> EOIHOACNHDH; // 0x20
		::System::Nullable_1<::System::Int32> EIADCADKKDN; // 0x28
		::System::String* OLOIFNNLKJP; // 0x30
		::System::String* FCAHMLGMDMN; // 0x38
		::System::String* JKMABBEGEAH; // 0x40
		::System::String* ECLCEDOLOBG; // 0x48
		::System::String* KOOOKCNNPFE; // 0x50
		::System::Nullable_1<::RPG::GameCore::FixPoint> HOCMHABKLGJ; // 0x58
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> APHMDCIGKEK; // 0x68
		::System::Byte _padding1[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> JADMAPDKLKL; // 0x78
		::System::Byte _padding2[0x8];
		::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x88
		::System::Byte _padding3[0x4];
		::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x90
		::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x98
		::System::Byte _padding4[0x4];
		::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0xA0
		::System::Collections::Generic::List_1<::MDDJNELCOMK*>* BNCNCFMAMIG; // 0xA8
		::RPG::GameCore::MonsterEnergyBarBaseClickConfig* LBNFEKIPKCL; // 0xB0
	};
