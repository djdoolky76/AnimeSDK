#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideEndTransferColor; }
namespace RPG::GameCore { class TaskContext; }

#define LHOHOLCDCKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BFC90)
#define LHOHOLCDCKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6BFCC0)

inline static constexpr unsigned int LHOHOLCDCKI_TypeDefinitionIndex = 53048;

	class LHOHOLCDCKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideEndTransferColor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideEndTransferColor*))((::PBYTE)hIl2Cpp + LHOHOLCDCKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOHOLCDCKI_ONTASKBEGIN_OFFSET))(this);
		}

	};
