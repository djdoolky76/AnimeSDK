#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFHFKPKKJI;

#define IEOINFMFCFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15F07250)

inline static constexpr unsigned int IEOINFMFCFN_TypeDefinitionIndex = 80596;

	class IEOINFMFCFN : public ::System::Object
	{
	public:
		::AOFHFKPKKJI* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::AOFHFKPKKJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFHFKPKKJI*))((::PBYTE)hIl2Cpp + IEOINFMFCFN_CTOR_OFFSET))(this, a1);
		}

	};
