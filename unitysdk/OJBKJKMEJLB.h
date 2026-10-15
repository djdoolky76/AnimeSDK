#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODCELNBAEIB;

#define OJBKJKMEJLB_CTOR_OFFSET UNITYSDK_OFFSET(0xBEAA510)
#define OJBKJKMEJLB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBEAA520)
#define OJBKJKMEJLB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBEAA7A0)
#define OJBKJKMEJLB_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0xBEAA560)
#define OJBKJKMEJLB_KBDFMOPDIPD_OFFSET UNITYSDK_OFFSET(0xBEAA800)
#define OJBKJKMEJLB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBEAA5A0)

inline static constexpr unsigned int OJBKJKMEJLB_TypeDefinitionIndex = 79097;

	class OJBKJKMEJLB : public ::System::Object
	{
	public:
		::System::UInt32 KBELPMJNDMB; // 0x10
		::System::Boolean PIPLLENMLIM; // 0x14
		::System::Boolean BJOBGLGIGGO; // 0x15
		::System::Byte _padding0[0x2];
		::System::UInt32 BOHKGIMLCNH; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + OJBKJKMEJLB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBKJKMEJLB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBKJKMEJLB_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + OJBKJKMEJLB_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJBKJKMEJLB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KBDFMOPDIPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBKJKMEJLB_KBDFMOPDIPD_OFFSET))(this);
		}

	};
