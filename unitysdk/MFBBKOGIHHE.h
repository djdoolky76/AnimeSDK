#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFKDIPCGBOC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OMOIKFONNDA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MFBBKOGIHHE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB084F0)
#define MFBBKOGIHHE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB082C0)
#define MFBBKOGIHHE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB08430)
#define MFBBKOGIHHE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB085D0)
#define MFBBKOGIHHE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB082D0)
#define MFBBKOGIHHE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB08750)
#define MFBBKOGIHHE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB089A0)
#define MFBBKOGIHHE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB07F20)
#define MFBBKOGIHHE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB08980)
#define MFBBKOGIHHE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB07F00)
#define MFBBKOGIHHE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB081E0)
#define MFBBKOGIHHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB08700)

inline static constexpr unsigned int MFBBKOGIHHE_TypeDefinitionIndex = 10653;

class MFBBKOGIHHE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::OMOIKFONNDA*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::BFKDIPCGBOC DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBKOGIHHE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_CHLEALKAOJO_OFFSET))(this);
	}

	::OMOIKFONNDA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OMOIKFONNDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBKOGIHHE_NAMKJOJBAOA_OFFSET))(this);
	}
};
