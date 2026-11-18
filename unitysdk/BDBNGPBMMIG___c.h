#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICloudController_UIRTCItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BDBNGPBMMIG___C_AHFMBIONBEN_OFFSET UNITYSDK_OFFSET(0x14C358D0)
#define BDBNGPBMMIG___C_HDMONLIJAAD_OFFSET UNITYSDK_OFFSET(0x14C358F0)
#define BDBNGPBMMIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C35880)
#define BDBNGPBMMIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C358C0)

inline static constexpr unsigned int BDBNGPBMMIG___c_TypeDefinitionIndex = 62397;

class BDBNGPBMMIG___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__12_1()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BDBNGPBMMIG___c_TypeDefinitionIndex)->GetStaticField(0x36DF0);
	}
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BDBNGPBMMIG___c_TypeDefinitionIndex)->GetStaticField(0x36DF8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BDBNGPBMMIG___c_TypeDefinitionIndex)->GetStaticField(0x36E00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDBNGPBMMIG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBNGPBMMIG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AHFMBIONBEN(::MoleMole::UICloudController_UIRTCItem* OOGOGDPHHPD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICloudController_UIRTCItem*))((::PBYTE)hIl2Cpp + BDBNGPBMMIG___C_AHFMBIONBEN_OFFSET))(this, OOGOGDPHHPD);
	}

	::System::Boolean HDMONLIJAAD(::MoleMole::UICloudController_UIRTCItem* OOGOGDPHHPD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICloudController_UIRTCItem*))((::PBYTE)hIl2Cpp + BDBNGPBMMIG___C_HDMONLIJAAD_OFFSET))(this, OOGOGDPHHPD);
	}
};
