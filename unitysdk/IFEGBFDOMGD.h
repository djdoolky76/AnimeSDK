#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPKKEMLMLPM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HINEGNKCLCH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFEGBFDOMGD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B88AAA0)
#define IFEGBFDOMGD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B88A870)
#define IFEGBFDOMGD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B88A9E0)
#define IFEGBFDOMGD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B88AB80)
#define IFEGBFDOMGD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B88A880)
#define IFEGBFDOMGD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B88ACC0)
#define IFEGBFDOMGD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B88A4D0)
#define IFEGBFDOMGD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B88A4B0)
#define IFEGBFDOMGD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B88A790)
#define IFEGBFDOMGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88ACB0)

inline static constexpr unsigned int IFEGBFDOMGD_TypeDefinitionIndex = 15885;

class IFEGBFDOMGD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::JPKKEMLMLPM DHDJDGFNBOA; // 0x18
	::Il2CppArray<::HINEGNKCLCH*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGBFDOMGD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGBFDOMGD_CHLEALKAOJO_OFFSET))(this);
	}
};
