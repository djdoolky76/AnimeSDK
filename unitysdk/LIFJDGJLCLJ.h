#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIEICEJKMPI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IMKEHOELPMG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LIFJDGJLCLJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD5CDF0)
#define LIFJDGJLCLJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD5CBB0)
#define LIFJDGJLCLJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD5CD30)
#define LIFJDGJLCLJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD5CED0)
#define LIFJDGJLCLJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD5CBC0)
#define LIFJDGJLCLJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AD5D240)
#define LIFJDGJLCLJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD5D070)
#define LIFJDGJLCLJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD5C800)
#define LIFJDGJLCLJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD5D050)
#define LIFJDGJLCLJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD5C7E0)
#define LIFJDGJLCLJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD5CAC0)
#define LIFJDGJLCLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5D000)

inline static constexpr unsigned int LIFJDGJLCLJ_TypeDefinitionIndex = 12846;

class LIFJDGJLCLJ : public ::System::Object
{
public:
	::Il2CppArray<::IMKEHOELPMG*>* OJMBOGGMIKO; // 0x10
	::JIEICEJKMPI DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_CHLEALKAOJO_OFFSET))(this);
	}

	::IMKEHOELPMG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IMKEHOELPMG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIFJDGJLCLJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
