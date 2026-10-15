#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MJBHDBPGIEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB95CF00)
#define MJBHDBPGIEG_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xB95D060)

inline static constexpr unsigned int MJBHDBPGIEG_TypeDefinitionIndex = 61715;

	class MJBHDBPGIEG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* JAIEHKHNPIP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBHDBPGIEG_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + MJBHDBPGIEG_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

	};
