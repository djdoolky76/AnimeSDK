#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKCBDMDMMDM.h"

namespace System { class String; }

#define MFIIHMHELMJ_AHMBGIGDBFO_OFFSET UNITYSDK_OFFSET(0x15E2A9B0)
#define MFIIHMHELMJ_INJIKLJKAKK_OFFSET UNITYSDK_OFFSET(0x15E2A9C0)

inline static constexpr unsigned int MFIIHMHELMJ_TypeDefinitionIndex = 48293;

class MFIIHMHELMJ : public ::System::Object
{
public:
	static ::CKCBDMDMMDM AHMBGIGDBFO()
	{
		return ((::CKCBDMDMMDM(*)())((::PBYTE)hIl2Cpp + MFIIHMHELMJ_AHMBGIGDBFO_OFFSET))();
	}

	static ::CKCBDMDMMDM INJIKLJKAKK(::System::String* NAPFALLANDL)
	{
		return ((::CKCBDMDMMDM(*)(::System::String*))((::PBYTE)hIl2Cpp + MFIIHMHELMJ_INJIKLJKAKK_OFFSET))(NAPFALLANDL);
	}
};
