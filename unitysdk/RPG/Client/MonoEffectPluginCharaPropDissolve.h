#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_AMLPLNPKBJK_OFFSET UNITYSDK_OFFSET(0xD7D31B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_BBJEAMDGHFH_OFFSET UNITYSDK_OFFSET(0xD7D2590)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_BPOBFKGGCNN_1_OFFSET UNITYSDK_OFFSET(0xD7D4D10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_BPOBFKGGCNN_OFFSET UNITYSDK_OFFSET(0xD7D3E70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_COCEDHCPDCG_1_OFFSET UNITYSDK_OFFSET(0xD7D5E50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_COCEDHCPDCG_OFFSET UNITYSDK_OFFSET(0xD7D6480)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7D6E60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_DLFLHPFKGBP_1_OFFSET UNITYSDK_OFFSET(0xD7D6B40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_DLFLHPFKGBP_OFFSET UNITYSDK_OFFSET(0xD7D6A50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_EBCLPJFPGAE_OFFSET UNITYSDK_OFFSET(0xD7D29A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_FJMNBEPEIJC_OFFSET UNITYSDK_OFFSET(0xD7D28E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_GPPFMONHJAC_1_OFFSET UNITYSDK_OFFSET(0xD7D25E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_GPPFMONHJAC_OFFSET UNITYSDK_OFFSET(0xD7D2820)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_HMELHKJGGNH_OFFSET UNITYSDK_OFFSET(0xD7D2C60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_INIT_OFFSET UNITYSDK_OFFSET(0xD7D24D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_JAEBPPPEGAA_OFFSET UNITYSDK_OFFSET(0xD7D3990)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_MMKFLDEFPNH_1_OFFSET UNITYSDK_OFFSET(0xD7D6CC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_MMKFLDEFPNH_OFFSET UNITYSDK_OFFSET(0xD7D6DC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_NHMGGLFGELI_OFFSET UNITYSDK_OFFSET(0xD7D3350)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_SETOUTLINEMATERIALLIST_OFFSET UNITYSDK_OFFSET(0xD7D2480)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7D2F20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7D26A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropDissolve_TypeDefinitionIndex = 69955;

	class MonoEffectPluginCharaPropDissolve : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_EnableDissolve; // 0x40
		::System::Boolean _EnableDissolve; // 0x41
		::System::Boolean Toggle_DissolveMap; // 0x42
		::System::Byte _padding0[0x5];
		::UnityEngine::Texture2D* _DissolveMap; // 0x48
		::System::Boolean Toggle_DissolveST; // 0x50
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector4 _DissolveST; // 0x54
		::System::Boolean Toggle_DistortionST; // 0x64
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector4 _DistortionST; // 0x68
		::System::Boolean Toggle_DissolveRate; // 0x78
		::System::Byte _padding3[0x3];
		::System::Single _DissolveRate; // 0x7C
		::System::Boolean Toggle_DissolveUV; // 0x80
		::System::Byte _padding4[0x3];
		::System::Single _DissolveUV; // 0x84
		::System::Boolean Toggle_DissolveDistortionIntensity; // 0x88
		::System::Byte _padding5[0x3];
		::System::Single _DissolveDistortionIntensity; // 0x8C
		::System::Boolean Toggle_DissolveOutlineSize1; // 0x90
		::System::Byte _padding6[0x3];
		::System::Single _DissolveOutlineSize1; // 0x94
		::System::Boolean Toggle_DissolveOutlineSize2; // 0x98
		::System::Byte _padding7[0x3];
		::System::Single _DissolveOutlineSize2; // 0x9C
		::System::Boolean Toggle_DissolveOutlineEmission; // 0xA0
		::System::Byte _padding8[0x3];
		::System::Single _DissolveOutlineEmission; // 0xA4
		::System::Boolean Toggle_DissolveMapAdd; // 0xA8
		::System::Byte _padding9[0x3];
		::System::Single _DissolveMapAdd; // 0xAC
		::System::Boolean Toggle_DissolveOutlineColor1; // 0xB0
		::System::Byte _padding10[0x3];
		::UnityEngine::Color _DissolveOutlineColor1; // 0xB4
		::System::Boolean Toggle_DissolveOutlineColor2; // 0xC4
		::System::Byte _padding11[0x3];
		::UnityEngine::Color _DissolveOutlineColor2; // 0xC8
		::System::Boolean Toggle_DissoveDirecMask; // 0xD8
		::System::Byte _padding12[0x3];
		::System::Single _DissoveDirecMask; // 0xDC
		::System::Boolean Toggle_DissolveUVSpeed; // 0xE0
		::System::Byte _padding13[0x3];
		::UnityEngine::Vector4 _DissolveUVSpeed; // 0xE4
		::System::Boolean Toggle_DissolveOutlineSmoothStep; // 0xF4
		::System::Byte _padding14[0x3];
		::UnityEngine::Vector2 _DissolveOutlineSmoothStep; // 0xF8
		::System::Boolean Toggle_DissolveMask; // 0x100
		::System::Byte _padding15[0x7];
		::UnityEngine::Texture2D* _DissolveMask; // 0x108
		::System::Boolean Toggle_DissolveMaskUVSet; // 0x110
		::System::Byte _padding16[0x3];
		::System::Single _DissolveMaskUVSet; // 0x114
		::System::Boolean Toggle_DissolveComponent; // 0x118
		::System::Byte _padding17[0x3];
		::UnityEngine::Vector4 _DissolveComponent; // 0x11C
		::System::Boolean Toggle_DissolvePosMaskOn; // 0x12C
		::System::Byte _padding18[0x3];
		::System::Single _DissolvePosMaskOn; // 0x130
		::System::Boolean Toggle_DissolvePosMaskWorldON; // 0x134
		::System::Byte _padding19[0x3];
		::System::Single _DissolvePosMaskWorldON; // 0x138
		::System::Boolean Toggle_DissolvePosMaskFilpOn; // 0x13C
		::System::Byte _padding20[0x3];
		::System::Single _DissolvePosMaskFilpOn; // 0x140
		::System::Boolean Toggle_DissolvePosMaskRootOffset; // 0x144
		::System::Byte _padding21[0x3];
		::UnityEngine::Vector3 _DissolvePosMaskRootOffset; // 0x148
		::System::Boolean Toggle_DissolvePosTarget; // 0x154
		::System::Byte _padding22[0x3];
		::UnityEngine::GameObject* _DissolvePosTarget; // 0x158
		::System::Boolean Toggle_DissolvePosRange; // 0x160
		::System::Byte _padding23[0x3];
		::System::Single _DissolvePosMaskRange; // 0x164
		::System::Boolean Toggle_UseDither; // 0x168
		::System::Boolean _UseDither; // 0x169
		::System::Boolean Toggle_DitherAlpha; // 0x16A
		::System::Byte _padding24[0x1];
		::System::Single _DitherAlpha; // 0x16C
		::System::Boolean Toggle_DitherFadeIn; // 0x170
		::System::Boolean _DitherFadeIn; // 0x171
		::System::Boolean Toggle_DissolveShadowOff; // 0x172
		::System::Byte _padding25[0x1];
		::System::Int32 _DissolveShadowOff; // 0x174
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* OLLDPFBAIGL; // 0x178
		::System::Boolean NIHAJGNDIFN; // 0x180
		::System::Byte _padding26[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* ANLLGGCBBEC; // 0x188
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* BBMPPDNPEJN; // 0x190
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* KPLOOAKGINH; // 0x198
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* NODCBCPBJGO; // 0x1A0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_CTOR_OFFSET))(this);
		}

		::System::Void SetOutlineMaterialList(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_SETOUTLINEMATERIALLIST_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Boolean a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_UNINIT_OFFSET))(this);
		}

		::System::Boolean BBJEAMDGHFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_BBJEAMDGHFH_OFFSET))(this);
		}

		::System::Void GPPFMONHJAC(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_GPPFMONHJAC_OFFSET))(this, a1, a2);
		}

		::System::Void GPPFMONHJAC_1(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_GPPFMONHJAC_1_OFFSET))(this, a1, a2);
		}

		::System::Void FJMNBEPEIJC(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_FJMNBEPEIJC_OFFSET))(this, a1, a2);
		}

		::System::Void EBCLPJFPGAE(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_EBCLPJFPGAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HMELHKJGGNH(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_HMELHKJGGNH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BPOBFKGGCNN(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_BPOBFKGGCNN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BPOBFKGGCNN_1(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_BPOBFKGGCNN_1_OFFSET))(this, a1, a2);
		}

		::System::Void COCEDHCPDCG(::UnityEngine::Material* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_COCEDHCPDCG_OFFSET))(this, a1, a2);
		}

		::System::Void COCEDHCPDCG_1(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_COCEDHCPDCG_1_OFFSET))(this, a1, a2);
		}

		::System::Void AMLPLNPKBJK(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_AMLPLNPKBJK_OFFSET))(this, a1);
		}

		::System::Void NHMGGLFGELI(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_NHMGGLFGELI_OFFSET))(this, a1, a2);
		}

		::System::Void JAEBPPPEGAA(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_JAEBPPPEGAA_OFFSET))(this, a1, a2);
		}

		::System::Void DLFLHPFKGBP(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_DLFLHPFKGBP_OFFSET))(this, a1);
		}

		::System::Void DLFLHPFKGBP_1(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_DLFLHPFKGBP_1_OFFSET))(this, a1, a2);
		}

		::System::Void MMKFLDEFPNH(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_MMKFLDEFPNH_OFFSET))(this, a1);
		}

		::System::Void MMKFLDEFPNH_1(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_MMKFLDEFPNH_1_OFFSET))(this, a1, a2);
		}

	};
}
