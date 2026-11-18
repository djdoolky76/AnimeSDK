#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NOODEJFJLCK.h"
#include "unitysdk/System/Object.h"

class KLAEKIPLKEA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ODOPCHILHLF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0D1070)
#define ODOPCHILHLF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0D0DF0)
#define ODOPCHILHLF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D0D0E00)
#define ODOPCHILHLF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0D0EC0)
#define ODOPCHILHLF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0D0FF0)
#define ODOPCHILHLF_KIPLFEENCNN_OFFSET UNITYSDK_OFFSET(0x1D0D1450)
#define ODOPCHILHLF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D0D11A0)
#define ODOPCHILHLF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D0D0A40)
#define ODOPCHILHLF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0D0A20)
#define ODOPCHILHLF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0D0D00)
#define ODOPCHILHLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D1150)

inline static constexpr unsigned int ODOPCHILHLF_TypeDefinitionIndex = 12934;

class ODOPCHILHLF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::NOODEJFJLCK DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::KLAEKIPLKEA*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOPCHILHLF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOPCHILHLF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOPCHILHLF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOPCHILHLF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOPCHILHLF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ODOPCHILHLF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ODOPCHILHLF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOPCHILHLF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ODOPCHILHLF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOPCHILHLF_CHLEALKAOJO_OFFSET))(this);
	}

	::KLAEKIPLKEA* KIPLFEENCNN(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KLAEKIPLKEA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODOPCHILHLF_KIPLFEENCNN_OFFSET))(this, MGMDLMBEDJF);
	}
};
