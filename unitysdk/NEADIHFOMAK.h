#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEAAJBAPCEP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ICLNFOMIEBM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NEADIHFOMAK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B328420)
#define NEADIHFOMAK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B3281A0)
#define NEADIHFOMAK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B3281B0)
#define NEADIHFOMAK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B328270)
#define NEADIHFOMAK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B3283A0)
#define NEADIHFOMAK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B328820)
#define NEADIHFOMAK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B328550)
#define NEADIHFOMAK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B327DF0)
#define NEADIHFOMAK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B328800)
#define NEADIHFOMAK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B327DD0)
#define NEADIHFOMAK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B3280B0)
#define NEADIHFOMAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B328500)

inline static constexpr unsigned int NEADIHFOMAK_TypeDefinitionIndex = 11201;

class NEADIHFOMAK : public ::System::Object
{
public:
	::Il2CppArray<::ICLNFOMIEBM*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::JEAAJBAPCEP DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADIHFOMAK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADIHFOMAK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADIHFOMAK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADIHFOMAK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADIHFOMAK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NEADIHFOMAK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NEADIHFOMAK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADIHFOMAK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEADIHFOMAK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADIHFOMAK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEADIHFOMAK_CHLEALKAOJO_OFFSET))(this);
	}

	::ICLNFOMIEBM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ICLNFOMIEBM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEADIHFOMAK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
