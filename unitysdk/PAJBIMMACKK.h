#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAJBIMMACKK_PlayerMoveState.h"
#include "unitysdk/System/Object.h"

#define PAJBIMMACKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A4C40)

	class PAJBIMMACKK : public ::System::Object
	{
	public:
		::System::Single MMJEKNOAKOA; // 0x10
		::PAJBIMMACKK_PlayerMoveState MEPFOEEGBEA; // 0x14
		::System::Boolean GJGJCPBLGNB; // 0x18
		::System::Byte _padding0[0x3];
		::PAJBIMMACKK_PlayerMoveState LABNOBJEDBD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJBIMMACKK_CTOR_OFFSET))(this);
		}

	};
