#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBNJGBENFL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GLBLKNMAJOE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MPNLDLBIDJA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B31D180)
#define MPNLDLBIDJA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B31CF50)
#define MPNLDLBIDJA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B31D0C0)
#define MPNLDLBIDJA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B31D260)
#define MPNLDLBIDJA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B31CF60)
#define MPNLDLBIDJA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B31D3E0)
#define MPNLDLBIDJA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B31D630)
#define MPNLDLBIDJA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B31CBB0)
#define MPNLDLBIDJA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B31D610)
#define MPNLDLBIDJA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B31CB90)
#define MPNLDLBIDJA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B31CE70)
#define MPNLDLBIDJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31D390)

inline static constexpr unsigned int MPNLDLBIDJA_TypeDefinitionIndex = 13468;

class MPNLDLBIDJA : public ::System::Object
{
public:
	::DJBNJGBENFL DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::GLBLKNMAJOE*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNLDLBIDJA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_CHLEALKAOJO_OFFSET))(this);
	}

	::GLBLKNMAJOE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GLBLKNMAJOE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNLDLBIDJA_NAMKJOJBAOA_OFFSET))(this);
	}
};
