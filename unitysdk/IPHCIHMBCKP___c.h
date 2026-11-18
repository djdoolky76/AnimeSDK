#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBubbleGroup; }
namespace System { template <typename T> class Func_1; }

#define IPHCIHMBCKP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15C2AE40)
#define IPHCIHMBCKP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C2ADF0)
#define IPHCIHMBCKP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C2AE30)

inline static constexpr unsigned int IPHCIHMBCKP___c_TypeDefinitionIndex = 48008;

class IPHCIHMBCKP___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ConfigBubbleGroup*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigBubbleGroup*>**)Il2CppClass::FromTypeDefinitionIndex(IPHCIHMBCKP___c_TypeDefinitionIndex)->GetStaticField(0x32570);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IPHCIHMBCKP___c_TypeDefinitionIndex)->GetStaticField(0x32578);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPHCIHMBCKP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHCIHMBCKP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigBubbleGroup* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigBubbleGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHCIHMBCKP___C_LPCHADDECLC_OFFSET))(this);
	}
};
