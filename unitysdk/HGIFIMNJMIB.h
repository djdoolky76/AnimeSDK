#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetPhotoGraphTargets; }
namespace RPG::GameCore { class TaskContext; }

#define HGIFIMNJMIB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C93350)
#define HGIFIMNJMIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C93380)

inline static constexpr unsigned int HGIFIMNJMIB_TypeDefinitionIndex = 53207;

	class HGIFIMNJMIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetPhotoGraphTargets* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetPhotoGraphTargets*))((::PBYTE)hIl2Cpp + HGIFIMNJMIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIFIMNJMIB_ONTASKBEGIN_OFFSET))(this);
		}

	};
