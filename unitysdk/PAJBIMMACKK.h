#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAJBIMMACKK_PlayerMoveState.h"
#include "unitysdk/System/Object.h"

#define PAJBIMMACKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C976920)

inline static constexpr unsigned int PAJBIMMACKK_TypeDefinitionIndex = 43192;

	class PAJBIMMACKK : public ::System::Object
	{
	public:
		::PAJBIMMACKK_PlayerMoveState LABNOBJEDBD; // 0x10
		::System::Boolean GJGJCPBLGNB; // 0x14
		::System::Byte _padding0[0x3];
		::PAJBIMMACKK_PlayerMoveState MEPFOEEGBEA; // 0x18
		::System::Single MMJEKNOAKOA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJBIMMACKK_CTOR_OFFSET))(this);
		}

	};
