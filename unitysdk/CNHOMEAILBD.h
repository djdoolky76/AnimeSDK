#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DINIIFCPGPK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BJJGOJAJDDA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CNHOMEAILBD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADBDAA0)
#define CNHOMEAILBD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADBD870)
#define CNHOMEAILBD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADBD9E0)
#define CNHOMEAILBD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADBDB80)
#define CNHOMEAILBD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADBD880)
#define CNHOMEAILBD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADBDED0)
#define CNHOMEAILBD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADBDD00)
#define CNHOMEAILBD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADBD4D0)
#define CNHOMEAILBD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADBE100)
#define CNHOMEAILBD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADBD4B0)
#define CNHOMEAILBD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADBD790)
#define CNHOMEAILBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBDCB0)

inline static constexpr unsigned int CNHOMEAILBD_TypeDefinitionIndex = 12885;

class CNHOMEAILBD : public ::System::Object
{
public:
	::Il2CppArray<::BJJGOJAJDDA*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::DINIIFCPGPK DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHOMEAILBD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHOMEAILBD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHOMEAILBD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CNHOMEAILBD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CNHOMEAILBD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHOMEAILBD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHOMEAILBD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHOMEAILBD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CNHOMEAILBD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BJJGOJAJDDA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BJJGOJAJDDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNHOMEAILBD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHOMEAILBD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHOMEAILBD_CHLEALKAOJO_OFFSET))(this);
	}
};
