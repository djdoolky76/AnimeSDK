#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AABGIFAEEEK.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/HLHIKGINAHB.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarChangeOption.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AGGHHCLPALK;
class JGGNIOIBDBC;
class NMBMHCNGCFG;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLIBCMNBLGF_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A08F0)

	class DLIBCMNBLGF : public ::HLHIKGINAHB
	{
	public:
		::RPG::GameCore::BattleGridFightAvatarData* CLMELKFEKMA; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* HHMKHBIKCPN; // 0x60
		::NMBMHCNGCFG* DAJPFEDOLAI; // 0x68
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* FHOELNDHGEH; // 0x70
		::System::Collections::Generic::List_1<::AGGHHCLPALK*>* HHHKPJHAOKK; // 0x78
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* DIGCNLPAJEB; // 0x80
		::System::Collections::Generic::List_1<::AGGHHCLPALK*>* HPLFPOEIFAJ; // 0x88
		::Il2CppArray<::System::UInt32>* PFHEKAOOOPJ; // 0x90
		::Il2CppArray<::JGGNIOIBDBC*>* OEJACCAHJHH; // 0x98
		::System::Int32 BLIFOAEFHIB; // 0xA0
		::AABGIFAEEEK IJEBEEMGOOJ; // 0xA4
		::RPG::GameCore::FixPoint NEPGILFFENF; // 0xA8
		::ACINIALAFDE NMFLLIDLOJE; // 0xB0
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint AIFOJKHJLDD; // 0xB8
		::System::UInt32 GBJLLAJJEOL; // 0xC0
		::System::UInt32 DLOOMDHHNGC; // 0xC4
		::System::UInt32 KPAHFGEFKEB; // 0xC8
		::System::Boolean LHFPPPKPNMM; // 0xCC
		::System::Byte _padding1[0x3];
		::RPG::GameCore::AvatarRowWrapperDeriveType DJLAEMKAOKE; // 0xD0
		::System::UInt32 PKJDFMCKNMC; // 0xD4
		::System::UInt32 BAFNGNPHHEC; // 0xD8
		::System::UInt32 GDIMKFNECOK; // 0xDC
		::System::UInt32 AAGKEBFHLMC; // 0xE0
		::RPG::GameCore::AvatarChangeOption KFGPAOBJKKB; // 0xE4
		::RPG::GameCore::FixPoint JCDBMGGLNIB; // 0xE8
		::RPG::GameCore::FixPoint JHOIBMEKNOD; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLIBCMNBLGF_CTOR_OFFSET))(this);
		}

	};
