#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMKPIGHPOGP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KIHFKMCKPJM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMEENNCDMBD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15730A50)
#define BMEENNCDMBD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15730810)
#define BMEENNCDMBD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15730990)
#define BMEENNCDMBD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15730B30)
#define BMEENNCDMBD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15730820)
#define BMEENNCDMBD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15730E60)
#define BMEENNCDMBD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15730C90)
#define BMEENNCDMBD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15730460)
#define BMEENNCDMBD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15730C70)
#define BMEENNCDMBD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15730440)
#define BMEENNCDMBD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15730720)
#define BMEENNCDMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x15730C60)

inline static constexpr unsigned int BMEENNCDMBD_TypeDefinitionIndex = 11738;

class BMEENNCDMBD : public ::System::Object
{
public:
	::Il2CppArray<::KIHFKMCKPJM*>* OJMBOGGMIKO; // 0x10
	::DMKPIGHPOGP DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEENNCDMBD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEENNCDMBD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEENNCDMBD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BMEENNCDMBD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BMEENNCDMBD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEENNCDMBD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEENNCDMBD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEENNCDMBD_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEENNCDMBD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BMEENNCDMBD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::KIHFKMCKPJM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KIHFKMCKPJM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMEENNCDMBD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEENNCDMBD_CHLEALKAOJO_OFFSET))(this);
	}
};
