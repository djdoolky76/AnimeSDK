#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Expression/Precedence.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define DEGPLAGNABP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD11070)

	class DEGPLAGNABP : public ::System::Object
	{
	public:
		::System::Action* MMLNGGEKDEN; // 0x10
		::System::Action* ECHFHBKOMLC; // 0x18
		::RPG::Expression::Precedence BPCGJGFOAGM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGPLAGNABP_CTOR_OFFSET))(this);
		}

	};
