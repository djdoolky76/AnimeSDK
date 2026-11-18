#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MGJOHPOMIBN.h"
#include "unitysdk/System/Object.h"

class DNHKDAGNCJN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BNKMNKNPKDN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F23600)
#define BNKMNKNPKDN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F233C0)
#define BNKMNKNPKDN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F23540)
#define BNKMNKNPKDN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F236E0)
#define BNKMNKNPKDN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F233D0)
#define BNKMNKNPKDN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19F23860)
#define BNKMNKNPKDN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F23AB0)
#define BNKMNKNPKDN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F23010)
#define BNKMNKNPKDN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19F23A90)
#define BNKMNKNPKDN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F22FF0)
#define BNKMNKNPKDN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F232D0)
#define BNKMNKNPKDN__CTOR_OFFSET UNITYSDK_OFFSET(0x19F23810)

inline static constexpr unsigned int BNKMNKNPKDN_TypeDefinitionIndex = 10047;

class BNKMNKNPKDN : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::MGJOHPOMIBN DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::DNHKDAGNCJN*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKMNKNPKDN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_CHLEALKAOJO_OFFSET))(this);
	}

	::DNHKDAGNCJN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DNHKDAGNCJN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKMNKNPKDN_NAMKJOJBAOA_OFFSET))(this);
	}
};
