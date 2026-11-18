#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICDINKHEHJO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BPLMGEIBKPM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FCCICIENIND_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187B4C90)
#define FCCICIENIND_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187B4A50)
#define FCCICIENIND_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x187B4BD0)
#define FCCICIENIND_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x187B52C0)
#define FCCICIENIND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187B4D70)
#define FCCICIENIND_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x187B4A60)
#define FCCICIENIND_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x187B50C0)
#define FCCICIENIND_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x187B4EF0)
#define FCCICIENIND_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x187B46A0)
#define FCCICIENIND_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x187B52A0)
#define FCCICIENIND_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x187B4680)
#define FCCICIENIND_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x187B4960)
#define FCCICIENIND__CTOR_OFFSET UNITYSDK_OFFSET(0x187B4EA0)

inline static constexpr unsigned int FCCICIENIND_TypeDefinitionIndex = 16652;

class FCCICIENIND : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::ICDINKHEHJO DHDJDGFNBOA; // 0x18
	::Il2CppArray<::BPLMGEIBKPM*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCCICIENIND_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FCCICIENIND_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FCCICIENIND_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BPLMGEIBKPM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::BPLMGEIBKPM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCCICIENIND_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BPLMGEIBKPM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BPLMGEIBKPM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCICIENIND_NAMKJOJBAOA_OFFSET))(this);
	}
};
