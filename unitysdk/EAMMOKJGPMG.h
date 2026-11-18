#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILMBCKNKFAC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FAGPGLCENPM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EAMMOKJGPMG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16621610)
#define EAMMOKJGPMG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x166213E0)
#define EAMMOKJGPMG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16621550)
#define EAMMOKJGPMG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x166216F0)
#define EAMMOKJGPMG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x166213F0)
#define EAMMOKJGPMG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16621870)
#define EAMMOKJGPMG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16621040)
#define EAMMOKJGPMG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16621020)
#define EAMMOKJGPMG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16621300)
#define EAMMOKJGPMG__CTOR_OFFSET UNITYSDK_OFFSET(0x16621820)

inline static constexpr unsigned int EAMMOKJGPMG_TypeDefinitionIndex = 16717;

class EAMMOKJGPMG : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::FAGPGLCENPM*>* OJMBOGGMIKO; // 0x28
	::ILMBCKNKFAC DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMMOKJGPMG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EAMMOKJGPMG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
