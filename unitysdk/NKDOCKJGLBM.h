#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OBNPKHMAHJK.h"
#include "unitysdk/System/Object.h"

class JGKMLKHGLOK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NKDOCKJGLBM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0CAF10)
#define NKDOCKJGLBM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0CAC90)
#define NKDOCKJGLBM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D0CACA0)
#define NKDOCKJGLBM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0CAD60)
#define NKDOCKJGLBM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0CAE90)
#define NKDOCKJGLBM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1D0CB0C0)
#define NKDOCKJGLBM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D0CB520)
#define NKDOCKJGLBM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D0CA8A0)
#define NKDOCKJGLBM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1D0CB340)
#define NKDOCKJGLBM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0CA870)
#define NKDOCKJGLBM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0CAB00)
#define NKDOCKJGLBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CAFF0)

inline static constexpr unsigned int NKDOCKJGLBM_TypeDefinitionIndex = 10095;

class NKDOCKJGLBM : public ::System::Object
{
public:
	::OBNPKHMAHJK DHDJDGFNBOA; // 0x10
	::Il2CppArray<::JGKMLKHGLOK*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDOCKJGLBM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_BHLAEBMEOLO_OFFSET))(this);
	}

	::JGKMLKHGLOK* IFDPKDOFOJD(::System::String* FCMGEJHBABA)
	{
		return ((::JGKMLKHGLOK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_IFDPKDOFOJD_OFFSET))(this, FCMGEJHBABA);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDOCKJGLBM_CHLEALKAOJO_OFFSET))(this);
	}
};
