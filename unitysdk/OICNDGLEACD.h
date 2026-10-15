#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHDAFDOMINP.h"
class INHCJHBALFC;

#define OICNDGLEACD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6F600)
#define OICNDGLEACD_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBE6F560)

inline static constexpr unsigned int OICNDGLEACD_TypeDefinitionIndex = 54262;

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
