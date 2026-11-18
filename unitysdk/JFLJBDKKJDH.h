#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPJOENCDIGD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FNNIIPNIKLH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFLJBDKKJDH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5EC590)
#define JFLJBDKKJDH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5EC350)
#define JFLJBDKKJDH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5EC4D0)
#define JFLJBDKKJDH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5EC670)
#define JFLJBDKKJDH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5EC360)
#define JFLJBDKKJDH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5EC9A0)
#define JFLJBDKKJDH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5EC7D0)
#define JFLJBDKKJDH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5EBFA0)
#define JFLJBDKKJDH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5EC7B0)
#define JFLJBDKKJDH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5EBF80)
#define JFLJBDKKJDH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5EC260)
#define JFLJBDKKJDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EC7A0)

inline static constexpr unsigned int JFLJBDKKJDH_TypeDefinitionIndex = 13395;

class JFLJBDKKJDH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::DPJOENCDIGD DHDJDGFNBOA; // 0x20
	::Il2CppArray<::FNNIIPNIKLH*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJBDKKJDH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_CHLEALKAOJO_OFFSET))(this);
	}

	::FNNIIPNIKLH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FNNIIPNIKLH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFLJBDKKJDH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
