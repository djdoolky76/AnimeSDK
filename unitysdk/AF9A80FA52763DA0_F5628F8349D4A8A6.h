#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AF9A80FA52763DA0_F5628F8349D4A8A6_B8B81D75F88E0B5A_OFFSET UNITYSDK_OFFSET(0x2A1BF60)
#define AF9A80FA52763DA0_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A1D030)
#define AF9A80FA52763DA0_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AF9A80FA52763DA0_F5628F8349D4A8A6_TypeDefinitionIndex = 15860;

class AF9A80FA52763DA0_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::AF9A80FA52763DA0_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::AF9A80FA52763DA0_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AF9A80FA52763DA0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::String*>** StaticGet_AE9C5ABBADFAED14()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AF9A80FA52763DA0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AF9A80FA52763DA0_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF9A80FA52763DA0_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B8B81D75F88E0B5A(::System::String* F97CCFD7E3B3543B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AF9A80FA52763DA0_F5628F8349D4A8A6_B8B81D75F88E0B5A_OFFSET))(this, F97CCFD7E3B3543B);
	}
};
