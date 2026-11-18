#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDCFDHCLNEO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LDNDEMCFBEK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CADIDKJLNAB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A53A460)
#define CADIDKJLNAB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A53A220)
#define CADIDKJLNAB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A53A3A0)
#define CADIDKJLNAB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A53A540)
#define CADIDKJLNAB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A53A230)
#define CADIDKJLNAB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A53A6C0)
#define CADIDKJLNAB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A539E70)
#define CADIDKJLNAB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A539E50)
#define CADIDKJLNAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A53A130)
#define CADIDKJLNAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A53A670)

inline static constexpr unsigned int CADIDKJLNAB_TypeDefinitionIndex = 15076;

class CADIDKJLNAB : public ::System::Object
{
public:
	::GDCFDHCLNEO DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::LDNDEMCFBEK*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADIDKJLNAB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CADIDKJLNAB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADIDKJLNAB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CADIDKJLNAB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CADIDKJLNAB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADIDKJLNAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADIDKJLNAB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADIDKJLNAB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADIDKJLNAB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CADIDKJLNAB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
