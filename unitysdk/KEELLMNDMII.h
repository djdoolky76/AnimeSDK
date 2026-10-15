#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KEELLMNDMII_CTOR_OFFSET UNITYSDK_OFFSET(0xB375290)

inline static constexpr unsigned int KEELLMNDMII_TypeDefinitionIndex = 56326;

	class KEELLMNDMII : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* HEDHGPKEGBI; // 0x10
		::Il2CppArray<::System::UInt32>* IBCHGLEKBIK; // 0x18
		::System::UInt32 PIKBPDAMGML; // 0x20
		::System::UInt32 ODHIDLBAPIG; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEELLMNDMII_CTOR_OFFSET))(this);
		}

	};
