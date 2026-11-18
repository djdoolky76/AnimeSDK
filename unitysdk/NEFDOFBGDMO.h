#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOJKAAKGOFM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BJANONGDPNL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEFDOFBGDMO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCE9C00)
#define NEFDOFBGDMO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CCE99C0)
#define NEFDOFBGDMO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CCE9B40)
#define NEFDOFBGDMO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CCE9CE0)
#define NEFDOFBGDMO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CCE99D0)
#define NEFDOFBGDMO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1CCEA010)
#define NEFDOFBGDMO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CCE9E40)
#define NEFDOFBGDMO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCE9610)
#define NEFDOFBGDMO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CCE9E20)
#define NEFDOFBGDMO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CCE95F0)
#define NEFDOFBGDMO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCE98D0)
#define NEFDOFBGDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE9E10)

inline static constexpr unsigned int NEFDOFBGDMO_TypeDefinitionIndex = 9225;

class NEFDOFBGDMO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::BJANONGDPNL*>* OJMBOGGMIKO; // 0x18
	::HOJKAAKGOFM DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDOFBGDMO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BJANONGDPNL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BJANONGDPNL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDOFBGDMO_CHLEALKAOJO_OFFSET))(this);
	}
};
