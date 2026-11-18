#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OEHCHJHCNJH.h"
#include "unitysdk/System/Object.h"

class IKDHELBDJCH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EEGHFFKCKMI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A55FDB0)
#define EEGHFFKCKMI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A55FB30)
#define EEGHFFKCKMI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A55FB40)
#define EEGHFFKCKMI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A55FC00)
#define EEGHFFKCKMI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A55FD30)
#define EEGHFFKCKMI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A55FEE0)
#define EEGHFFKCKMI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A55F790)
#define EEGHFFKCKMI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A55F770)
#define EEGHFFKCKMI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A55FA50)
#define EEGHFFKCKMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A55FE90)

inline static constexpr unsigned int EEGHFFKCKMI_TypeDefinitionIndex = 12227;

class EEGHFFKCKMI : public ::System::Object
{
public:
	::Il2CppArray<::IKDHELBDJCH*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::OEHCHJHCNJH DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGHFFKCKMI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGHFFKCKMI_CHLEALKAOJO_OFFSET))(this);
	}
};
