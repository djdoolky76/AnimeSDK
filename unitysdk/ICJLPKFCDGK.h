#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPGOLNLGPBJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OLAGEGBEGBF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ICJLPKFCDGK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B12A1E0)
#define ICJLPKFCDGK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B129FB0)
#define ICJLPKFCDGK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B12A120)
#define ICJLPKFCDGK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B12A2C0)
#define ICJLPKFCDGK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B129FC0)
#define ICJLPKFCDGK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B12A440)
#define ICJLPKFCDGK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B129C10)
#define ICJLPKFCDGK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B129BF0)
#define ICJLPKFCDGK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B129ED0)
#define ICJLPKFCDGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B12A3F0)

inline static constexpr unsigned int ICJLPKFCDGK_TypeDefinitionIndex = 12886;

class ICJLPKFCDGK : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::OLAGEGBEGBF*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::GPGOLNLGPBJ DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJLPKFCDGK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICJLPKFCDGK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
