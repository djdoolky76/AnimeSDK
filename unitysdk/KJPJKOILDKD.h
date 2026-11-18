#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMLFDMLFGKN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BPJFDPKCAAM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KJPJKOILDKD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17499DD0)
#define KJPJKOILDKD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17499B90)
#define KJPJKOILDKD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17499D10)
#define KJPJKOILDKD_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1749A400)
#define KJPJKOILDKD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17499EB0)
#define KJPJKOILDKD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17499BA0)
#define KJPJKOILDKD_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1749A200)
#define KJPJKOILDKD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1749A030)
#define KJPJKOILDKD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x174997E0)
#define KJPJKOILDKD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1749A3E0)
#define KJPJKOILDKD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x174997C0)
#define KJPJKOILDKD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17499AA0)
#define KJPJKOILDKD__CTOR_OFFSET UNITYSDK_OFFSET(0x17499FE0)

inline static constexpr unsigned int KJPJKOILDKD_TypeDefinitionIndex = 13618;

class KJPJKOILDKD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::BPJFDPKCAAM*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::CMLFDMLFGKN DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KJPJKOILDKD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KJPJKOILDKD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KJPJKOILDKD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BPJFDPKCAAM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::BPJFDPKCAAM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJPJKOILDKD_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BPJFDPKCAAM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BPJFDPKCAAM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJKOILDKD_CHLEALKAOJO_OFFSET))(this);
	}
};
