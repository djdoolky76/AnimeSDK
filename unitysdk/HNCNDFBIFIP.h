#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEHBMHLNABF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JMAKMGNJBCL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HNCNDFBIFIP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x160FE920)
#define HNCNDFBIFIP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x160FE6A0)
#define HNCNDFBIFIP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x160FE6B0)
#define HNCNDFBIFIP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x160FE770)
#define HNCNDFBIFIP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x160FE8A0)
#define HNCNDFBIFIP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x160FED20)
#define HNCNDFBIFIP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x160FEA70)
#define HNCNDFBIFIP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x160FE300)
#define HNCNDFBIFIP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x160FEA50)
#define HNCNDFBIFIP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x160FE2E0)
#define HNCNDFBIFIP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x160FE5C0)
#define HNCNDFBIFIP__CTOR_OFFSET UNITYSDK_OFFSET(0x160FEA00)

inline static constexpr unsigned int HNCNDFBIFIP_TypeDefinitionIndex = 9800;

class HNCNDFBIFIP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::JMAKMGNJBCL*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::JEHBMHLNABF DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCNDFBIFIP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::JMAKMGNJBCL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JMAKMGNJBCL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCNDFBIFIP_CHLEALKAOJO_OFFSET))(this);
	}
};
