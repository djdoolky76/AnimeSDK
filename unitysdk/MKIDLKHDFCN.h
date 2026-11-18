#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMGCIAGNKCG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IHOHNJDBEIK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MKIDLKHDFCN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C17E260)
#define MKIDLKHDFCN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C17E020)
#define MKIDLKHDFCN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C17E1A0)
#define MKIDLKHDFCN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C17E340)
#define MKIDLKHDFCN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C17E030)
#define MKIDLKHDFCN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C17E4E0)
#define MKIDLKHDFCN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C17E710)
#define MKIDLKHDFCN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C17DC70)
#define MKIDLKHDFCN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C17E4C0)
#define MKIDLKHDFCN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C17DC50)
#define MKIDLKHDFCN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C17DF30)
#define MKIDLKHDFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17E470)

inline static constexpr unsigned int MKIDLKHDFCN_TypeDefinitionIndex = 14350;

class MKIDLKHDFCN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::IHOHNJDBEIK*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::EMGCIAGNKCG DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDLKHDFCN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_NAMKJOJBAOA_OFFSET))(this);
	}

	::IHOHNJDBEIK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IHOHNJDBEIK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDLKHDFCN_CHLEALKAOJO_OFFSET))(this);
	}
};
