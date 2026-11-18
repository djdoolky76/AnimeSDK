#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NCKJGHGJFEE.h"
#include "unitysdk/System/Object.h"

class LANFLNOPCMC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JKDKMMHNIEF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAFC550)
#define JKDKMMHNIEF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAFC1F0)
#define JKDKMMHNIEF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAFC360)
#define JKDKMMHNIEF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAFC420)
#define JKDKMMHNIEF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAFC200)
#define JKDKMMHNIEF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAFC870)
#define JKDKMMHNIEF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAFC680)
#define JKDKMMHNIEF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAFBE50)
#define JKDKMMHNIEF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAFC850)
#define JKDKMMHNIEF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAFBE30)
#define JKDKMMHNIEF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAFC110)
#define JKDKMMHNIEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFC630)

inline static constexpr unsigned int JKDKMMHNIEF_TypeDefinitionIndex = 16303;

class JKDKMMHNIEF : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::NCKJGHGJFEE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::LANFLNOPCMC*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDKMMHNIEF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_FINALIZE_OFFSET))(this);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_CHLEALKAOJO_OFFSET))(this);
	}

	::LANFLNOPCMC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LANFLNOPCMC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKDKMMHNIEF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
