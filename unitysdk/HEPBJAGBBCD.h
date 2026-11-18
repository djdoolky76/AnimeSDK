#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPEMBLDFFFN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LDNBMDBFGNJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HEPBJAGBBCD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17BFB530)
#define HEPBJAGBBCD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17BFB2D0)
#define HEPBJAGBBCD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17BFB470)
#define HEPBJAGBBCD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17BFB610)
#define HEPBJAGBBCD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17BFB2E0)
#define HEPBJAGBBCD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17BFAF30)
#define HEPBJAGBBCD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17BFAF10)
#define HEPBJAGBBCD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17BFB1F0)
#define HEPBJAGBBCD__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFB740)

inline static constexpr unsigned int HEPBJAGBBCD_TypeDefinitionIndex = 9280;

class HEPBJAGBBCD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::LDNBMDBFGNJ*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::EPEMBLDFFFN DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBJAGBBCD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_CHLEALKAOJO_OFFSET))(this);
	}
};
