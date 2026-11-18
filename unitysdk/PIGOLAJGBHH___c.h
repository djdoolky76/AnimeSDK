#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotPotCollectDishRowWidgetController_Data; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define PIGOLAJGBHH___C_AFPABKCIKLG_OFFSET UNITYSDK_OFFSET(0x1A7F4710)
#define PIGOLAJGBHH___C_CHNOFMMACPA_OFFSET UNITYSDK_OFFSET(0x1A7F44D0)
#define PIGOLAJGBHH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7F4480)
#define PIGOLAJGBHH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F44C0)

inline static constexpr unsigned int PIGOLAJGBHH___c_TypeDefinitionIndex = 39557;

class PIGOLAJGBHH___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_40()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(PIGOLAJGBHH___c_TypeDefinitionIndex)->GetStaticField(0x39E10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PIGOLAJGBHH___c_TypeDefinitionIndex)->GetStaticField(0x39E18);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__17_45()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PIGOLAJGBHH___c_TypeDefinitionIndex)->GetStaticField(0x39E20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGOLAJGBHH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGOLAJGBHH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CHNOFMMACPA(::MoleMole::UIActivityHotPotCollectDishRowWidgetController_Data* EJCBEJMGFAJ, ::MoleMole::UIActivityHotPotCollectDishRowWidgetController_Data* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIActivityHotPotCollectDishRowWidgetController_Data*, ::MoleMole::UIActivityHotPotCollectDishRowWidgetController_Data*))((::PBYTE)hIl2Cpp + PIGOLAJGBHH___C_CHNOFMMACPA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void AFPABKCIKLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGOLAJGBHH___C_AFPABKCIKLG_OFFSET))(this);
	}
};
