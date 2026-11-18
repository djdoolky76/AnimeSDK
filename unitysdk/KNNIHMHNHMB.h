#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPDOKKNEKKI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NLLNDBOMKLL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KNNIHMHNHMB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x190F3F40)
#define KNNIHMHNHMB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x190F3D10)
#define KNNIHMHNHMB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x190F3E80)
#define KNNIHMHNHMB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x190F4020)
#define KNNIHMHNHMB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x190F3D20)
#define KNNIHMHNHMB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x190F41A0)
#define KNNIHMHNHMB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x190F43F0)
#define KNNIHMHNHMB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x190F3970)
#define KNNIHMHNHMB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x190F43D0)
#define KNNIHMHNHMB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x190F3950)
#define KNNIHMHNHMB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x190F3C30)
#define KNNIHMHNHMB__CTOR_OFFSET UNITYSDK_OFFSET(0x190F4150)

inline static constexpr unsigned int KNNIHMHNHMB_TypeDefinitionIndex = 15745;

class KNNIHMHNHMB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::NLLNDBOMKLL*>* OJMBOGGMIKO; // 0x18
	::FPDOKKNEKKI DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNIHMHNHMB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_FINALIZE_OFFSET))(this);
	}

	::NLLNDBOMKLL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NLLNDBOMKLL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNIHMHNHMB_CHLEALKAOJO_OFFSET))(this);
	}
};
