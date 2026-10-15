#pragma once
#include "unitysdk/unitysdk.h"
class ANJHFENLOIJ;
namespace RPG::GameCore { class TaskContext; }

#define EACLDGJNMFB_CTOR_OFFSET UNITYSDK_OFFSET(0x126711B0)
#define EACLDGJNMFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x126711E0)

inline static constexpr unsigned int EACLDGJNMFB_TypeDefinitionIndex = 55047;

	class EACLDGJNMFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ANJHFENLOIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ANJHFENLOIJ*))((::PBYTE)hIl2Cpp + EACLDGJNMFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACLDGJNMFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
