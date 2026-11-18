#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCKNBHNGCFC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NJCGAEIPJEK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HCLFDDKOLNI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4DCDC0)
#define HCLFDDKOLNI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4DCB90)
#define HCLFDDKOLNI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4DCD00)
#define HCLFDDKOLNI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4DCEA0)
#define HCLFDDKOLNI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4DCBA0)
#define HCLFDDKOLNI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4DD1F0)
#define HCLFDDKOLNI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4DD020)
#define HCLFDDKOLNI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4DC7F0)
#define HCLFDDKOLNI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4DD420)
#define HCLFDDKOLNI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4DC7D0)
#define HCLFDDKOLNI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4DCAB0)
#define HCLFDDKOLNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DCFD0)

inline static constexpr unsigned int HCLFDDKOLNI_TypeDefinitionIndex = 14812;

class HCLFDDKOLNI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::NJCGAEIPJEK*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::DCKNBHNGCFC DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLFDDKOLNI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::NJCGAEIPJEK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NJCGAEIPJEK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLFDDKOLNI_CHLEALKAOJO_OFFSET))(this);
	}
};
