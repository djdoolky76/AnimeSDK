#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OMMIJABAJKF.h"
#include "unitysdk/System/Object.h"

class DCLBADKIFCJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CIPCAKMOJEM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5878B0)
#define CIPCAKMOJEM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A587650)
#define CIPCAKMOJEM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5877F0)
#define CIPCAKMOJEM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A587990)
#define CIPCAKMOJEM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A587660)
#define CIPCAKMOJEM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5872B0)
#define CIPCAKMOJEM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A587290)
#define CIPCAKMOJEM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A587570)
#define CIPCAKMOJEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A587AC0)

inline static constexpr unsigned int CIPCAKMOJEM_TypeDefinitionIndex = 12132;

class CIPCAKMOJEM : public ::System::Object
{
public:
	::OMMIJABAJKF DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::DCLBADKIFCJ*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCAKMOJEM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_CHLEALKAOJO_OFFSET))(this);
	}
};
