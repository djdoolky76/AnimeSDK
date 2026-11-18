#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_MPILOAMJCCK_LGEJDELAGBA_OFFSET UNITYSDK_OFFSET(0x1BF33E10)
#define PNJDGHBEMLK_MPILOAMJCCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF33E00)

inline static constexpr unsigned int PNJDGHBEMLK_MPILOAMJCCK_TypeDefinitionIndex = 64972;

class PNJDGHBEMLK_MPILOAMJCCK : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MPILOAMJCCK__CTOR_OFFSET))(this);
	}

	::System::Void LGEJDELAGBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MPILOAMJCCK_LGEJDELAGBA_OFFSET))(this);
	}
};
