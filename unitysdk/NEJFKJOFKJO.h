#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCGBCPDMBOE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GELCNGPJFBM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NEJFKJOFKJO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0C49D0)
#define NEJFKJOFKJO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0C4790)
#define NEJFKJOFKJO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D0C4910)
#define NEJFKJOFKJO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0C4AB0)
#define NEJFKJOFKJO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0C47A0)
#define NEJFKJOFKJO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1D0C4C30)
#define NEJFKJOFKJO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D0C4E80)
#define NEJFKJOFKJO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D0C43E0)
#define NEJFKJOFKJO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1D0C4E60)
#define NEJFKJOFKJO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0C43C0)
#define NEJFKJOFKJO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0C46A0)
#define NEJFKJOFKJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C4BE0)

inline static constexpr unsigned int NEJFKJOFKJO_TypeDefinitionIndex = 13428;

class NEJFKJOFKJO : public ::System::Object
{
public:
	::Il2CppArray<::GELCNGPJFBM*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::DCGBCPDMBOE DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJFKJOFKJO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_CHLEALKAOJO_OFFSET))(this);
	}

	::GELCNGPJFBM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GELCNGPJFBM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJFKJOFKJO_NAMKJOJBAOA_OFFSET))(this);
	}
};
