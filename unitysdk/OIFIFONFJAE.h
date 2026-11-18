#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PLDCALLAPKC.h"
#include "unitysdk/System/Object.h"

class JAEBMKENOCJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OIFIFONFJAE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCFC510)
#define OIFIFONFJAE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CCFC2E0)
#define OIFIFONFJAE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CCFC450)
#define OIFIFONFJAE_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1CCFC970)
#define OIFIFONFJAE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CCFC5F0)
#define OIFIFONFJAE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CCFC2F0)
#define OIFIFONFJAE_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1CCFC770)
#define OIFIFONFJAE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CCFCA40)
#define OIFIFONFJAE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCFBF40)
#define OIFIFONFJAE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CCFC950)
#define OIFIFONFJAE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CCFBF20)
#define OIFIFONFJAE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCFC200)
#define OIFIFONFJAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFC720)

inline static constexpr unsigned int OIFIFONFJAE_TypeDefinitionIndex = 12518;

class OIFIFONFJAE : public ::System::Object
{
public:
	::PLDCALLAPKC DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::JAEBMKENOCJ*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OIFIFONFJAE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OIFIFONFJAE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE_FINALIZE_OFFSET))(this);
	}

	::JAEBMKENOCJ* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::JAEBMKENOCJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OIFIFONFJAE_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::JAEBMKENOCJ*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::JAEBMKENOCJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFIFONFJAE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OIFIFONFJAE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
