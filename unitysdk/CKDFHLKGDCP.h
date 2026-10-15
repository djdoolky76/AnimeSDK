#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToastPileIgnore; }

#define CKDFHLKGDCP_CTOR_OFFSET UNITYSDK_OFFSET(0xD756660)
#define CKDFHLKGDCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD756690)

inline static constexpr unsigned int CKDFHLKGDCP_TypeDefinitionIndex = 53408;

	class CKDFHLKGDCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToastPileIgnore* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToastPileIgnore*))((::PBYTE)hIl2Cpp + CKDFHLKGDCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDFHLKGDCP_ONTASKBEGIN_OFFSET))(this);
		}

	};
