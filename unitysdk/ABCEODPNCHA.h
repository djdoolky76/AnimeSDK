#pragma once
#include "unitysdk/unitysdk.h"
class MCOOAPOCCPO;
namespace RPG::GameCore { class TaskContext; }

#define ABCEODPNCHA_CTOR_OFFSET UNITYSDK_OFFSET(0x18C9D1C0)
#define ABCEODPNCHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C9D1F0)

inline static constexpr unsigned int ABCEODPNCHA_TypeDefinitionIndex = 59285;

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
