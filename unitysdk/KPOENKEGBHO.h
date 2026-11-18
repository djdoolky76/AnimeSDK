#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OGNPMLBIDGI.h"
#include "unitysdk/System/Object.h"

class JEPFNCILCKK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPOENKEGBHO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195600F0)
#define KPOENKEGBHO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1955FEC0)
#define KPOENKEGBHO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19560030)
#define KPOENKEGBHO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195601D0)
#define KPOENKEGBHO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1955FED0)
#define KPOENKEGBHO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19560310)
#define KPOENKEGBHO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1955FB20)
#define KPOENKEGBHO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1955FB00)
#define KPOENKEGBHO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1955FDE0)
#define KPOENKEGBHO__CTOR_OFFSET UNITYSDK_OFFSET(0x19560300)

inline static constexpr unsigned int KPOENKEGBHO_TypeDefinitionIndex = 16183;

class KPOENKEGBHO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::OGNPMLBIDGI DHDJDGFNBOA; // 0x18
	::Il2CppArray<::JEPFNCILCKK*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOENKEGBHO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOENKEGBHO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOENKEGBHO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPOENKEGBHO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KPOENKEGBHO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOENKEGBHO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOENKEGBHO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOENKEGBHO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KPOENKEGBHO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOENKEGBHO_CHLEALKAOJO_OFFSET))(this);
	}
};
