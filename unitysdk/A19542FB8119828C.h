#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define A19542FB8119828C_A5492FF70A126F11_OFFSET UNITYSDK_OFFSET(0x2AB6380)
#define A19542FB8119828C_B4FA19449CC80EFC_OFFSET UNITYSDK_OFFSET(0x2AB6300)
#define A19542FB8119828C_B8F14E28AE5062DA_OFFSET UNITYSDK_OFFSET(0x2AB6130)
#define A19542FB8119828C_BFA7610D4926ADFB_OFFSET UNITYSDK_OFFSET(0x2AB6270)
#define A19542FB8119828C_EEA5C7B6D3AD0BA9_OFFSET UNITYSDK_OFFSET(0x2AB64F0)
#define A19542FB8119828C_F232597DEF44E5BD_OFFSET UNITYSDK_OFFSET(0x2AB61A0)
#define A19542FB8119828C_F38040C20BD19CA8_OFFSET UNITYSDK_OFFSET(0x2AB6280)
#define A19542FB8119828C_F691B2D5D806C0C1_OFFSET UNITYSDK_OFFSET(0x2AB6130)
#define A19542FB8119828C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A19542FB8119828C_TypeDefinitionIndex = 19243;

class A19542FB8119828C : public ::System::Object
{
public:
	static ::UnityEngine::GameObject** StaticGet_E8F4EFB970DF02DB()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(A19542FB8119828C_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Boolean F232597DEF44E5BD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + A19542FB8119828C_F232597DEF44E5BD_OFFSET))();
	}

	static ::System::Void B4FA19449CC80EFC(::System::Int32 BE9B161B3F3C2937)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + A19542FB8119828C_B4FA19449CC80EFC_OFFSET))(BE9B161B3F3C2937);
	}

	static ::System::Int32 BFA7610D4926ADFB()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + A19542FB8119828C_BFA7610D4926ADFB_OFFSET))();
	}

	static ::System::Int32 B8F14E28AE5062DA()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + A19542FB8119828C_B8F14E28AE5062DA_OFFSET))();
	}

	static ::System::Int32 F691B2D5D806C0C1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + A19542FB8119828C_F691B2D5D806C0C1_OFFSET))();
	}

	static ::UnityEngine::GameObject* A5492FF70A126F11()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + A19542FB8119828C_A5492FF70A126F11_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A19542FB8119828C__CTOR_OFFSET))(this);
	}

	static ::System::Boolean F38040C20BD19CA8(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + A19542FB8119828C_F38040C20BD19CA8_OFFSET))(EFF983A80A48BB2A);
	}

	static ::System::String* EEA5C7B6D3AD0BA9()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + A19542FB8119828C_EEA5C7B6D3AD0BA9_OFFSET))();
	}
};
