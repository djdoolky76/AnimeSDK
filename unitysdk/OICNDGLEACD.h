#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHDAFDOMINP.h"
class INHCJHBALFC;

#define OICNDGLEACD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE76B30)
#define OICNDGLEACD_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBE76A90)

	class OICNDGLEACD : public ::BHDAFDOMINP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICNDGLEACD_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::INHCJHBALFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHCJHBALFC*))((::PBYTE)hIl2Cpp + OICNDGLEACD_EXECUTE_OFFSET))(this, a1);
		}

	};
