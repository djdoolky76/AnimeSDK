#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveStreamingSource; }
namespace RPG::GameCore { class TaskContext; }

#define OBABBCCKHCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6FDF0)
#define OBABBCCKHCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AB6FE20)

inline static constexpr unsigned int OBABBCCKHCL_TypeDefinitionIndex = 59646;

	class OBABBCCKHCL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveStreamingSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveStreamingSource*))((::PBYTE)hIl2Cpp + OBABBCCKHCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBABBCCKHCL_ONTASKBEGIN_OFFSET))(this);
		}

	};
