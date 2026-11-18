#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBBDHLEMBGH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JPMACEGMIOC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFCBEAJACEI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B889EB0)
#define IFCBEAJACEI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B889C80)
#define IFCBEAJACEI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B889DF0)
#define IFCBEAJACEI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B889F90)
#define IFCBEAJACEI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B889C90)
#define IFCBEAJACEI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B88A2C0)
#define IFCBEAJACEI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B88A0F0)
#define IFCBEAJACEI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B8898E0)
#define IFCBEAJACEI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B88A0D0)
#define IFCBEAJACEI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B8898C0)
#define IFCBEAJACEI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B889BA0)
#define IFCBEAJACEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88A0C0)

inline static constexpr unsigned int IFCBEAJACEI_TypeDefinitionIndex = 13786;

class IFCBEAJACEI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::BBBDHLEMBGH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::JPMACEGMIOC*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCBEAJACEI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCBEAJACEI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCBEAJACEI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFCBEAJACEI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IFCBEAJACEI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCBEAJACEI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCBEAJACEI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCBEAJACEI_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCBEAJACEI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IFCBEAJACEI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCBEAJACEI_CHLEALKAOJO_OFFSET))(this);
	}

	::JPMACEGMIOC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JPMACEGMIOC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFCBEAJACEI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
