#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OEBJLKCPHNE.h"
#include "unitysdk/System/Object.h"

class FIFBFOEGNBP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPEFCENKKAG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DD3D10)
#define OPEFCENKKAG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DD3AD0)
#define OPEFCENKKAG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DD3C50)
#define OPEFCENKKAG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DD3DF0)
#define OPEFCENKKAG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DD3AE0)
#define OPEFCENKKAG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DD3F30)
#define OPEFCENKKAG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DD3720)
#define OPEFCENKKAG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DD3700)
#define OPEFCENKKAG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DD39E0)
#define OPEFCENKKAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD3F20)

inline static constexpr unsigned int OPEFCENKKAG_TypeDefinitionIndex = 17473;

class OPEFCENKKAG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::OEBJLKCPHNE DHDJDGFNBOA; // 0x20
	::Il2CppArray<::FIFBFOEGNBP*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEFCENKKAG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEFCENKKAG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEFCENKKAG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OPEFCENKKAG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OPEFCENKKAG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEFCENKKAG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEFCENKKAG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEFCENKKAG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEFCENKKAG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OPEFCENKKAG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
