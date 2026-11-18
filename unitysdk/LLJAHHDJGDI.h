#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCGGEJGAOAE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GIHGFNHCBEI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LLJAHHDJGDI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AAFFFF0)
#define LLJAHHDJGDI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AAFFD70)
#define LLJAHHDJGDI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AAFFD80)
#define LLJAHHDJGDI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AAFFE40)
#define LLJAHHDJGDI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AAFFF70)
#define LLJAHHDJGDI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB003F0)
#define LLJAHHDJGDI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB00140)
#define LLJAHHDJGDI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AAFF9C0)
#define LLJAHHDJGDI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB00120)
#define LLJAHHDJGDI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AAFF9A0)
#define LLJAHHDJGDI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AAFFC80)
#define LLJAHHDJGDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB000D0)

inline static constexpr unsigned int LLJAHHDJGDI_TypeDefinitionIndex = 13187;

class LLJAHHDJGDI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::GIHGFNHCBEI*>* OJMBOGGMIKO; // 0x20
	::FCGGEJGAOAE DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAHHDJGDI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GIHGFNHCBEI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GIHGFNHCBEI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLJAHHDJGDI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
