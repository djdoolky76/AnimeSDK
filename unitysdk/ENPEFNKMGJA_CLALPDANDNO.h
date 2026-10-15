#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEEJHBCIGGI;
class ENPEFNKMGJA;
class PMOMFDCLALP;

#define ENPEFNKMGJA_CLALPDANDNO_CTOR_OFFSET UNITYSDK_OFFSET(0x155B6EA0)
#define ENPEFNKMGJA_CLALPDANDNO_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0x155B6EB0)

inline static constexpr unsigned int ENPEFNKMGJA_CLALPDANDNO_TypeDefinitionIndex = 79752;

	class ENPEFNKMGJA_CLALPDANDNO : public ::System::Object
	{
	public:
		::BEEJHBCIGGI* ILPEEPDIPHL; // 0x10
		::System::Void _ctor(::BEEJHBCIGGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEJHBCIGGI*))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_CLALPDANDNO_CTOR_OFFSET))(this, a1);
		}

		::ENPEFNKMGJA* LHLALAKKKKJ(::PMOMFDCLALP* a1)
		{
			return ((::ENPEFNKMGJA*(*)(::PVOID, ::PMOMFDCLALP*))((::PBYTE)hIl2Cpp + ENPEFNKMGJA_CLALPDANDNO_LHLALAKKKKJ_OFFSET))(this, a1);
		}

	};
