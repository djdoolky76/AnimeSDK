#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MPLEEBBKJOK.h"
#include "unitysdk/System/Object.h"

class ACMNEKENGIF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CNMPNJNEKGA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17F15400)
#define CNMPNJNEKGA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17F15190)
#define CNMPNJNEKGA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17F15340)
#define CNMPNJNEKGA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F154E0)
#define CNMPNJNEKGA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17F151A0)
#define CNMPNJNEKGA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17F14DE0)
#define CNMPNJNEKGA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17F14DC0)
#define CNMPNJNEKGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17F150A0)
#define CNMPNJNEKGA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F15610)

inline static constexpr unsigned int CNMPNJNEKGA_TypeDefinitionIndex = 9193;

class CNMPNJNEKGA : public ::System::Object
{
public:
	::MPLEEBBKJOK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::ACMNEKENGIF*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPNJNEKGA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_CHLEALKAOJO_OFFSET))(this);
	}
};
