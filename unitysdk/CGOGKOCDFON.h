#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByMuseumProjectorThemeNum; }
namespace RPG::GameCore { class TaskContext; }

#define CGOGKOCDFON_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8C640)
#define CGOGKOCDFON_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC8C670)

inline static constexpr unsigned int CGOGKOCDFON_TypeDefinitionIndex = 53154;

	class CGOGKOCDFON
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + CGOGKOCDFON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOGKOCDFON_EVALUATE_OFFSET))(this);
		}

	};
