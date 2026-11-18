#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPDDLIBNGOD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GPJDFOFACGH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KAAHLKLEGJO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B63D7E0)
#define KAAHLKLEGJO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B63D5A0)
#define KAAHLKLEGJO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B63D720)
#define KAAHLKLEGJO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B63D8C0)
#define KAAHLKLEGJO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B63D5B0)
#define KAAHLKLEGJO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B63DA60)
#define KAAHLKLEGJO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B63DC90)
#define KAAHLKLEGJO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B63D1F0)
#define KAAHLKLEGJO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B63DA40)
#define KAAHLKLEGJO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B63D1D0)
#define KAAHLKLEGJO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B63D4B0)
#define KAAHLKLEGJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B63D9F0)

inline static constexpr unsigned int KAAHLKLEGJO_TypeDefinitionIndex = 15201;

class KAAHLKLEGJO : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::GPJDFOFACGH*>* OJMBOGGMIKO; // 0x20
	::GPDDLIBNGOD DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAHLKLEGJO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_NAMKJOJBAOA_OFFSET))(this);
	}

	::GPJDFOFACGH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GPJDFOFACGH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAHLKLEGJO_CHLEALKAOJO_OFFSET))(this);
	}
};
