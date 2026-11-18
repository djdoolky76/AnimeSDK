#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMGJMCOJIGK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EFCALOBCCMF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OJDHCBLOKEP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DCEF20)
#define OJDHCBLOKEP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DCECE0)
#define OJDHCBLOKEP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DCEE60)
#define OJDHCBLOKEP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DCF000)
#define OJDHCBLOKEP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DCECF0)
#define OJDHCBLOKEP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DCF370)
#define OJDHCBLOKEP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DCF1A0)
#define OJDHCBLOKEP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DCE930)
#define OJDHCBLOKEP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DCF180)
#define OJDHCBLOKEP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DCE910)
#define OJDHCBLOKEP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DCEBF0)
#define OJDHCBLOKEP__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCF130)

inline static constexpr unsigned int OJDHCBLOKEP_TypeDefinitionIndex = 15237;

class OJDHCBLOKEP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::HMGJMCOJIGK DHDJDGFNBOA; // 0x20
	::Il2CppArray<::EFCALOBCCMF*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDHCBLOKEP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_CHLEALKAOJO_OFFSET))(this);
	}

	::EFCALOBCCMF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EFCALOBCCMF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJDHCBLOKEP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
