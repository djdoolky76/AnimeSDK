#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AABGIFAEEEK.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/HLHIKGINAHB.h"
#include "unitysdk/OECEIBFKDGD.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarChangeOption.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AGGHHCLPALK;
class JGGNIOIBDBC;
class NMBMHCNGCFG;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLIBCMNBLGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1866EE10)

inline static constexpr unsigned int DLIBCMNBLGF_TypeDefinitionIndex = 58104;

	class DLIBCMNBLGF : public ::HLHIKGINAHB
	{
	public:
		::Il2CppArray<::System::UInt32>* PFHEKAOOOPJ; // 0x78
		::System::String* CONJBDEGJEO; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* HHMKHBIKCPN; // 0x88
		::RPG::GameCore::BattleGridFightAvatarData* CLMELKFEKMA; // 0x90
		::Il2CppArray<::JGGNIOIBDBC*>* OEJACCAHJHH; // 0x98
		::System::Collections::Generic::List_1<::AGGHHCLPALK*>* HHHKPJHAOKK; // 0xA0
		::System::Collections::Generic::List_1<::OECEIBFKDGD>* NENAEDGMNMJ; // 0xA8
		::System::Collections::Generic::List_1<::AGGHHCLPALK*>* HPLFPOEIFAJ; // 0xB0
		::NMBMHCNGCFG* DAJPFEDOLAI; // 0xB8
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* DIGCNLPAJEB; // 0xC0
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* FHOELNDHGEH; // 0xC8
		::Il2CppArray<::System::UInt32>* COOHNBMOGLF; // 0xD0
		::RPG::GameCore::AvatarRowWrapperDeriveType DJLAEMKAOKE; // 0xD8
		::System::UInt32 GBJLLAJJEOL; // 0xDC
		::RPG::GameCore::FixPoint NEPGILFFENF; // 0xE0
		::System::UInt32 PKJDFMCKNMC; // 0xE8
		::System::Int32 BLIFOAEFHIB; // 0xEC
		::System::UInt32 BAFNGNPHHEC; // 0xF0
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint JCDBMGGLNIB; // 0xF8
		::AABGIFAEEEK IJEBEEMGOOJ; // 0x100
		::System::UInt32 KPAHFGEFKEB; // 0x104
		::RPG::GameCore::AvatarChangeOption KFGPAOBJKKB; // 0x108
		::System::Boolean LHFPPPKPNMM; // 0x10C
		::System::Byte _padding1[0x3];
		::RPG::GameCore::FixPoint JHOIBMEKNOD; // 0x110
		::System::UInt32 GDIMKFNECOK; // 0x118
		::System::UInt32 AAGKEBFHLMC; // 0x11C
		::RPG::GameCore::FixPoint AIFOJKHJLDD; // 0x120
		::ACINIALAFDE NMFLLIDLOJE; // 0x128
		::System::UInt32 DLOOMDHHNGC; // 0x12C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLIBCMNBLGF_CTOR_OFFSET))(this);
		}

	};
