#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LOKPAFLHEKN.h"
#include "unitysdk/System/Object.h"

class BEIECMHAINH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MFBAKHOOLGD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19109180)
#define MFBAKHOOLGD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19108F40)
#define MFBAKHOOLGD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x191090C0)
#define MFBAKHOOLGD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19109260)
#define MFBAKHOOLGD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19108F50)
#define MFBAKHOOLGD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x191095B0)
#define MFBAKHOOLGD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x191093E0)
#define MFBAKHOOLGD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19108B90)
#define MFBAKHOOLGD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x191097E0)
#define MFBAKHOOLGD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19108B70)
#define MFBAKHOOLGD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19108E50)
#define MFBAKHOOLGD__CTOR_OFFSET UNITYSDK_OFFSET(0x19109390)

inline static constexpr unsigned int MFBAKHOOLGD_TypeDefinitionIndex = 12812;

class MFBAKHOOLGD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::LOKPAFLHEKN DHDJDGFNBOA; // 0x18
	::Il2CppArray<::BEIECMHAINH*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBAKHOOLGD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_CHLEALKAOJO_OFFSET))(this);
	}

	::BEIECMHAINH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BEIECMHAINH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBAKHOOLGD_NAMKJOJBAOA_OFFSET))(this);
	}
};
