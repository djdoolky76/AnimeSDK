#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJIHPHICNKE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class AALGEAOEGGK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CBIGCINMBLG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C526780)
#define CBIGCINMBLG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C526500)
#define CBIGCINMBLG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C526510)
#define CBIGCINMBLG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C5265D0)
#define CBIGCINMBLG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C526700)
#define CBIGCINMBLG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C5268B0)
#define CBIGCINMBLG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C526D20)
#define CBIGCINMBLG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C5261A0)
#define CBIGCINMBLG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C526D00)
#define CBIGCINMBLG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C526180)
#define CBIGCINMBLG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C526420)
#define CBIGCINMBLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C526860)

inline static constexpr unsigned int CBIGCINMBLG_TypeDefinitionIndex = 14221;

class CBIGCINMBLG : public ::System::Object
{
public:
	::EJIHPHICNKE DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::AALGEAOEGGK*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIGCINMBLG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIGCINMBLG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIGCINMBLG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIGCINMBLG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIGCINMBLG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CBIGCINMBLG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CBIGCINMBLG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIGCINMBLG_BHLAEBMEOLO_OFFSET))(this);
	}

	::AALGEAOEGGK* IFDPKDOFOJD(::System::Int32 BFBDDOPFNHN, ::System::Int32 DAHLIFPLMCL)
	{
		return ((::AALGEAOEGGK*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBIGCINMBLG_IFDPKDOFOJD_OFFSET))(this, BFBDDOPFNHN, DAHLIFPLMCL);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CBIGCINMBLG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIGCINMBLG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIGCINMBLG_NAMKJOJBAOA_OFFSET))(this);
	}
};
