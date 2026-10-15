#pragma once
#include "unitysdk/unitysdk.h"
class IFBGOELGAMP;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GHGCKEMFMDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A12D40)
#define GHGCKEMFMDM_LKFBHLBHPDI_OFFSET UNITYSDK_OFFSET(0x15A12EA0)
#define GHGCKEMFMDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A12D70)

inline static constexpr unsigned int GHGCKEMFMDM_TypeDefinitionIndex = 52363;

	class GHGCKEMFMDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IFBGOELGAMP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IFBGOELGAMP*))((::PBYTE)hIl2Cpp + GHGCKEMFMDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGCKEMFMDM_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void LKFBHLBHPDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + GHGCKEMFMDM_LKFBHLBHPDI_OFFSET))(a1);
		}

	};
