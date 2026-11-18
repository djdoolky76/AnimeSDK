#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NGHEHLJPNKE.h"
#include "unitysdk/System/Object.h"

class DBFMIOGHLJC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MFIKIBJODCE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C179D20)
#define MFIKIBJODCE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C179AC0)
#define MFIKIBJODCE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C179C60)
#define MFIKIBJODCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C179E00)
#define MFIKIBJODCE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C179AD0)
#define MFIKIBJODCE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C179720)
#define MFIKIBJODCE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C179700)
#define MFIKIBJODCE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C1799E0)
#define MFIKIBJODCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C179F30)

inline static constexpr unsigned int MFIKIBJODCE_TypeDefinitionIndex = 13837;

class MFIKIBJODCE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::DBFMIOGHLJC*>* OJMBOGGMIKO; // 0x20
	::NGHEHLJPNKE DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIKIBJODCE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIKIBJODCE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIKIBJODCE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFIKIBJODCE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MFIKIBJODCE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIKIBJODCE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIKIBJODCE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIKIBJODCE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIKIBJODCE_CHLEALKAOJO_OFFSET))(this);
	}
};
