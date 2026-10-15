#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityData; }

#define NEGDBAFNLAI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5D890)
#define NEGDBAFNLAI_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xBB5D810)

inline static constexpr unsigned int NEGDBAFNLAI_TypeDefinitionIndex = 61720;

	class NEGDBAFNLAI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGDBAFNLAI_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + NEGDBAFNLAI_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

	};
