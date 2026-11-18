#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APEKHJKNEEH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IKAPOENMDIL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCGGNMADDJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF73200)
#define NPCGGNMADDJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF72FC0)
#define NPCGGNMADDJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF73140)
#define NPCGGNMADDJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF732E0)
#define NPCGGNMADDJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF72FD0)
#define NPCGGNMADDJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF73420)
#define NPCGGNMADDJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF73630)
#define NPCGGNMADDJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF72C10)
#define NPCGGNMADDJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF73610)
#define NPCGGNMADDJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF72BF0)
#define NPCGGNMADDJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF72ED0)
#define NPCGGNMADDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF73410)

inline static constexpr unsigned int NPCGGNMADDJ_TypeDefinitionIndex = 11972;

class NPCGGNMADDJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::IKAPOENMDIL*>* OJMBOGGMIKO; // 0x20
	::APEKHJKNEEH DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCGGNMADDJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_CHLEALKAOJO_OFFSET))(this);
	}

	::IKAPOENMDIL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IKAPOENMDIL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCGGNMADDJ_NAMKJOJBAOA_OFFSET))(this);
	}
};
