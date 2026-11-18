#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENDPKOCKJFH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GIPAOEFDFBB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NCGIGHJOLEB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0C0BD0)
#define NCGIGHJOLEB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0C0950)
#define NCGIGHJOLEB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D0C0960)
#define NCGIGHJOLEB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0C0A20)
#define NCGIGHJOLEB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0C0B50)
#define NCGIGHJOLEB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1D0C0D20)
#define NCGIGHJOLEB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D0C0F50)
#define NCGIGHJOLEB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D0C05B0)
#define NCGIGHJOLEB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1D0C0D00)
#define NCGIGHJOLEB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0C0590)
#define NCGIGHJOLEB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0C0870)
#define NCGIGHJOLEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C0CB0)

inline static constexpr unsigned int NCGIGHJOLEB_TypeDefinitionIndex = 15006;

class NCGIGHJOLEB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::GIPAOEFDFBB*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::ENDPKOCKJFH DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGIGHJOLEB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_NAMKJOJBAOA_OFFSET))(this);
	}

	::GIPAOEFDFBB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GIPAOEFDFBB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGIGHJOLEB_CHLEALKAOJO_OFFSET))(this);
	}
};
