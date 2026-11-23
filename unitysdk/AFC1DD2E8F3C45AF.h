#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AFC1DD2E8F3C45AF_A379D575D81B1D38_OFFSET UNITYSDK_OFFSET(0x272D390)
#define AFC1DD2E8F3C45AF_B8F377D886057BE2_OFFSET UNITYSDK_OFFSET(0x272D3E0)
#define AFC1DD2E8F3C45AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x272D2F0)
#define AFC1DD2E8F3C45AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AFC1DD2E8F3C45AF_TypeDefinitionIndex = 3000;

class AFC1DD2E8F3C45AF : public ::System::Object
{
public:
	static ::System::String** StaticGet_AF239ED53916AB93()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AFC1DD2E8F3C45AF_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_A8F803BA33BDA9A7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AFC1DD2E8F3C45AF_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	::System::String* A379D575D81B1D38()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFC1DD2E8F3C45AF_A379D575D81B1D38_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFC1DD2E8F3C45AF__CCTOR_OFFSET))();
	}

	::System::String* B8F377D886057BE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFC1DD2E8F3C45AF_B8F377D886057BE2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFC1DD2E8F3C45AF__CTOR_OFFSET))(this);
	}
};
