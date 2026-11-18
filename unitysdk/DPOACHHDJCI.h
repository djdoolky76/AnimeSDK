#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEEFAAKLDLM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NCEGKHFKBFD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DPOACHHDJCI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A193E10)
#define DPOACHHDJCI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A193B90)
#define DPOACHHDJCI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A193BA0)
#define DPOACHHDJCI_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1A193F40)
#define DPOACHHDJCI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A193C60)
#define DPOACHHDJCI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A193D90)
#define DPOACHHDJCI_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1A194030)
#define DPOACHHDJCI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A194210)
#define DPOACHHDJCI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A1937E0)
#define DPOACHHDJCI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A194010)
#define DPOACHHDJCI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A1937C0)
#define DPOACHHDJCI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A193AA0)
#define DPOACHHDJCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A193EF0)

inline static constexpr unsigned int DPOACHHDJCI_TypeDefinitionIndex = 16812;

class DPOACHHDJCI : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::NCEGKHFKBFD*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::DEEFAAKLDLM DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DPOACHHDJCI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DPOACHHDJCI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::NCEGKHFKBFD*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::NCEGKHFKBFD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI_EJABHIAHIAN_OFFSET))(this);
	}

	::NCEGKHFKBFD* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::NCEGKHFKBFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPOACHHDJCI_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOACHHDJCI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DPOACHHDJCI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
