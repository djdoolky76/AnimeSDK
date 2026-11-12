#pragma once
#include "unitysdk/unitysdk.h"
class NMANONOFOMC;
namespace RPG::GameCore { class TaskContext; }

#define NJIOPBEDMOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC4FBE10)
#define NJIOPBEDMOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4FBE40)

inline static constexpr unsigned int NJIOPBEDMOA_TypeDefinitionIndex = 53959;

	class NJIOPBEDMOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMANONOFOMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMANONOFOMC*))((::PBYTE)hIl2Cpp + NJIOPBEDMOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOPBEDMOA_ONTASKBEGIN_OFFSET))(this);
		}

	};
