#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ELFHABPLJJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1551F840)
#define ELFHABPLJJE_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1551F9A0)

	class ELFHABPLJJE : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* JAIEHKHNPIP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFHABPLJJE_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + ELFHABPLJJE_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

	};
