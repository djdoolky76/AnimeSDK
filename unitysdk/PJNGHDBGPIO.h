#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJKKEDINKNH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IHBJPKMDGKH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PJNGHDBGPIO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1737E280)
#define PJNGHDBGPIO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1737E050)
#define PJNGHDBGPIO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1737E1C0)
#define PJNGHDBGPIO_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1737E8E0)
#define PJNGHDBGPIO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1737E360)
#define PJNGHDBGPIO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1737E060)
#define PJNGHDBGPIO_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1737E4E0)
#define PJNGHDBGPIO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1737E710)
#define PJNGHDBGPIO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1737DCB0)
#define PJNGHDBGPIO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1737E6F0)
#define PJNGHDBGPIO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1737DC90)
#define PJNGHDBGPIO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1737DF70)
#define PJNGHDBGPIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1737E490)

inline static constexpr unsigned int PJNGHDBGPIO_TypeDefinitionIndex = 11048;

class PJNGHDBGPIO : public ::System::Object
{
public:
	::IJKKEDINKNH DHDJDGFNBOA; // 0x10
	::Il2CppArray<::IHBJPKMDGKH*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_CHLEALKAOJO_OFFSET))(this);
	}

	::IHBJPKMDGKH* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::IHBJPKMDGKH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::IHBJPKMDGKH*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::IHBJPKMDGKH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNGHDBGPIO_NAMKJOJBAOA_OFFSET))(this);
	}
};
