#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PBDDGJMGEEC.h"
#include "unitysdk/System/Object.h"

class EKEDJCPEKCF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ECIEDNHPKFE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F45400)
#define ECIEDNHPKFE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F45180)
#define ECIEDNHPKFE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F45190)
#define ECIEDNHPKFE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F45250)
#define ECIEDNHPKFE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F45380)
#define ECIEDNHPKFE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19F455B0)
#define ECIEDNHPKFE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F45850)
#define ECIEDNHPKFE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F44E40)
#define ECIEDNHPKFE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19F45830)
#define ECIEDNHPKFE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F44E20)
#define ECIEDNHPKFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F450A0)
#define ECIEDNHPKFE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F454E0)

inline static constexpr unsigned int ECIEDNHPKFE_TypeDefinitionIndex = 15276;

class ECIEDNHPKFE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::EKEDJCPEKCF*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::PBDDGJMGEEC DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIEDNHPKFE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_BHLAEBMEOLO_OFFSET))(this);
	}

	::EKEDJCPEKCF* IFDPKDOFOJD(::System::String* MCOHLHMKLIP)
	{
		return ((::EKEDJCPEKCF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_IFDPKDOFOJD_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ECIEDNHPKFE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
