#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APJDGABPDGH;

#define FNHHBOEKJLH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17F18820)
#define FNHHBOEKJLH_CTOR_OFFSET UNITYSDK_OFFSET(0x17F18910)

inline static constexpr unsigned int FNHHBOEKJLH_TypeDefinitionIndex = 82897;

	class FNHHBOEKJLH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHBOEKJLH_CTOR_OFFSET))(this);
		}

		::APJDGABPDGH* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::APJDGABPDGH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNHHBOEKJLH_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
