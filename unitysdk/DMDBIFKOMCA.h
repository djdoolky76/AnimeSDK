#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MHMNFODFOJL.h"
#include "unitysdk/System/Object.h"

class JKNAOFHCDAA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMDBIFKOMCA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187A0070)
#define DMDBIFKOMCA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1879FE40)
#define DMDBIFKOMCA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1879FFB0)
#define DMDBIFKOMCA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187A0150)
#define DMDBIFKOMCA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1879FE50)
#define DMDBIFKOMCA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x187A0290)
#define DMDBIFKOMCA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1879FAA0)
#define DMDBIFKOMCA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1879FA80)
#define DMDBIFKOMCA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1879FD60)
#define DMDBIFKOMCA__CTOR_OFFSET UNITYSDK_OFFSET(0x187A0280)

inline static constexpr unsigned int DMDBIFKOMCA_TypeDefinitionIndex = 9893;

class DMDBIFKOMCA : public ::System::Object
{
public:
	::MHMNFODFOJL DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::JKNAOFHCDAA*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBIFKOMCA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBIFKOMCA_CHLEALKAOJO_OFFSET))(this);
	}
};
