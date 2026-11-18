#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBIJPBFOMKM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EJFKPHMFCLP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NIKMHDDCCDP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195B8790)
#define NIKMHDDCCDP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195B8550)
#define NIKMHDDCCDP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195B86D0)
#define NIKMHDDCCDP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195B8870)
#define NIKMHDDCCDP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195B8560)
#define NIKMHDDCCDP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x195B89F0)
#define NIKMHDDCCDP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195B8C40)
#define NIKMHDDCCDP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195B81A0)
#define NIKMHDDCCDP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x195B8C20)
#define NIKMHDDCCDP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195B8180)
#define NIKMHDDCCDP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195B8460)
#define NIKMHDDCCDP__CTOR_OFFSET UNITYSDK_OFFSET(0x195B89A0)

inline static constexpr unsigned int NIKMHDDCCDP_TypeDefinitionIndex = 17306;

class NIKMHDDCCDP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::KBIJPBFOMKM DHDJDGFNBOA; // 0x28
	::Il2CppArray<::EJFKPHMFCLP*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMHDDCCDP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_FINALIZE_OFFSET))(this);
	}

	::EJFKPHMFCLP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EJFKPHMFCLP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMHDDCCDP_NAMKJOJBAOA_OFFSET))(this);
	}
};
