#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPMDCJAGCHO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IKOBEDDALAP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BGNJLLKHLAJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A533C60)
#define BGNJLLKHLAJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5339E0)
#define BGNJLLKHLAJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5339F0)
#define BGNJLLKHLAJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A533AB0)
#define BGNJLLKHLAJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A533BE0)
#define BGNJLLKHLAJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A533DB0)
#define BGNJLLKHLAJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A533FE0)
#define BGNJLLKHLAJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A533640)
#define BGNJLLKHLAJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A533D90)
#define BGNJLLKHLAJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A533620)
#define BGNJLLKHLAJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A533900)
#define BGNJLLKHLAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A533D40)

inline static constexpr unsigned int BGNJLLKHLAJ_TypeDefinitionIndex = 12735;

class BGNJLLKHLAJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::IKOBEDDALAP*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::DPMDCJAGCHO DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::IKOBEDDALAP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IKOBEDDALAP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BGNJLLKHLAJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
