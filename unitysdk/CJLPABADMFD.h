#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEBMBGBIHHH.h"
#include "unitysdk/RPG/GameCore/MechCraftTraitType.h"
#include "unitysdk/System/Object.h"
class CJLPABADMFD;
class FCOEMCEDLNL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJLPABADMFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEDC60)
#define CJLPABADMFD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBE35E0)

inline static constexpr unsigned int CJLPABADMFD_TypeDefinitionIndex = 11986;

	class CJLPABADMFD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::NEBMBGBIHHH, ::System::UInt32>* IBNALLEGIFH; // 0x10
		::Il2CppArray<::System::UInt32>* PCEHNLCLKGH; // 0x18
		::Il2CppArray<::RPG::GameCore::MechCraftTraitType>* KEDCLDIKAGC; // 0x20
		::Il2CppArray<::System::UInt32>* ENGGEFINDPH; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x30
		::System::Boolean ADEJDFIJOKF; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 BFANELAELAK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLPABADMFD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CJLPABADMFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CJLPABADMFD*))((::PBYTE)hIl2Cpp + CJLPABADMFD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
