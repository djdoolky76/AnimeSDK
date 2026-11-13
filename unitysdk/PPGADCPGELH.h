#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMGELDFGKEL.h"
namespace RPG::GameCore { class SetDynamicValueByHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define PPGADCPGELH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A6AB0)

inline static constexpr unsigned int PPGADCPGELH_TypeDefinitionIndex = 56633;

	class PPGADCPGELH : public ::AMGELDFGKEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHPRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHPRatio*))((::PBYTE)hIl2Cpp + PPGADCPGELH_CTOR_OFFSET))(this, a1, a2);
		}

	};
