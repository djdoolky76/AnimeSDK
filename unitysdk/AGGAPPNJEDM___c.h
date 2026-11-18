#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICloudController_UIRTCItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AGGAPPNJEDM___C_AHFMBIONBEN_OFFSET UNITYSDK_OFFSET(0x17CBEE60)
#define AGGAPPNJEDM___C_HDMONLIJAAD_OFFSET UNITYSDK_OFFSET(0x17CBEE80)
#define AGGAPPNJEDM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CBEE10)
#define AGGAPPNJEDM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBEE50)

inline static constexpr unsigned int AGGAPPNJEDM___c_TypeDefinitionIndex = 88997;

class AGGAPPNJEDM___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AGGAPPNJEDM___c_TypeDefinitionIndex)->GetStaticField(0x3A190);
	}
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__12_1()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AGGAPPNJEDM___c_TypeDefinitionIndex)->GetStaticField(0x3A198);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AGGAPPNJEDM___c_TypeDefinitionIndex)->GetStaticField(0x3A1A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGGAPPNJEDM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGAPPNJEDM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AHFMBIONBEN(::MoleMole::UICloudController_UIRTCItem* OOGOGDPHHPD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICloudController_UIRTCItem*))((::PBYTE)hIl2Cpp + AGGAPPNJEDM___C_AHFMBIONBEN_OFFSET))(this, OOGOGDPHHPD);
	}

	::System::Boolean HDMONLIJAAD(::MoleMole::UICloudController_UIRTCItem* OOGOGDPHHPD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICloudController_UIRTCItem*))((::PBYTE)hIl2Cpp + AGGAPPNJEDM___C_HDMONLIJAAD_OFFSET))(this, OOGOGDPHHPD);
	}
};
