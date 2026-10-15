#pragma once
#include "unitysdk/unitysdk.h"
class LDJMFMBBDFK;
namespace RPG::GameCore { class TaskContext; }

#define BGINNILOBFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB189DC0)
#define BGINNILOBFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB189DF0)

inline static constexpr unsigned int BGINNILOBFK_TypeDefinitionIndex = 58596;

	class BGINNILOBFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDJMFMBBDFK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDJMFMBBDFK*))((::PBYTE)hIl2Cpp + BGINNILOBFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGINNILOBFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
