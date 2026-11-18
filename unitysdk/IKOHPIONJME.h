#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFDDEJNELEO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PEGLONALPFO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IKOHPIONJME_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A99C60)
#define IKOHPIONJME_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A99A20)
#define IKOHPIONJME_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A99BA0)
#define IKOHPIONJME_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A99D40)
#define IKOHPIONJME_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A99A30)
#define IKOHPIONJME_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15A99EE0)
#define IKOHPIONJME_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A9A110)
#define IKOHPIONJME_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A99670)
#define IKOHPIONJME_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15A99EC0)
#define IKOHPIONJME_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A99650)
#define IKOHPIONJME_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A99930)
#define IKOHPIONJME__CTOR_OFFSET UNITYSDK_OFFSET(0x15A99E70)

inline static constexpr unsigned int IKOHPIONJME_TypeDefinitionIndex = 9293;

class IKOHPIONJME : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::BFDDEJNELEO DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::PEGLONALPFO*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOHPIONJME__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOHPIONJME_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOHPIONJME_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKOHPIONJME_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IKOHPIONJME_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOHPIONJME_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOHPIONJME_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOHPIONJME_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOHPIONJME_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOHPIONJME_NAMKJOJBAOA_OFFSET))(this);
	}

	::PEGLONALPFO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PEGLONALPFO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKOHPIONJME_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IKOHPIONJME_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
