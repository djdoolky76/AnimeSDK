#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEJOKMKOIGP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JIGPLDJDFAK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NIBECKFABNL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E1ECD0)
#define NIBECKFABNL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E1EA50)
#define NIBECKFABNL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E1EA60)
#define NIBECKFABNL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E1EB20)
#define NIBECKFABNL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E1EC50)
#define NIBECKFABNL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18E1EE00)
#define NIBECKFABNL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E1F050)
#define NIBECKFABNL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E1E6A0)
#define NIBECKFABNL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E1F030)
#define NIBECKFABNL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E1E680)
#define NIBECKFABNL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E1E960)
#define NIBECKFABNL__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1EDB0)

inline static constexpr unsigned int NIBECKFABNL_TypeDefinitionIndex = 9917;

class NIBECKFABNL : public ::System::Object
{
public:
	::Il2CppArray<::JIGPLDJDFAK*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::FEJOKMKOIGP DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBECKFABNL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBECKFABNL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBECKFABNL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBECKFABNL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBECKFABNL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NIBECKFABNL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NIBECKFABNL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBECKFABNL_BHLAEBMEOLO_OFFSET))(this);
	}

	::JIGPLDJDFAK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JIGPLDJDFAK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NIBECKFABNL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NIBECKFABNL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBECKFABNL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBECKFABNL_NAMKJOJBAOA_OFFSET))(this);
	}
};
