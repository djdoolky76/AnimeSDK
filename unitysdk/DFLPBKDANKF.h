#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEJIPOIKFGP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EPNCKMPBIGE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFLPBKDANKF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16617F50)
#define DFLPBKDANKF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16617D20)
#define DFLPBKDANKF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16617E90)
#define DFLPBKDANKF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16618030)
#define DFLPBKDANKF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16617D30)
#define DFLPBKDANKF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16618190)
#define DFLPBKDANKF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16618390)
#define DFLPBKDANKF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16617980)
#define DFLPBKDANKF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16618170)
#define DFLPBKDANKF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16617960)
#define DFLPBKDANKF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16617C40)
#define DFLPBKDANKF__CTOR_OFFSET UNITYSDK_OFFSET(0x16618160)

inline static constexpr unsigned int DFLPBKDANKF_TypeDefinitionIndex = 11262;

class DFLPBKDANKF : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::EPNCKMPBIGE*>* OJMBOGGMIKO; // 0x20
	::JEJIPOIKFGP DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLPBKDANKF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLPBKDANKF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLPBKDANKF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFLPBKDANKF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFLPBKDANKF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLPBKDANKF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLPBKDANKF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLPBKDANKF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLPBKDANKF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLPBKDANKF_NAMKJOJBAOA_OFFSET))(this);
	}

	::EPNCKMPBIGE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EPNCKMPBIGE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFLPBKDANKF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFLPBKDANKF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
