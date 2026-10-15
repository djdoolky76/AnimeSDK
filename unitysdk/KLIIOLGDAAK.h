#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLKAJKKLGOL;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

#define KLIIOLGDAAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8DA190)
#define KLIIOLGDAAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DA270)

inline static constexpr unsigned int KLIIOLGDAAK_TypeDefinitionIndex = 42288;

	class KLIIOLGDAAK : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::UInt32>* BIGDDJDOLEE; // 0x10
		::RPG::PoolList_1<::System::UInt32>* NHDAHFMJJOD; // 0x18
		::RPG::PoolDictionary_2<::System::UInt32, ::PLKAJKKLGOL*>* JPBJKOAEGPM; // 0x20
		::RPG::PoolDictionary_2<::System::UInt32, ::PLKAJKKLGOL*>* HJNCDAHPMKD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIIOLGDAAK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIIOLGDAAK_CLEAR_OFFSET))(this);
		}

	};
