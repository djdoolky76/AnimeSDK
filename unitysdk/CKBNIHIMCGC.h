#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MBDMJJODMAG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class CJOLDFNCOFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CKBNIHIMCGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A546690)
#define CKBNIHIMCGC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A546410)
#define CKBNIHIMCGC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A546420)
#define CKBNIHIMCGC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5464E0)
#define CKBNIHIMCGC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A546610)
#define CKBNIHIMCGC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A546A40)
#define CKBNIHIMCGC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5467C0)
#define CKBNIHIMCGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A546090)
#define CKBNIHIMCGC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A546E90)
#define CKBNIHIMCGC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A546070)
#define CKBNIHIMCGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A546320)
#define CKBNIHIMCGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A546770)

inline static constexpr unsigned int CKBNIHIMCGC_TypeDefinitionIndex = 16436;

class CKBNIHIMCGC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x10
	::MBDMJJODMAG DHDJDGFNBOA; // 0x18
	::Il2CppArray<::CJOLDFNCOFF*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBNIHIMCGC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CJOLDFNCOFF* IFDPKDOFOJD(::System::Int32 ECKMALONJCL, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::CJOLDFNCOFF*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_IFDPKDOFOJD_OFFSET))(this, ECKMALONJCL, MOBNMDEDJIP);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBNIHIMCGC_CHLEALKAOJO_OFFSET))(this);
	}
};
