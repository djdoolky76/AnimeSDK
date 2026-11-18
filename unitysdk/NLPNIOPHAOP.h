#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MMPFOOJDIDE.h"
#include "unitysdk/System/Object.h"

class NGFNMMHCHBC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NLPNIOPHAOP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB18B60)
#define NLPNIOPHAOP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB18920)
#define NLPNIOPHAOP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB18AA0)
#define NLPNIOPHAOP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB18C40)
#define NLPNIOPHAOP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB18930)
#define NLPNIOPHAOP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB18DC0)
#define NLPNIOPHAOP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB19010)
#define NLPNIOPHAOP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB18570)
#define NLPNIOPHAOP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB18FF0)
#define NLPNIOPHAOP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB18550)
#define NLPNIOPHAOP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB18830)
#define NLPNIOPHAOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB18D70)

inline static constexpr unsigned int NLPNIOPHAOP_TypeDefinitionIndex = 15560;

class NLPNIOPHAOP : public ::System::Object
{
public:
	::Il2CppArray<::NGFNMMHCHBC*>* OJMBOGGMIKO; // 0x10
	::MMPFOOJDIDE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPNIOPHAOP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_FINALIZE_OFFSET))(this);
	}

	::NGFNMMHCHBC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NGFNMMHCHBC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPNIOPHAOP_NAMKJOJBAOA_OFFSET))(this);
	}
};
