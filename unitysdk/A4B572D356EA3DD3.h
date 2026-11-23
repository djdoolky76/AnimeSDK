#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B0F983304F2229E5.h"

namespace UnityEngine::InputSystem { class Gamepad; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define A4B572D356EA3DD3_A0807FDC1CF4AF94_OFFSET UNITYSDK_OFFSET(0x29E99B0)
#define A4B572D356EA3DD3_A5A0352A1DF06476_OFFSET UNITYSDK_OFFSET(0x29E9980)
#define A4B572D356EA3DD3_B5A84F53460B9BF7_OFFSET UNITYSDK_OFFSET(0x29E9920)
#define A4B572D356EA3DD3_B7A4A9D3DA6276FF_OFFSET UNITYSDK_OFFSET(0x29E9950)
#define A4B572D356EA3DD3_E9B39A6068B7EC23_OFFSET UNITYSDK_OFFSET(0x29E9840)
#define A4B572D356EA3DD3_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x29E9AE0)
#define A4B572D356EA3DD3__CTOR_OFFSET UNITYSDK_OFFSET(0x29E9A80)

inline static constexpr unsigned int A4B572D356EA3DD3_TypeDefinitionIndex = 15767;

class A4B572D356EA3DD3 : public ::B0F983304F2229E5
{
public:
	static ::A4B572D356EA3DD3** StaticGet_E0E7A5F93551109B()
	{
		return (::A4B572D356EA3DD3**)Il2CppClass::FromTypeDefinitionIndex(A4B572D356EA3DD3_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::InputSystem::Gamepad* F346EB8E17BB1C47; // 0x18

	static ::A4B572D356EA3DD3* F7B0A23335A3DB16()
	{
		return ((::A4B572D356EA3DD3*(*)())((::PBYTE)hIl2Cpp + A4B572D356EA3DD3_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Boolean B7A4A9D3DA6276FF(::System::Int32 A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A4B572D356EA3DD3_B7A4A9D3DA6276FF_OFFSET))(this, A5C299C395D3E1B2);
	}

	::System::Boolean B5A84F53460B9BF7(::System::Int32 A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A4B572D356EA3DD3_B5A84F53460B9BF7_OFFSET))(this, A5C299C395D3E1B2);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B572D356EA3DD3__CTOR_OFFSET))(this);
	}

	::System::Boolean E9B39A6068B7EC23(::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A4B572D356EA3DD3_E9B39A6068B7EC23_OFFSET))(this, B48C66E5FB2449C6);
	}

	::UnityEngine::InputSystem::Controls::ButtonControl* A0807FDC1CF4AF94(::System::Int32 A5C299C395D3E1B2)
	{
		return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A4B572D356EA3DD3_A0807FDC1CF4AF94_OFFSET))(this, A5C299C395D3E1B2);
	}

	::System::Boolean A5A0352A1DF06476(::System::Int32 A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A4B572D356EA3DD3_A5A0352A1DF06476_OFFSET))(this, A5C299C395D3E1B2);
	}
};
