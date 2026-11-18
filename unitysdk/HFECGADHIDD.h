#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOEIKFDNHOL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OGHJKKBCBNM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HFECGADHIDD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B877BE0)
#define HFECGADHIDD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B8779A0)
#define HFECGADHIDD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B877B20)
#define HFECGADHIDD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B877CC0)
#define HFECGADHIDD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B8779B0)
#define HFECGADHIDD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B878030)
#define HFECGADHIDD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B877E60)
#define HFECGADHIDD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B8775F0)
#define HFECGADHIDD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B877E40)
#define HFECGADHIDD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B8775D0)
#define HFECGADHIDD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B8778B0)
#define HFECGADHIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B877DF0)

inline static constexpr unsigned int HFECGADHIDD_TypeDefinitionIndex = 11842;

class HFECGADHIDD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::GOEIKFDNHOL DHDJDGFNBOA; // 0x20
	::Il2CppArray<::OGHJKKBCBNM*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGADHIDD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGADHIDD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGADHIDD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HFECGADHIDD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HFECGADHIDD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGADHIDD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGADHIDD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGADHIDD_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGADHIDD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGADHIDD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HFECGADHIDD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::OGHJKKBCBNM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OGHJKKBCBNM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFECGADHIDD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
