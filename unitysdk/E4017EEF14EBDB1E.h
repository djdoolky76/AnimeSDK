#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FB9C69C2978712B9.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class StackTrace; }
namespace System::Threading { class Thread; }

#define E4017EEF14EBDB1E_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3DFDD00)
#define E4017EEF14EBDB1E_BEA9A6C0E77E2AB4_OFFSET UNITYSDK_OFFSET(0x3DFE160)
#define E4017EEF14EBDB1E_FEAE9484EDC5476A_OFFSET UNITYSDK_OFFSET(0x3DFDBA0)
#define E4017EEF14EBDB1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DFE2F0)
#define E4017EEF14EBDB1E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DFE370)
#define E4017EEF14EBDB1E__CTOR_OFFSET UNITYSDK_OFFSET(0x3DFE360)

inline static constexpr unsigned int E4017EEF14EBDB1E_TypeDefinitionIndex = 14662;

class E4017EEF14EBDB1E : public ::FB9C69C2978712B9
{
public:
	static ::System::Boolean* StaticGet_F563DDC2385DCF2E()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E4017EEF14EBDB1E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::System::Threading::Thread*>* BBFF27AC23C85AF1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>* A1C3DC64203023C8; // 0x28
	::System::Boolean EEBF5734481FACDD; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E4017EEF14EBDB1E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4017EEF14EBDB1E__CTOR_OFFSET))(this);
	}

	::System::Void BEA9A6C0E77E2AB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4017EEF14EBDB1E_BEA9A6C0E77E2AB4_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::IntPtr B2EA8C7C3E0F82E9, ::System::Boolean F61E953F737E3C7A)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + E4017EEF14EBDB1E__CTOR_1_OFFSET))(this, B2EA8C7C3E0F82E9, F61E953F737E3C7A);
	}

	::System::Void FEAE9484EDC5476A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4017EEF14EBDB1E_FEAE9484EDC5476A_OFFSET))(this);
	}

	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E4017EEF14EBDB1E_A3345B9AC9D75C45_OFFSET))(this);
	}
};
