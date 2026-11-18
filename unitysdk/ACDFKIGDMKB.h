#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PIPFGHAIONN.h"
#include "unitysdk/System/Object.h"

class LCAPHNOIFIE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ACDFKIGDMKB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17743130)
#define ACDFKIGDMKB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17742EF0)
#define ACDFKIGDMKB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17743070)
#define ACDFKIGDMKB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17743210)
#define ACDFKIGDMKB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17742F00)
#define ACDFKIGDMKB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17743390)
#define ACDFKIGDMKB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17742B40)
#define ACDFKIGDMKB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17742B20)
#define ACDFKIGDMKB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17742E00)
#define ACDFKIGDMKB__CTOR_OFFSET UNITYSDK_OFFSET(0x17743340)

inline static constexpr unsigned int ACDFKIGDMKB_TypeDefinitionIndex = 13402;

class ACDFKIGDMKB : public ::System::Object
{
public:
	::PIPFGHAIONN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::LCAPHNOIFIE*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDFKIGDMKB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDFKIGDMKB_CHLEALKAOJO_OFFSET))(this);
	}
};
