#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLNGJACJJKB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GBPEDCBGNNM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EBEKNGNNBGP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17F26470)
#define EBEKNGNNBGP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17F26230)
#define EBEKNGNNBGP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17F263B0)
#define EBEKNGNNBGP_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x17F268D0)
#define EBEKNGNNBGP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F26550)
#define EBEKNGNNBGP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17F26240)
#define EBEKNGNNBGP_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x17F266D0)
#define EBEKNGNNBGP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17F269A0)
#define EBEKNGNNBGP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17F25E80)
#define EBEKNGNNBGP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17F268B0)
#define EBEKNGNNBGP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17F25E60)
#define EBEKNGNNBGP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17F26140)
#define EBEKNGNNBGP__CTOR_OFFSET UNITYSDK_OFFSET(0x17F26680)

inline static constexpr unsigned int EBEKNGNNBGP_TypeDefinitionIndex = 13825;

class EBEKNGNNBGP : public ::System::Object
{
public:
	::JLNGJACJJKB DHDJDGFNBOA; // 0x10
	::Il2CppArray<::GBPEDCBGNNM*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_FINALIZE_OFFSET))(this);
	}

	::GBPEDCBGNNM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::GBPEDCBGNNM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::GBPEDCBGNNM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::GBPEDCBGNNM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EBEKNGNNBGP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
