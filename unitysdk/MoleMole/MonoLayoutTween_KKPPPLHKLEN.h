#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }

#define MOLEMOLE_MONOLAYOUTTWEEN_KKPPPLHKLEN_NNCOAJKKPBE_OFFSET UNITYSDK_OFFSET(0x14699AA0)
#define MOLEMOLE_MONOLAYOUTTWEEN_KKPPPLHKLEN__CTOR_OFFSET UNITYSDK_OFFSET(0x14699A90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_KKPPPLHKLEN_TypeDefinitionIndex = 81374;

	class MonoLayoutTween_KKPPPLHKLEN : public ::System::Object
	{
	public:
		::MoleMole::MonoLayoutTween* KLHPEBKNIFB; // 0x10
		::System::Action* IHLBALNBGKM; // 0x18
		::System::Single GLONDIGIPGD; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_KKPPPLHKLEN__CTOR_OFFSET))(this);
		}

		::System::Void NNCOAJKKPBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_KKPPPLHKLEN_NNCOAJKKPBE_OFFSET))(this);
		}
	};
}
