#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class NOEBJBDLNGN;
namespace RPG::GameCore { class ST_ByDistanceToEnchantTarget; }
namespace RPG::GameCore { class TaskContext; }

#define BLNGJEBNEGL_CTOR_OFFSET UNITYSDK_OFFSET(0x18B58EA0)
#define BLNGJEBNEGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B59400)
#define BLNGJEBNEGL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18B59020)

inline static constexpr unsigned int BLNGJEBNEGL_TypeDefinitionIndex = 53292;

	class BLNGJEBNEGL
	{
	public:
		::GELIALJDFBL* LJLLGOEGPIM; // 0x28
		::NOEBJBDLNGN* KDKKFJKEIAA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + BLNGJEBNEGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNGJEBNEGL_EVALUATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNGJEBNEGL_DISPOSE_OFFSET))(this);
		}

	};
