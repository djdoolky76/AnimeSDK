#pragma once
#include "unitysdk/unitysdk.h"
class MCOOAPOCCPO;
namespace RPG::GameCore { class TaskContext; }

#define ABCEODPNCHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EC2A0)
#define ABCEODPNCHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0EC2D0)

inline static constexpr unsigned int ABCEODPNCHA_TypeDefinitionIndex = 58046;

	class ABCEODPNCHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MCOOAPOCCPO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MCOOAPOCCPO*))((::PBYTE)hIl2Cpp + ABCEODPNCHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCEODPNCHA_ONTASKBEGIN_OFFSET))(this);
		}

	};
