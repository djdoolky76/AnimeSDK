#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AF7290E01E012C43.h"

#define A9771BDC3DE2D461_A5A0352A1DF06476_OFFSET UNITYSDK_OFFSET(0x3A86E40)
#define A9771BDC3DE2D461_B5A84F53460B9BF7_OFFSET UNITYSDK_OFFSET(0x3A86DE0)
#define A9771BDC3DE2D461_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x3A86EF0)
#define A9771BDC3DE2D461__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A86EA0)
#define A9771BDC3DE2D461__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9771BDC3DE2D461_TypeDefinitionIndex = 12040;

class A9771BDC3DE2D461 : public ::System::Object
{
public:
	static ::A9771BDC3DE2D461** StaticGet_E0E7A5F93551109B()
	{
		return (::A9771BDC3DE2D461**)Il2CppClass::FromTypeDefinitionIndex(A9771BDC3DE2D461_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A9771BDC3DE2D461__CCTOR_OFFSET))();
	}

	static ::A9771BDC3DE2D461* F7B0A23335A3DB16()
	{
		return ((::A9771BDC3DE2D461*(*)())((::PBYTE)hIl2Cpp + A9771BDC3DE2D461_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9771BDC3DE2D461__CTOR_OFFSET))(this);
	}

	::System::Boolean B5A84F53460B9BF7(::UnityEngine::AF7290E01E012C43 A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AF7290E01E012C43))((::PBYTE)hIl2Cpp + A9771BDC3DE2D461_B5A84F53460B9BF7_OFFSET))(this, A5C299C395D3E1B2);
	}

	::System::Boolean A5A0352A1DF06476(::UnityEngine::AF7290E01E012C43 A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AF7290E01E012C43))((::PBYTE)hIl2Cpp + A9771BDC3DE2D461_A5A0352A1DF06476_OFFSET))(this, A5C299C395D3E1B2);
	}
};
