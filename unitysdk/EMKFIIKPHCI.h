#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KHLFLPADDOG.h"
#include "unitysdk/System/Object.h"

class INCDILINPCC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EMKFIIKPHCI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19C11C10)
#define EMKFIIKPHCI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19C119D0)
#define EMKFIIKPHCI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19C11B50)
#define EMKFIIKPHCI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19C11CF0)
#define EMKFIIKPHCI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19C119E0)
#define EMKFIIKPHCI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19C12060)
#define EMKFIIKPHCI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19C11E90)
#define EMKFIIKPHCI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19C11620)
#define EMKFIIKPHCI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19C11E70)
#define EMKFIIKPHCI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19C11600)
#define EMKFIIKPHCI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19C118E0)
#define EMKFIIKPHCI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C11E20)

inline static constexpr unsigned int EMKFIIKPHCI_TypeDefinitionIndex = 16719;

class EMKFIIKPHCI : public ::System::Object
{
public:
	::KHLFLPADDOG DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::INCDILINPCC*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFIIKPHCI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::INCDILINPCC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::INCDILINPCC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFIIKPHCI_CHLEALKAOJO_OFFSET))(this);
	}
};
