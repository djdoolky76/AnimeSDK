#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityData; }

#define ACONFLKJFEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB12CD00)
#define ACONFLKJFEM_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xB12CC80)

	class ACONFLKJFEM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACONFLKJFEM_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + ACONFLKJFEM_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

	};
