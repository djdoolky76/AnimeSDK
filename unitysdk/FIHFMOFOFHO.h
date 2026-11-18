#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PANFFDIACNP.h"
#include "unitysdk/System/Object.h"

class COFJBKJFLCG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FIHFMOFOFHO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1952D240)
#define FIHFMOFOFHO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1952D010)
#define FIHFMOFOFHO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1952D180)
#define FIHFMOFOFHO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1952D320)
#define FIHFMOFOFHO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1952D020)
#define FIHFMOFOFHO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1952D4C0)
#define FIHFMOFOFHO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1952D6F0)
#define FIHFMOFOFHO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1952CC70)
#define FIHFMOFOFHO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1952D4A0)
#define FIHFMOFOFHO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1952CC50)
#define FIHFMOFOFHO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1952CF30)
#define FIHFMOFOFHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1952D450)

inline static constexpr unsigned int FIHFMOFOFHO_TypeDefinitionIndex = 14224;

class FIHFMOFOFHO : public ::System::Object
{
public:
	::PANFFDIACNP DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::COFJBKJFLCG*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHFMOFOFHO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_NAMKJOJBAOA_OFFSET))(this);
	}

	::COFJBKJFLCG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::COFJBKJFLCG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FIHFMOFOFHO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
