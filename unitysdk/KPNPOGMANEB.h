#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFiveDimEntityAttachTarget; }
namespace RPG::GameCore { class TaskContext; }

#define KPNPOGMANEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C7F10)
#define KPNPOGMANEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5C7F40)

inline static constexpr unsigned int KPNPOGMANEB_TypeDefinitionIndex = 52889;

	class KPNPOGMANEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFiveDimEntityAttachTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFiveDimEntityAttachTarget*))((::PBYTE)hIl2Cpp + KPNPOGMANEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNPOGMANEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
