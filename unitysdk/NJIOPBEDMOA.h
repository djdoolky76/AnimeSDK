#pragma once
#include "unitysdk/unitysdk.h"
class NMANONOFOMC;
namespace RPG::GameCore { class TaskContext; }

#define NJIOPBEDMOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC12000)
#define NJIOPBEDMOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC12030)

inline static constexpr unsigned int NJIOPBEDMOA_TypeDefinitionIndex = 52815;

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
