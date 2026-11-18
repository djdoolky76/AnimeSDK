#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLBEJANMEG;
namespace MoleMole { class UIHouseRhythmRewardGetRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HDOIKJKLOBL___C_OHBHMJACHKH_OFFSET UNITYSDK_OFFSET(0x100FB450)
#define HDOIKJKLOBL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x100FB400)
#define HDOIKJKLOBL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x100FB440)

inline static constexpr unsigned int HDOIKJKLOBL___c_TypeDefinitionIndex = 82802;

class HDOIKJKLOBL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HDOIKJKLOBL___c_TypeDefinitionIndex)->GetStaticField(0x3B090);
	}
	static ::System::Func_2<::ODLBEJANMEG*, ::System::Object*>** StaticGet___9__11_3()
	{
		return (::System::Func_2<::ODLBEJANMEG*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(HDOIKJKLOBL___c_TypeDefinitionIndex)->GetStaticField(0x3B098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOIKJKLOBL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOIKJKLOBL___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIHouseRhythmRewardGetRowWidgetController_Data* OHBHMJACHKH(::ODLBEJANMEG* EJCBEJMGFAJ)
	{
		return ((::MoleMole::UIHouseRhythmRewardGetRowWidgetController_Data*(*)(::PVOID, ::ODLBEJANMEG*))((::PBYTE)hIl2Cpp + HDOIKJKLOBL___C_OHBHMJACHKH_OFFSET))(this, EJCBEJMGFAJ);
	}
};
