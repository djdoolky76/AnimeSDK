#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCGPJEGBBNK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BHDPINGNGBH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ILFHLLNKJNK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4EF820)
#define ILFHLLNKJNK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4EF5F0)
#define ILFHLLNKJNK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4EF760)
#define ILFHLLNKJNK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4EF900)
#define ILFHLLNKJNK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4EF600)
#define ILFHLLNKJNK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4EFA80)
#define ILFHLLNKJNK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4EF250)
#define ILFHLLNKJNK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4EF230)
#define ILFHLLNKJNK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4EF510)
#define ILFHLLNKJNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EFA30)

inline static constexpr unsigned int ILFHLLNKJNK_TypeDefinitionIndex = 14263;

class ILFHLLNKJNK : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::GCGPJEGBBNK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::BHDPINGNGBH*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFHLLNKJNK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFHLLNKJNK_CHLEALKAOJO_OFFSET))(this);
	}
};
