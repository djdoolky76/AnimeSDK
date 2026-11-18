#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CCGJPFMDHND___C_HOHMPCKPKMN_OFFSET UNITYSDK_OFFSET(0x1693FD30)
#define CCGJPFMDHND___C_JNNMKODGLNM_OFFSET UNITYSDK_OFFSET(0x1693FE20)
#define CCGJPFMDHND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1693FCE0)
#define CCGJPFMDHND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1693FD20)

inline static constexpr unsigned int CCGJPFMDHND___c_TypeDefinitionIndex = 82237;

class CCGJPFMDHND___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CCGJPFMDHND___c_TypeDefinitionIndex)->GetStaticField(0x45D30);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__3_1()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(CCGJPFMDHND___c_TypeDefinitionIndex)->GetStaticField(0x45D38);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(CCGJPFMDHND___c_TypeDefinitionIndex)->GetStaticField(0x45D40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCGJPFMDHND___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJPFMDHND___C__CTOR_OFFSET))(this);
	}

	::System::Void HOHMPCKPKMN(::System::EventArgs* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CCGJPFMDHND___C_HOHMPCKPKMN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void JNNMKODGLNM(::System::EventArgs* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CCGJPFMDHND___C_JNNMKODGLNM_OFFSET))(this, PIIPCLCCOIG);
	}
};
