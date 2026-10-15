#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CreateCurvePropGroupPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define KNAGKABHGMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB576A90)
#define KNAGKABHGMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB576AC0)
#define KNAGKABHGMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB576B20)

inline static constexpr unsigned int KNAGKABHGMH_TypeDefinitionIndex = 58048;

	class KNAGKABHGMH
	{
	public:
		::UnityEngine::GameObject* CBMJOLKJOBK; // 0x28
		::System::String* JLKFFKGABBC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateCurvePropGroupPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + KNAGKABHGMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAGKABHGMH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAGKABHGMH_ONTASKBEGIN_OFFSET))(this);
		}

	};
