#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define E486B21FD63364EC_F5628F8349D4A8A6_B59B7169AC74B8C9_OFFSET UNITYSDK_OFFSET(0x39B5E40)
#define E486B21FD63364EC_F5628F8349D4A8A6_EBC7C1383AC90FCA_OFFSET UNITYSDK_OFFSET(0x3AAFFA0)
#define E486B21FD63364EC_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AB23B0)
#define E486B21FD63364EC_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E486B21FD63364EC_F5628F8349D4A8A6_TypeDefinitionIndex = 12055;

class E486B21FD63364EC_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E486B21FD63364EC_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E486B21FD63364EC_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E486B21FD63364EC_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_B61CC0AF0D30B87F()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(E486B21FD63364EC_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action** StaticGet_A11D69BF37F0CD6C()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(E486B21FD63364EC_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E486B21FD63364EC_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E486B21FD63364EC_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B59B7169AC74B8C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E486B21FD63364EC_F5628F8349D4A8A6_B59B7169AC74B8C9_OFFSET))(this);
	}

	::System::Void EBC7C1383AC90FCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E486B21FD63364EC_F5628F8349D4A8A6_EBC7C1383AC90FCA_OFFSET))(this);
	}
};
