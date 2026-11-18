#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDLCLIEBEKD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OMMLNBDIGOJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DHNELFJOLPO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A9A400)
#define DHNELFJOLPO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A9A1D0)
#define DHNELFJOLPO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A9A340)
#define DHNELFJOLPO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A9A4E0)
#define DHNELFJOLPO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A9A1E0)
#define DHNELFJOLPO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17A9A850)
#define DHNELFJOLPO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A9A660)
#define DHNELFJOLPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A99E30)
#define DHNELFJOLPO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17A9A830)
#define DHNELFJOLPO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A99E10)
#define DHNELFJOLPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A9A0F0)
#define DHNELFJOLPO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9A610)

inline static constexpr unsigned int DHNELFJOLPO_TypeDefinitionIndex = 9140;

class DHNELFJOLPO : public ::System::Object
{
public:
	::Il2CppArray<::OMMLNBDIGOJ*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::BDLCLIEBEKD DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNELFJOLPO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNELFJOLPO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNELFJOLPO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DHNELFJOLPO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DHNELFJOLPO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNELFJOLPO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNELFJOLPO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNELFJOLPO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DHNELFJOLPO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNELFJOLPO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNELFJOLPO_CHLEALKAOJO_OFFSET))(this);
	}

	::OMMLNBDIGOJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OMMLNBDIGOJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHNELFJOLPO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
