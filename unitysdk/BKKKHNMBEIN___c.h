#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define BKKKHNMBEIN___C_GGGCPOOAICO_OFFSET UNITYSDK_OFFSET(0x14C4DBA0)
#define BKKKHNMBEIN___C_HBNNBCFGIGC_OFFSET UNITYSDK_OFFSET(0x14C4DA40)
#define BKKKHNMBEIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C4D9F0)
#define BKKKHNMBEIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4DA30)

inline static constexpr unsigned int BKKKHNMBEIN___c_TypeDefinitionIndex = 41301;

class BKKKHNMBEIN___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__24_5()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(BKKKHNMBEIN___c_TypeDefinitionIndex)->GetStaticField(0x42E50);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__24_6()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(BKKKHNMBEIN___c_TypeDefinitionIndex)->GetStaticField(0x42E58);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKKKHNMBEIN___c_TypeDefinitionIndex)->GetStaticField(0x42E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKKKHNMBEIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKKHNMBEIN___C__CTOR_OFFSET))(this);
	}

	::System::Void HBNNBCFGIGC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BKKKHNMBEIN___C_HBNNBCFGIGC_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GGGCPOOAICO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BKKKHNMBEIN___C_GGGCPOOAICO_OFFSET))(this, KOIBHLHLMFC);
	}
};
