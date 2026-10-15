#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropCurveMoveModifySpeed; }
namespace RPG::GameCore { class TaskContext; }

#define DEPHDMGECFC_CTOR_OFFSET UNITYSDK_OFFSET(0xE51FFF0)
#define DEPHDMGECFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE520020)

inline static constexpr unsigned int DEPHDMGECFC_TypeDefinitionIndex = 58306;

	class DEPHDMGECFC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveModifySpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveModifySpeed*))((::PBYTE)hIl2Cpp + DEPHDMGECFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPHDMGECFC_ONTASKBEGIN_OFFSET))(this);
		}

	};
