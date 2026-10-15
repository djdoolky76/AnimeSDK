#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJFELHPOE.h"
#include "unitysdk/System/Object.h"

#define JGNANLCCPNN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB94A50)
#define JGNANLCCPNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB94AA0)

	class JGNANLCCPNN : public ::System::Object
	{
	public:
		::ABLJFELHPOE BPAPBAFOMCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNANLCCPNN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNANLCCPNN_CLEAR_OFFSET))(this);
		}

	};
