#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OIPBCDJPAOF.h"
#include "unitysdk/System/Object.h"

class KHAONMFNMEA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AGPIOEGLDEH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B984580)
#define AGPIOEGLDEH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B984350)
#define AGPIOEGLDEH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9844C0)
#define AGPIOEGLDEH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B984660)
#define AGPIOEGLDEH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B984360)
#define AGPIOEGLDEH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9849D0)
#define AGPIOEGLDEH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9847E0)
#define AGPIOEGLDEH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B983FB0)
#define AGPIOEGLDEH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9849B0)
#define AGPIOEGLDEH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B983F90)
#define AGPIOEGLDEH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B984270)
#define AGPIOEGLDEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B984790)

inline static constexpr unsigned int AGPIOEGLDEH_TypeDefinitionIndex = 17492;

class AGPIOEGLDEH : public ::System::Object
{
public:
	::OIPBCDJPAOF DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::KHAONMFNMEA*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPIOEGLDEH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_CHLEALKAOJO_OFFSET))(this);
	}

	::KHAONMFNMEA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KHAONMFNMEA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGPIOEGLDEH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
