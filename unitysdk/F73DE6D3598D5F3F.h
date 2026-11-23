#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A9F5CD3D9D9FD818;
namespace System { class String; }

#define F73DE6D3598D5F3F_B4D270C3BA7C818E_OFFSET UNITYSDK_OFFSET(0x3DE2C10)
#define F73DE6D3598D5F3F_B68412D5945B3911_OFFSET UNITYSDK_OFFSET(0x3DE2E60)
#define F73DE6D3598D5F3F_BA9CC339F8D69A7F_OFFSET UNITYSDK_OFFSET(0x3DE2F80)
#define F73DE6D3598D5F3F_F271F47822932EED_OFFSET UNITYSDK_OFFSET(0x3DE2AA0)
#define F73DE6D3598D5F3F_F54F53F3037329D1_OFFSET UNITYSDK_OFFSET(0x3DE2EC0)
#define F73DE6D3598D5F3F_F69BEF8FB3D5C582_OFFSET UNITYSDK_OFFSET(0x3DE2F20)
#define F73DE6D3598D5F3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DE2DD0)

inline static constexpr unsigned int F73DE6D3598D5F3F_TypeDefinitionIndex = 20832;

class F73DE6D3598D5F3F : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_F43DE0F1B90A1F55()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F73DE6D3598D5F3F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::A9F5CD3D9D9FD818** StaticGet_EA37EFCCD6544EBA()
	{
		return (::A9F5CD3D9D9FD818**)Il2CppClass::FromTypeDefinitionIndex(F73DE6D3598D5F3F_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::String* B4D270C3BA7C818E(::System::String* FCABEAD4F7F5B56E)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + F73DE6D3598D5F3F_B4D270C3BA7C818E_OFFSET))(FCABEAD4F7F5B56E);
	}

	static ::A9F5CD3D9D9FD818* BA9CC339F8D69A7F()
	{
		return ((::A9F5CD3D9D9FD818*(*)())((::PBYTE)hIl2Cpp + F73DE6D3598D5F3F_BA9CC339F8D69A7F_OFFSET))();
	}

	static ::System::String* F69BEF8FB3D5C582()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F73DE6D3598D5F3F_F69BEF8FB3D5C582_OFFSET))();
	}

	static ::System::String* B68412D5945B3911()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F73DE6D3598D5F3F_B68412D5945B3911_OFFSET))();
	}

	static ::System::String* F271F47822932EED(::System::String* A4804899BB9E2E63, ::System::Object* ED6BA5E2880F301C)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + F73DE6D3598D5F3F_F271F47822932EED_OFFSET))(A4804899BB9E2E63, ED6BA5E2880F301C);
	}

	static ::System::String* F54F53F3037329D1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F73DE6D3598D5F3F_F54F53F3037329D1_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F73DE6D3598D5F3F__CCTOR_OFFSET))();
	}
};
