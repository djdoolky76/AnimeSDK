#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ED15A8888B8C4FEA;
namespace System { class String; }

#define E381B34E9AA1FF90_A1889FE7549B9980_OFFSET UNITYSDK_OFFSET(0x3E63730)
#define E381B34E9AA1FF90_A40F7204AFA43685_OFFSET UNITYSDK_OFFSET(0x3E62F80)
#define E381B34E9AA1FF90_B120BCC8F67A2A53_OFFSET UNITYSDK_OFFSET(0x3E63790)
#define E381B34E9AA1FF90_F38CD93655931895_OFFSET UNITYSDK_OFFSET(0x3E636D0)
#define E381B34E9AA1FF90_F9F889804C24F7B6_OFFSET UNITYSDK_OFFSET(0x3E63A00)
#define E381B34E9AA1FF90__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E63630)

inline static constexpr unsigned int E381B34E9AA1FF90_TypeDefinitionIndex = 14821;

class E381B34E9AA1FF90 : public ::System::Object
{
public:
	static ::System::String** StaticGet_E1D3BBDC26CF0ECF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E381B34E9AA1FF90_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::ED15A8888B8C4FEA** StaticGet_BAA1ED0372647FA1()
	{
		return (::ED15A8888B8C4FEA**)Il2CppClass::FromTypeDefinitionIndex(E381B34E9AA1FF90_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Boolean* StaticGet_A3403E9EB8914667()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E381B34E9AA1FF90_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Boolean* StaticGet_AA6EBE0A614A7E24()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E381B34E9AA1FF90_TypeDefinitionIndex)->GetStaticField(0x11);
	}
	static ::System::Int32* StaticGet_AAE08FC5B69E3FAF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(E381B34E9AA1FF90_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_B27E3703732C1801()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(E381B34E9AA1FF90_TypeDefinitionIndex)->GetStaticField(0x14);
	}
	static ::System::Object** StaticGet_EAB492BACF86F581()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(E381B34E9AA1FF90_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void A40F7204AFA43685(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + E381B34E9AA1FF90_A40F7204AFA43685_OFFSET))(B083BE7841B347C4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E381B34E9AA1FF90__CCTOR_OFFSET))();
	}

	static ::System::Boolean F38CD93655931895()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + E381B34E9AA1FF90_F38CD93655931895_OFFSET))();
	}

	static ::System::Boolean F9F889804C24F7B6()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + E381B34E9AA1FF90_F9F889804C24F7B6_OFFSET))();
	}

	static ::System::Int32 A1889FE7549B9980()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + E381B34E9AA1FF90_A1889FE7549B9980_OFFSET))();
	}

	static ::ED15A8888B8C4FEA* B120BCC8F67A2A53()
	{
		return ((::ED15A8888B8C4FEA*(*)())((::PBYTE)hIl2Cpp + E381B34E9AA1FF90_B120BCC8F67A2A53_OFFSET))();
	}
};
