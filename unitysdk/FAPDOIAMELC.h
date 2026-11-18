#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKKCKFHGGPG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KPGGIIIPBCD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FAPDOIAMELC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x166315B0)
#define FAPDOIAMELC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16631330)
#define FAPDOIAMELC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16631340)
#define FAPDOIAMELC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16631400)
#define FAPDOIAMELC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16631530)
#define FAPDOIAMELC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x166319B0)
#define FAPDOIAMELC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x166316E0)
#define FAPDOIAMELC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16630F80)
#define FAPDOIAMELC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16631990)
#define FAPDOIAMELC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16630F60)
#define FAPDOIAMELC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16631240)
#define FAPDOIAMELC__CTOR_OFFSET UNITYSDK_OFFSET(0x16631690)

inline static constexpr unsigned int FAPDOIAMELC_TypeDefinitionIndex = 16967;

class FAPDOIAMELC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::JKKCKFHGGPG DHDJDGFNBOA; // 0x28
	::Il2CppArray<::KPGGIIIPBCD*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPDOIAMELC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPDOIAMELC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPDOIAMELC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPDOIAMELC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPDOIAMELC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAPDOIAMELC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FAPDOIAMELC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPDOIAMELC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FAPDOIAMELC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPDOIAMELC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPDOIAMELC_NAMKJOJBAOA_OFFSET))(this);
	}

	::KPGGIIIPBCD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KPGGIIIPBCD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAPDOIAMELC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
