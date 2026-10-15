#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define DGJNDBAJPIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE840CC0)
#define DGJNDBAJPIN_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xE840CE0)

inline static constexpr unsigned int DGJNDBAJPIN_TypeDefinitionIndex = 76917;

	class DGJNDBAJPIN : public ::System::Object
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + DGJNDBAJPIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJNDBAJPIN_LATEEXECUTE_OFFSET))(this);
		}

	};
