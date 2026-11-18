#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OBLGFLCAMDP.h"
#include "unitysdk/System/Object.h"

class CEOFFJFEEJN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JHNMPLIHJAI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1935C220)
#define JHNMPLIHJAI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1935BFE0)
#define JHNMPLIHJAI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1935C160)
#define JHNMPLIHJAI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1935C300)
#define JHNMPLIHJAI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1935BFF0)
#define JHNMPLIHJAI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1935C480)
#define JHNMPLIHJAI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1935BC30)
#define JHNMPLIHJAI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1935BC10)
#define JHNMPLIHJAI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1935BEF0)
#define JHNMPLIHJAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1935C430)

inline static constexpr unsigned int JHNMPLIHJAI_TypeDefinitionIndex = 13276;

class JHNMPLIHJAI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::OBLGFLCAMDP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::CEOFFJFEEJN*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNMPLIHJAI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JHNMPLIHJAI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
