#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define HMFINFOAFJA___C_EMOIJKNGKPE_OFFSET UNITYSDK_OFFSET(0x1A5CDE10)
#define HMFINFOAFJA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5CDDC0)
#define HMFINFOAFJA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CDE00)

inline static constexpr unsigned int HMFINFOAFJA___c_TypeDefinitionIndex = 17118;

class HMFINFOAFJA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HMFINFOAFJA___c_TypeDefinitionIndex)->GetStaticField(0x78B0);
	}
	static ::System::Converter_2<::System::String*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Converter_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HMFINFOAFJA___c_TypeDefinitionIndex)->GetStaticField(0x78B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMFINFOAFJA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFINFOAFJA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EMOIJKNGKPE(::System::String* HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HMFINFOAFJA___C_EMOIJKNGKPE_OFFSET))(this, HAAEBCOBKFF);
	}
};
