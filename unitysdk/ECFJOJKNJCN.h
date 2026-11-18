#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEDBJCOKBAL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FNBOHOMBFJC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ECFJOJKNJCN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A196F70)
#define ECFJOJKNJCN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A196D00)
#define ECFJOJKNJCN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A196EB0)
#define ECFJOJKNJCN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A197050)
#define ECFJOJKNJCN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A196D10)
#define ECFJOJKNJCN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A196950)
#define ECFJOJKNJCN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A196930)
#define ECFJOJKNJCN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A196C10)
#define ECFJOJKNJCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A197180)

inline static constexpr unsigned int ECFJOJKNJCN_TypeDefinitionIndex = 14951;

class ECFJOJKNJCN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::FNBOHOMBFJC*>* OJMBOGGMIKO; // 0x20
	::CEDBJCOKBAL DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFJOJKNJCN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_CHLEALKAOJO_OFFSET))(this);
	}
};
