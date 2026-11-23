#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FB6152BAEC910568_F5628F8349D4A8A6_A621D3D5CA8E866C_OFFSET UNITYSDK_OFFSET(0x20533C0)
#define FB6152BAEC910568_F5628F8349D4A8A6_E68385421482391D_OFFSET UNITYSDK_OFFSET(0x2053460)
#define FB6152BAEC910568_F5628F8349D4A8A6_FC8740AA6A0E6F11_OFFSET UNITYSDK_OFFSET(0x2053320)
#define FB6152BAEC910568_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2053570)
#define FB6152BAEC910568_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FB6152BAEC910568_F5628F8349D4A8A6_TypeDefinitionIndex = 8304;

class FB6152BAEC910568_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FB6152BAEC910568_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FB6152BAEC910568_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FB6152BAEC910568_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_B55D445D85F5FA3C()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FB6152BAEC910568_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action** StaticGet_FDAFF8B28C4951C2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FB6152BAEC910568_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Action** StaticGet_E354E9AE74DDD48C()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FB6152BAEC910568_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FB6152BAEC910568_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB6152BAEC910568_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void FC8740AA6A0E6F11()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB6152BAEC910568_F5628F8349D4A8A6_FC8740AA6A0E6F11_OFFSET))(this);
	}

	::System::Void E68385421482391D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB6152BAEC910568_F5628F8349D4A8A6_E68385421482391D_OFFSET))(this);
	}

	::System::Void A621D3D5CA8E866C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB6152BAEC910568_F5628F8349D4A8A6_A621D3D5CA8E866C_OFFSET))(this);
	}
};
