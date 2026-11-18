#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BACJNNDKNDE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DLKJOCFLEJB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNGFOHKHAIF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4CA2B0)
#define FNGFOHKHAIF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4CA080)
#define FNGFOHKHAIF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4CA1F0)
#define FNGFOHKHAIF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4CA390)
#define FNGFOHKHAIF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4CA090)
#define FNGFOHKHAIF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4CA4D0)
#define FNGFOHKHAIF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4CA6E0)
#define FNGFOHKHAIF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4C9CE0)
#define FNGFOHKHAIF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4CA6C0)
#define FNGFOHKHAIF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4C9CC0)
#define FNGFOHKHAIF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4C9FA0)
#define FNGFOHKHAIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CA4C0)

inline static constexpr unsigned int FNGFOHKHAIF_TypeDefinitionIndex = 15884;

class FNGFOHKHAIF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::DLKJOCFLEJB*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::BACJNNDKNDE DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGFOHKHAIF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_FINALIZE_OFFSET))(this);
	}

	::DLKJOCFLEJB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DLKJOCFLEJB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGFOHKHAIF_NAMKJOJBAOA_OFFSET))(this);
	}
};
