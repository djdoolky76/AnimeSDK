#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define BBGNOBLIAGL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E89F20)
#define BBGNOBLIAGL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15E8A0D0)
#define BBGNOBLIAGL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15E89F80)
#define BBGNOBLIAGL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15E89F30)

inline static constexpr unsigned int BBGNOBLIAGL_TypeDefinitionIndex = 76925;

	class BBGNOBLIAGL : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BBGNOBLIAGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGNOBLIAGL_TEARDOWN_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGNOBLIAGL_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGNOBLIAGL_EXECUTE_OFFSET))(this);
		}

	};
