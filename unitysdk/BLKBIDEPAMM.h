#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class OptionTalkInfo; }

#define BLKBIDEPAMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA755F0)
#define BLKBIDEPAMM_LEICGLBOIDL_OFFSET UNITYSDK_OFFSET(0xBA75590)

inline static constexpr unsigned int BLKBIDEPAMM_TypeDefinitionIndex = 68028;

	class BLKBIDEPAMM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKBIDEPAMM_CTOR_OFFSET))(this);
		}

		::System::Boolean LEICGLBOIDL(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + BLKBIDEPAMM_LEICGLBOIDL_OFFSET))(this, a1);
		}

	};
