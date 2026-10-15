#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class APPLKDBLEAG;
class FCOEMCEDLNL;
class JMPLMDKPNDA;
namespace RPG::GameCore { class FateRinMonsterHitBoxOffsetEntry; }
namespace RPG::GameCore { class FateRinStageSpecifiedDeckEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APPLKDBLEAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC13F0)
#define APPLKDBLEAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCC0F60)

inline static constexpr unsigned int APPLKDBLEAG_TypeDefinitionIndex = 18152;

	class APPLKDBLEAG : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FateRinMonsterHitBoxOffsetEntry*>* KAKOEADOGFO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JMPLMDKPNDA*>* EECOOEBAPEB; // 0x18
		::System::String* HOHBFFNDIKF; // 0x20
		::System::String* HCLJHPDOFKH; // 0x28
		::System::String* KHFBNGDEJGK; // 0x30
		::Il2CppArray<::System::UInt32>* DLPLLLENNHN; // 0x38
		::Il2CppArray<::RPG::GameCore::FateRinStageSpecifiedDeckEntry*>* MLDEGKEPEJB; // 0x40
		::Il2CppArray<::System::UInt32>* JFKAEFCAEGN; // 0x48
		::System::Single BMKPADMOOCP; // 0x50
		::System::Single JFMJJKDBCEC; // 0x54
		::System::UInt32 AAPBHIJNEMM; // 0x58
		::System::UInt32 AAFBCHNAKNJ; // 0x5C
		::System::UInt32 BMFPFMDJOMO; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APPLKDBLEAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::APPLKDBLEAG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APPLKDBLEAG*))((::PBYTE)hIl2Cpp + APPLKDBLEAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
