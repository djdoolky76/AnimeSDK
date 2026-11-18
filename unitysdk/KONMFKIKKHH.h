#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKNKHBBAOLI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FKFGGICJFMP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KONMFKIKKHH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5FD3C0)
#define KONMFKIKKHH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5FD180)
#define KONMFKIKKHH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5FD300)
#define KONMFKIKKHH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5FD4A0)
#define KONMFKIKKHH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5FD190)
#define KONMFKIKKHH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5FD7B0)
#define KONMFKIKKHH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5FD5E0)
#define KONMFKIKKHH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5FCDD0)
#define KONMFKIKKHH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5FD9A0)
#define KONMFKIKKHH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5FCDB0)
#define KONMFKIKKHH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5FD090)
#define KONMFKIKKHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FD5D0)

inline static constexpr unsigned int KONMFKIKKHH_TypeDefinitionIndex = 14459;

class KONMFKIKKHH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::FKFGGICJFMP*>* OJMBOGGMIKO; // 0x20
	::HKNKHBBAOLI DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONMFKIKKHH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KONMFKIKKHH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONMFKIKKHH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KONMFKIKKHH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KONMFKIKKHH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONMFKIKKHH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONMFKIKKHH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONMFKIKKHH_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONMFKIKKHH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KONMFKIKKHH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::FKFGGICJFMP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FKFGGICJFMP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KONMFKIKKHH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONMFKIKKHH_NAMKJOJBAOA_OFFSET))(this);
	}
};
