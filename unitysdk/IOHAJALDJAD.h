#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IOHAJALDJAD;
class IPOILCLEDEE;
namespace RPG::GameCore { class TargetEvaluator; }

#define IOHAJALDJAD_CTOR_OFFSET UNITYSDK_OFFSET(0xC9A0BF0)
#define IOHAJALDJAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC9A0C00)
#define IOHAJALDJAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC9A0BC0)

inline static constexpr unsigned int IOHAJALDJAD_TypeDefinitionIndex = 21428;

	class IOHAJALDJAD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MCLLALGABAB; // 0x18
		::IPOILCLEDEE* OIEDPBFPAIG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHAJALDJAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IOHAJALDJAD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IOHAJALDJAD*))((::PBYTE)hIl2Cpp + IOHAJALDJAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IOHAJALDJAD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IOHAJALDJAD*))((::PBYTE)hIl2Cpp + IOHAJALDJAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
