#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIDFDFOJIG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CABDBGIBLON;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FCKDNMHBAKJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16633AB0)
#define FCKDNMHBAKJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16633880)
#define FCKDNMHBAKJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x166339F0)
#define FCKDNMHBAKJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16633B90)
#define FCKDNMHBAKJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16633890)
#define FCKDNMHBAKJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16633D10)
#define FCKDNMHBAKJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16633F60)
#define FCKDNMHBAKJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x166334E0)
#define FCKDNMHBAKJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16633F40)
#define FCKDNMHBAKJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x166334C0)
#define FCKDNMHBAKJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x166337A0)
#define FCKDNMHBAKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16633CC0)

inline static constexpr unsigned int FCKDNMHBAKJ_TypeDefinitionIndex = 17714;

class FCKDNMHBAKJ : public ::System::Object
{
public:
	::HNIDFDFOJIG DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::CABDBGIBLON*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_CHLEALKAOJO_OFFSET))(this);
	}

	::CABDBGIBLON* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CABDBGIBLON*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FCKDNMHBAKJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
