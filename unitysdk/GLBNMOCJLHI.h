#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddIsometricConnector; }
namespace RPG::GameCore { class TaskContext; }

#define GLBNMOCJLHI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9ED60)
#define GLBNMOCJLHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A9ED90)

inline static constexpr unsigned int GLBNMOCJLHI_TypeDefinitionIndex = 52324;

	class GLBNMOCJLHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddIsometricConnector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddIsometricConnector*))((::PBYTE)hIl2Cpp + GLBNMOCJLHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBNMOCJLHI_ONTASKBEGIN_OFFSET))(this);
		}

	};
