#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBHCJDNIGFK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KFPFMIHCADO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BMEEPOAOGOP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A536E50)
#define BMEEPOAOGOP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A536BF0)
#define BMEEPOAOGOP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A536D90)
#define BMEEPOAOGOP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A536F30)
#define BMEEPOAOGOP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A536C00)
#define BMEEPOAOGOP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A536850)
#define BMEEPOAOGOP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A536830)
#define BMEEPOAOGOP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A536B10)
#define BMEEPOAOGOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A537060)

inline static constexpr unsigned int BMEEPOAOGOP_TypeDefinitionIndex = 15300;

class BMEEPOAOGOP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::KFPFMIHCADO*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::IBHCJDNIGFK DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEPOAOGOP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_CHLEALKAOJO_OFFSET))(this);
	}
};
