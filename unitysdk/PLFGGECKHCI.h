#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MCBNJHDBJPL.h"
#include "unitysdk/System/Object.h"

class NMELLBFIMMM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PLFGGECKHCI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1FA519D0)
#define PLFGGECKHCI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1FA51790)
#define PLFGGECKHCI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1FA51910)
#define PLFGGECKHCI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FA51AB0)
#define PLFGGECKHCI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1FA517A0)
#define PLFGGECKHCI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1FA51E20)
#define PLFGGECKHCI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1FA51C50)
#define PLFGGECKHCI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1FA513E0)
#define PLFGGECKHCI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1FA51C30)
#define PLFGGECKHCI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1FA513C0)
#define PLFGGECKHCI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FA516A0)
#define PLFGGECKHCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA51BE0)

inline static constexpr unsigned int PLFGGECKHCI_TypeDefinitionIndex = 17005;

class PLFGGECKHCI : public ::System::Object
{
public:
	::Il2CppArray<::NMELLBFIMMM*>* OJMBOGGMIKO; // 0x10
	::MCBNJHDBJPL DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGGECKHCI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGGECKHCI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGGECKHCI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PLFGGECKHCI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PLFGGECKHCI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGGECKHCI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGGECKHCI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGGECKHCI_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGGECKHCI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGGECKHCI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PLFGGECKHCI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::NMELLBFIMMM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NMELLBFIMMM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLFGGECKHCI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
