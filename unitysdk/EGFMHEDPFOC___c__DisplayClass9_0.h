#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class Tuple; }

#define EGFMHEDPFOC___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14517790)
#define EGFMHEDPFOC___C__DISPLAYCLASS9_0___GETUPTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x14517EA0)

	class EGFMHEDPFOC___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIFloatingTextType floatType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetUpText_b__0(::System::Tuple* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Tuple*))((::PBYTE)hIl2Cpp + EGFMHEDPFOC___C__DISPLAYCLASS9_0___GETUPTEXT_B__0_OFFSET))(this, a1);
		}

	};
