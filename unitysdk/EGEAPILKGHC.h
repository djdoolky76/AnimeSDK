#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyCharacterFaceMaterial; }
namespace RPG::GameCore { class TaskContext; }

#define EGEAPILKGHC_CTOR_OFFSET UNITYSDK_OFFSET(0x13A64E20)
#define EGEAPILKGHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A64E50)

inline static constexpr unsigned int EGEAPILKGHC_TypeDefinitionIndex = 53025;

	class EGEAPILKGHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCharacterFaceMaterial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCharacterFaceMaterial*))((::PBYTE)hIl2Cpp + EGEAPILKGHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEAPILKGHC_ONTASKBEGIN_OFFSET))(this);
		}

	};
