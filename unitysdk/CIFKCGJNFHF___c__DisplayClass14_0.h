#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CIFKCGJNFHF___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF6EC20)
#define CIFKCGJNFHF___C__DISPLAYCLASS14_0__GETACTIONSTATBONUSLEVELMAP_B__0_OFFSET UNITYSDK_OFFSET(0xCF70110)

	class CIFKCGJNFHF___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>* res; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFKCGJNFHF___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActionStatBonusLevelMap_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + CIFKCGJNFHF___C__DISPLAYCLASS14_0__GETACTIONSTATBONUSLEVELMAP_B__0_OFFSET))(this, a1);
		}

	};
