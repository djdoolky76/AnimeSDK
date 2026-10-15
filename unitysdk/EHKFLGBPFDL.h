#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIIEBFKNMJ;
class IGJNPBGEBHE;
class LKPJIAAHLBG;
class LMJPODEEGKK;

#define EHKFLGBPFDL_AFNBGKICCEK_OFFSET UNITYSDK_OFFSET(0x154A24D0)
#define EHKFLGBPFDL_CTOR_OFFSET UNITYSDK_OFFSET(0x154A1840)
#define EHKFLGBPFDL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x154A1850)
#define EHKFLGBPFDL_LCJBLHAKCGC_OFFSET UNITYSDK_OFFSET(0x154A23B0)

inline static constexpr unsigned int EHKFLGBPFDL_TypeDefinitionIndex = 77599;

	class EHKFLGBPFDL : public ::System::Object
	{
	public:
		::LKPJIAAHLBG* EDBJCFAKPCG; // 0x10
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x18
		::LMJPODEEGKK* FKINCGODJEP; // 0x20
		::System::Void _ctor(::LMJPODEEGKK* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + EHKFLGBPFDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKFLGBPFDL_EXECUTE_OFFSET))(this);
		}

		::System::Boolean LCJBLHAKCGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKFLGBPFDL_LCJBLHAKCGC_OFFSET))(this);
		}

		::IGJNPBGEBHE* AFNBGKICCEK()
		{
			return ((::IGJNPBGEBHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKFLGBPFDL_AFNBGKICCEK_OFFSET))(this);
		}

	};
