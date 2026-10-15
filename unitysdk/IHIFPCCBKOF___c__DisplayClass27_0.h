#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BANDDFEHONE;

#define IHIFPCCBKOF___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16421850)
#define IHIFPCCBKOF___C__DISPLAYCLASS27_0___GETFIRSTSHOWINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x16421FD0)

inline static constexpr unsigned int IHIFPCCBKOF___c__DisplayClass27_0_TypeDefinitionIndex = 72167;

	class IHIFPCCBKOF___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::BANDDFEHONE* data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetFirstShowIndex_b__0(::BANDDFEHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF___C__DISPLAYCLASS27_0___GETFIRSTSHOWINDEX_B__0_OFFSET))(this, a1);
		}

	};
