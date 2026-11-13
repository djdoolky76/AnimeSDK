#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAHCLJPMCIG;

#define IDKMPJCBMFH_CTOR_OFFSET UNITYSDK_OFFSET(0x17791530)

inline static constexpr unsigned int IDKMPJCBMFH_TypeDefinitionIndex = 83334;

	class IDKMPJCBMFH : public ::System::Object
	{
	public:
		::EAHCLJPMCIG* HNEOOKPBCNK; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor(::EAHCLJPMCIG* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EAHCLJPMCIG*, ::System::Boolean))((::PBYTE)hIl2Cpp + IDKMPJCBMFH_CTOR_OFFSET))(this, a1, a2);
		}

	};
