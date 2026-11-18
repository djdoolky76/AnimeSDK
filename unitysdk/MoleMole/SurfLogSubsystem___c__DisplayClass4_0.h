#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMODCFDGAKB;

#define MOLEMOLE_SURFLOGSUBSYSTEM___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A721CC0)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__DISPLAYCLASS4_0__RECORDITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1A721CD0)

namespace MoleMole
{
	inline static constexpr unsigned int SurfLogSubsystem___c__DisplayClass4_0_TypeDefinitionIndex = 91234;

	class SurfLogSubsystem___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Int32 itemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RecordItem_b__0(::AMODCFDGAKB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMODCFDGAKB*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__DISPLAYCLASS4_0__RECORDITEM_B__0_OFFSET))(this, x);
		}
	};
}
