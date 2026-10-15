#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLFFHLFDCDH;

#define OJINEGDOPCG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9951A0)
#define OJINEGDOPCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C995200)

	class OJINEGDOPCG : public ::System::Object
	{
	public:
		::NLFFHLFDCDH* DOGJABNGIJK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJINEGDOPCG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJINEGDOPCG_CLEAR_OFFSET))(this);
		}

	};
