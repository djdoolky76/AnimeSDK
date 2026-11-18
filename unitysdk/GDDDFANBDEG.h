#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NPHFKEEIKJA.h"
#include "unitysdk/System/Object.h"

class KFAGJLBONIB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GDDDFANBDEG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7B57F0)
#define GDDDFANBDEG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7B55B0)
#define GDDDFANBDEG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7B5730)
#define GDDDFANBDEG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7B58D0)
#define GDDDFANBDEG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7B55C0)
#define GDDDFANBDEG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7B5A70)
#define GDDDFANBDEG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7B5CA0)
#define GDDDFANBDEG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7B5200)
#define GDDDFANBDEG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7B5A50)
#define GDDDFANBDEG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7B51E0)
#define GDDDFANBDEG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7B54C0)
#define GDDDFANBDEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B5A00)

inline static constexpr unsigned int GDDDFANBDEG_TypeDefinitionIndex = 14917;

class GDDDFANBDEG : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::NPHFKEEIKJA DHDJDGFNBOA; // 0x28
	::Il2CppArray<::KFAGJLBONIB*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDDFANBDEG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDDFANBDEG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDDFANBDEG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GDDDFANBDEG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GDDDFANBDEG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDDFANBDEG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDDFANBDEG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDDFANBDEG_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDDFANBDEG_NAMKJOJBAOA_OFFSET))(this);
	}

	::KFAGJLBONIB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KFAGJLBONIB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDDDFANBDEG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDDFANBDEG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GDDDFANBDEG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
