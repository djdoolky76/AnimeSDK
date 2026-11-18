#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCNKGAANGLG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KOFPACBEAPL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ACADCAGNKFB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BD1630)
#define ACADCAGNKFB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BD13B0)
#define ACADCAGNKFB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BD13C0)
#define ACADCAGNKFB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BD1480)
#define ACADCAGNKFB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BD15B0)
#define ACADCAGNKFB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19BD1A30)
#define ACADCAGNKFB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19BD1780)
#define ACADCAGNKFB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BD1000)
#define ACADCAGNKFB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19BD1760)
#define ACADCAGNKFB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BD0FE0)
#define ACADCAGNKFB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BD12C0)
#define ACADCAGNKFB__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD1710)

inline static constexpr unsigned int ACADCAGNKFB_TypeDefinitionIndex = 16227;

class ACADCAGNKFB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::KOFPACBEAPL*>* OJMBOGGMIKO; // 0x18
	::FCNKGAANGLG DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADCAGNKFB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADCAGNKFB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADCAGNKFB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADCAGNKFB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADCAGNKFB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ACADCAGNKFB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ACADCAGNKFB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADCAGNKFB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADCAGNKFB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADCAGNKFB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ACADCAGNKFB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::KOFPACBEAPL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KOFPACBEAPL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACADCAGNKFB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
