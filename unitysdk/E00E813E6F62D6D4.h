#pragma once
#include "unitysdk/unitysdk.h"

namespace ABC::CustomRenderPipeline { class PlanarReflectionComp; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define E00E813E6F62D6D4_A999629F81A309DD_OFFSET UNITYSDK_OFFSET(0x27A8CC0)
#define E00E813E6F62D6D4_B180D86C62877D7E_1_OFFSET UNITYSDK_OFFSET(0x27A8F80)
#define E00E813E6F62D6D4_B180D86C62877D7E_OFFSET UNITYSDK_OFFSET(0x27A8E50)
#define E00E813E6F62D6D4_B78A4EB2EEEABBB7_OFFSET UNITYSDK_OFFSET(0x27A9050)
#define E00E813E6F62D6D4_B9C980207C5680CD_OFFSET UNITYSDK_OFFSET(0x27A8AB0)
#define E00E813E6F62D6D4_BF7D45F84750D814_OFFSET UNITYSDK_OFFSET(0x27A8C60)
#define E00E813E6F62D6D4_EC61F92C30598CFB_OFFSET UNITYSDK_OFFSET(0x27A8970)
#define E00E813E6F62D6D4_FAD6B06C30DE21F0_OFFSET UNITYSDK_OFFSET(0x27A9040)
#define E00E813E6F62D6D4__CTOR_OFFSET UNITYSDK_OFFSET(0x27A9090)

inline static constexpr unsigned int E00E813E6F62D6D4_TypeDefinitionIndex = 16603;

class E00E813E6F62D6D4
{
public:
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::CustomRenderPipeline::PlanarReflectionComp*>*>* F3CEBBAC7F211FBA; // 0x10
	::System::Int32 F57A01FDF51136BF; // 0x18

	::System::Void A999629F81A309DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4_A999629F81A309DD_OFFSET))(this);
	}

	::System::Boolean B180D86C62877D7E(::UnityEngine::GameObject* BC63F4052E4478D7, ::System::Boolean E62E7C97B23C7680)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4_B180D86C62877D7E_OFFSET))(this, BC63F4052E4478D7, E62E7C97B23C7680);
	}

	::System::Boolean B180D86C62877D7E_1(::System::Int32 BDB4BC647482806E, ::System::Boolean E62E7C97B23C7680)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4_B180D86C62877D7E_1_OFFSET))(this, BDB4BC647482806E, E62E7C97B23C7680);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::CustomRenderPipeline::PlanarReflectionComp*>* B9C980207C5680CD(::System::Boolean E62E7C97B23C7680)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::CustomRenderPipeline::PlanarReflectionComp*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4_B9C980207C5680CD_OFFSET))(this, E62E7C97B23C7680);
	}

	::System::Boolean B78A4EB2EEEABBB7(::UnityEngine::GameObject* BC63F4052E4478D7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4_B78A4EB2EEEABBB7_OFFSET))(this, BC63F4052E4478D7);
	}

	::System::Void FAD6B06C30DE21F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4_FAD6B06C30DE21F0_OFFSET))(this);
	}

	::System::Int32 BF7D45F84750D814(::System::Boolean E62E7C97B23C7680)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4_BF7D45F84750D814_OFFSET))(this, E62E7C97B23C7680);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4__CTOR_OFFSET))(this);
	}

	::System::Boolean EC61F92C30598CFB(::UnityEngine::GameObject* BC63F4052E4478D7, ::System::Boolean E62E7C97B23C7680)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + E00E813E6F62D6D4_EC61F92C30598CFB_OFFSET))(this, BC63F4052E4478D7, E62E7C97B23C7680);
	}
};
