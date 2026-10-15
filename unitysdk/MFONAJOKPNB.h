#pragma once
#include "unitysdk/unitysdk.h"
class BALFAPGPFGA;
namespace RPG::GameCore { class TaskContext; }

#define MFONAJOKPNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB90A9F0)
#define MFONAJOKPNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90AA20)

inline static constexpr unsigned int MFONAJOKPNB_TypeDefinitionIndex = 55692;

	class MFONAJOKPNB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BALFAPGPFGA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BALFAPGPFGA*))((::PBYTE)hIl2Cpp + MFONAJOKPNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFONAJOKPNB_ONTASKBEGIN_OFFSET))(this);
		}

	};
