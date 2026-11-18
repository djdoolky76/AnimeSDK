#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NLHMDOIAOFO.h"
#include "unitysdk/System/Object.h"

class DGMCANIBHAO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNPNBGNGAAG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA8E3C0)
#define LNPNBGNGAAG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA8E180)
#define LNPNBGNGAAG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA8E300)
#define LNPNBGNGAAG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA8E4A0)
#define LNPNBGNGAAG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA8E190)
#define LNPNBGNGAAG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BA8E600)
#define LNPNBGNGAAG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA8E7F0)
#define LNPNBGNGAAG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA8DDD0)
#define LNPNBGNGAAG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BA8E5E0)
#define LNPNBGNGAAG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA8DDB0)
#define LNPNBGNGAAG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA8E090)
#define LNPNBGNGAAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8E5D0)

inline static constexpr unsigned int LNPNBGNGAAG_TypeDefinitionIndex = 10694;

class LNPNBGNGAAG : public ::System::Object
{
public:
	::NLHMDOIAOFO DHDJDGFNBOA; // 0x10
	::Il2CppArray<::DGMCANIBHAO*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPNBGNGAAG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_NAMKJOJBAOA_OFFSET))(this);
	}

	::DGMCANIBHAO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DGMCANIBHAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPNBGNGAAG_CHLEALKAOJO_OFFSET))(this);
	}
};
