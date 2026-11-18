#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPIKCNODKIO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GDIOGLHKFGE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NHDEKLOPJGH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFEC260)
#define NHDEKLOPJGH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFEC030)
#define NHDEKLOPJGH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFEC1A0)
#define NHDEKLOPJGH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFEC340)
#define NHDEKLOPJGH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFEC040)
#define NHDEKLOPJGH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFEC4C0)
#define NHDEKLOPJGH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFEBC90)
#define NHDEKLOPJGH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFEBC70)
#define NHDEKLOPJGH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFEBF50)
#define NHDEKLOPJGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEC470)

inline static constexpr unsigned int NHDEKLOPJGH_TypeDefinitionIndex = 11905;

class NHDEKLOPJGH : public ::System::Object
{
public:
	::GPIKCNODKIO DHDJDGFNBOA; // 0x10
	::Il2CppArray<::GDIOGLHKFGE*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEKLOPJGH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NHDEKLOPJGH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
