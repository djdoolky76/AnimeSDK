#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHBKNJBEANH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FGPPNPODMNC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FFCAHCJOJCA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5A4010)
#define FFCAHCJOJCA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5A3DA0)
#define FFCAHCJOJCA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5A3F50)
#define FFCAHCJOJCA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5A40F0)
#define FFCAHCJOJCA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5A3DB0)
#define FFCAHCJOJCA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5A39F0)
#define FFCAHCJOJCA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5A39D0)
#define FFCAHCJOJCA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5A3CB0)
#define FFCAHCJOJCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A4220)

inline static constexpr unsigned int FFCAHCJOJCA_TypeDefinitionIndex = 10816;

class FFCAHCJOJCA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::CHBKNJBEANH DHDJDGFNBOA; // 0x20
	::Il2CppArray<::FGPPNPODMNC*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCAHCJOJCA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_CHLEALKAOJO_OFFSET))(this);
	}
};
