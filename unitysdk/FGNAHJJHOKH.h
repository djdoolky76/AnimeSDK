#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LODEPGHBGIP.h"
#include "unitysdk/System/Object.h"

class DPLCMBNLPBM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FGNAHJJHOKH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18B99B20)
#define FGNAHJJHOKH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18B998E0)
#define FGNAHJJHOKH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18B99A60)
#define FGNAHJJHOKH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18B99C00)
#define FGNAHJJHOKH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18B998F0)
#define FGNAHJJHOKH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18B99F70)
#define FGNAHJJHOKH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18B99D80)
#define FGNAHJJHOKH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18B99530)
#define FGNAHJJHOKH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18B99F50)
#define FGNAHJJHOKH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18B99510)
#define FGNAHJJHOKH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18B997F0)
#define FGNAHJJHOKH__CTOR_OFFSET UNITYSDK_OFFSET(0x18B99D30)

inline static constexpr unsigned int FGNAHJJHOKH_TypeDefinitionIndex = 15302;

class FGNAHJJHOKH : public ::System::Object
{
public:
	::Il2CppArray<::DPLCMBNLPBM*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::LODEPGHBGIP DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNAHJJHOKH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_CHLEALKAOJO_OFFSET))(this);
	}

	::DPLCMBNLPBM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DPLCMBNLPBM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGNAHJJHOKH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
