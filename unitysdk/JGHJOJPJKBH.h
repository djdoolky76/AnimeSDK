#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDPGKIPIDIM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CAAHHDNGNLF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGHJOJPJKBH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4F72F0)
#define JGHJOJPJKBH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4F70C0)
#define JGHJOJPJKBH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4F7230)
#define JGHJOJPJKBH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4F73D0)
#define JGHJOJPJKBH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4F70D0)
#define JGHJOJPJKBH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4F7530)
#define JGHJOJPJKBH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4F78F0)
#define JGHJOJPJKBH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4F6D60)
#define JGHJOJPJKBH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4F7510)
#define JGHJOJPJKBH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4F6D40)
#define JGHJOJPJKBH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4F6FE0)
#define JGHJOJPJKBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7500)

inline static constexpr unsigned int JGHJOJPJKBH_TypeDefinitionIndex = 14498;

class JGHJOJPJKBH : public ::System::Object
{
public:
	::BDPGKIPIDIM DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::CAAHHDNGNLF*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHJOJPJKBH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_NAMKJOJBAOA_OFFSET))(this);
	}

	::CAAHHDNGNLF* IFDPKDOFOJD(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::CAAHHDNGNLF*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_IFDPKDOFOJD_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JGHJOJPJKBH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
