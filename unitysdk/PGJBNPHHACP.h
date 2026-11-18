#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDGIHGPHECP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IDAGMPEHMNP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PGJBNPHHACP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF8DF80)
#define PGJBNPHHACP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF8DD40)
#define PGJBNPHHACP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF8DEC0)
#define PGJBNPHHACP_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1BF8E5B0)
#define PGJBNPHHACP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF8E060)
#define PGJBNPHHACP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF8DD50)
#define PGJBNPHHACP_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1BF8E3B0)
#define PGJBNPHHACP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF8E1E0)
#define PGJBNPHHACP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF8D990)
#define PGJBNPHHACP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF8E590)
#define PGJBNPHHACP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF8D970)
#define PGJBNPHHACP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF8DC50)
#define PGJBNPHHACP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF8E190)

inline static constexpr unsigned int PGJBNPHHACP_TypeDefinitionIndex = 9493;

class PGJBNPHHACP : public ::System::Object
{
public:
	::Il2CppArray<::IDAGMPEHMNP*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::FDGIHGPHECP DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PGJBNPHHACP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PGJBNPHHACP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PGJBNPHHACP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::IDAGMPEHMNP* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::IDAGMPEHMNP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PGJBNPHHACP_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::IDAGMPEHMNP*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::IDAGMPEHMNP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBNPHHACP_CHLEALKAOJO_OFFSET))(this);
	}
};
