#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDCDKHALPDP;
class LAECFLNNOFH;

#define EAFENDGLBAN_CNMAPNPGANG_OFFSET UNITYSDK_OFFSET(0x12671130)
#define EAFENDGLBAN_CTOR_OFFSET UNITYSDK_OFFSET(0x12671000)
#define EAFENDGLBAN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12671010)
#define EAFENDGLBAN_GCMIKOOCOGE_OFFSET UNITYSDK_OFFSET(0x126714C0)
#define EAFENDGLBAN_IKPBGDCLDOH_OFFSET UNITYSDK_OFFSET(0x12671080)

inline static constexpr unsigned int EAFENDGLBAN_TypeDefinitionIndex = 77311;

	class EAFENDGLBAN : public ::System::Object
	{
	public:
		::DDCDKHALPDP* PDENFEFCAGN; // 0x10
		::LAECFLNNOFH* FKINCGODJEP; // 0x18
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + EAFENDGLBAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFENDGLBAN_EXECUTE_OFFSET))(this);
		}

		::System::Boolean CNMAPNPGANG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFENDGLBAN_CNMAPNPGANG_OFFSET))(this);
		}

		::System::Boolean IKPBGDCLDOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFENDGLBAN_IKPBGDCLDOH_OFFSET))(this);
		}

		::System::Void GCMIKOOCOGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFENDGLBAN_GCMIKOOCOGE_OFFSET))(this);
		}

	};
