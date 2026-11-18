#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGJDDOCJGHG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EMFHGLKMIBI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FHDKBAIKKGO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19C1DC20)
#define FHDKBAIKKGO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19C1D9E0)
#define FHDKBAIKKGO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19C1DB60)
#define FHDKBAIKKGO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19C1DD00)
#define FHDKBAIKKGO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19C1D9F0)
#define FHDKBAIKKGO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19C1DE80)
#define FHDKBAIKKGO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19C1D630)
#define FHDKBAIKKGO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19C1D610)
#define FHDKBAIKKGO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19C1D8F0)
#define FHDKBAIKKGO__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1DE30)

inline static constexpr unsigned int FHDKBAIKKGO_TypeDefinitionIndex = 16598;

class FHDKBAIKKGO : public ::System::Object
{
public:
	::FGJDDOCJGHG DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::EMFHGLKMIBI*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKBAIKKGO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKBAIKKGO_CHLEALKAOJO_OFFSET))(this);
	}
};
