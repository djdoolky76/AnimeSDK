#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHLILLJOFJF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MHKPIMBLCAM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EOCGPKMHDCE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5A01E0)
#define EOCGPKMHDCE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A59FFB0)
#define EOCGPKMHDCE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5A0120)
#define EOCGPKMHDCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5A02C0)
#define EOCGPKMHDCE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A59FFC0)
#define EOCGPKMHDCE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5A0440)
#define EOCGPKMHDCE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5A0690)
#define EOCGPKMHDCE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A59FC10)
#define EOCGPKMHDCE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5A0670)
#define EOCGPKMHDCE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A59FBF0)
#define EOCGPKMHDCE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A59FED0)
#define EOCGPKMHDCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A03F0)

inline static constexpr unsigned int EOCGPKMHDCE_TypeDefinitionIndex = 14626;

class EOCGPKMHDCE : public ::System::Object
{
public:
	::GHLILLJOFJF DHDJDGFNBOA; // 0x10
	::Il2CppArray<::MHKPIMBLCAM*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCGPKMHDCE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_FINALIZE_OFFSET))(this);
	}

	::MHKPIMBLCAM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MHKPIMBLCAM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCGPKMHDCE_NAMKJOJBAOA_OFFSET))(this);
	}
};
