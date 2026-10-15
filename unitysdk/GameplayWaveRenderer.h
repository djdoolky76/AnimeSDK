#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameplayWaveRenderer_NoiseWaveParams.h"
#include "unitysdk/GameplayWaveRenderer_WaveLayer.h"
#include "unitysdk/GameplayWaveRenderer_WaveType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define GAMEPLAYWAVERENDERER_ABPBFJAMDLP_OFFSET UNITYSDK_OFFSET(0x15B6CA70)
#define GAMEPLAYWAVERENDERER_AEMMBCAMLII_OFFSET UNITYSDK_OFFSET(0x15B6B1A0)
#define GAMEPLAYWAVERENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0x15B6D270)
#define GAMEPLAYWAVERENDERER_DBOKBKPAOFO_OFFSET UNITYSDK_OFFSET(0x15B6B3C0)
#define GAMEPLAYWAVERENDERER_DIDPEDEONNI_OFFSET UNITYSDK_OFFSET(0x15B6C1E0)
#define GAMEPLAYWAVERENDERER_DISTANCETOCURVE_OFFSET UNITYSDK_OFFSET(0x15B6C170)
#define GAMEPLAYWAVERENDERER_DJCGDCPHEIC_OFFSET UNITYSDK_OFFSET(0x15B6C060)
#define GAMEPLAYWAVERENDERER_FMNDKMLGDHC_OFFSET UNITYSDK_OFFSET(0x15B6CBA0)
#define GAMEPLAYWAVERENDERER_GBAFMBJGELF_OFFSET UNITYSDK_OFFSET(0x15B6CDB0)
#define GAMEPLAYWAVERENDERER_HBEALPOHNIH_OFFSET UNITYSDK_OFFSET(0x15B6BB80)
#define GAMEPLAYWAVERENDERER_HLFKCHIIIGM_OFFSET UNITYSDK_OFFSET(0x15B6C5A0)
#define GAMEPLAYWAVERENDERER_ISONCURVE_OFFSET UNITYSDK_OFFSET(0x15B6BCD0)
#define GAMEPLAYWAVERENDERER_JMPDIOFAPAJ_OFFSET UNITYSDK_OFFSET(0x15B6AC60)
#define GAMEPLAYWAVERENDERER_NLDLDIJHIBF_OFFSET UNITYSDK_OFFSET(0x15B6D1A0)
#define GAMEPLAYWAVERENDERER_OFGLKFGGKIC_OFFSET UNITYSDK_OFFSET(0x15B6BBC0)
#define GAMEPLAYWAVERENDERER_OLKFPABBKCA_OFFSET UNITYSDK_OFFSET(0x15B6CF30)
#define GAMEPLAYWAVERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15B6AE50)
#define GAMEPLAYWAVERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15B6AC10)
#define GAMEPLAYWAVERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15B6AA20)
#define GAMEPLAYWAVERENDERER_PKFDCKFCGLL_OFFSET UNITYSDK_OFFSET(0x15B6C0D0)
#define GAMEPLAYWAVERENDERER_PLACEATWAVECOORD_OFFSET UNITYSDK_OFFSET(0x15B6C310)
#define GAMEPLAYWAVERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15B6AEA0)
#define GAMEPLAYWAVERENDERER_WORLDTOWAVESPACE_OFFSET UNITYSDK_OFFSET(0x15B6BC30)

inline static constexpr unsigned int GameplayWaveRenderer_TypeDefinitionIndex = 47310;

	class GameplayWaveRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* material; // 0x18
		::System::Int32 segmentCount; // 0x20
		::System::Single lineLength; // 0x24
		::System::Single lineWidth; // 0x28
		::UnityEngine::Color color; // 0x2C
		::GameplayWaveRenderer_WaveType waveType; // 0x3C
		::GameplayWaveRenderer_WaveLayer layer0; // 0x40
		::GameplayWaveRenderer_WaveLayer layer1; // 0x50
		::GameplayWaveRenderer_WaveLayer layer2; // 0x60
		::GameplayWaveRenderer_NoiseWaveParams noiseWave; // 0x70
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* waveObjects; // 0x90
		::UnityEngine::ComputeShader* waveComputeShader; // 0x98
		::UnityEngine::MaterialPropertyBlock* KFMLGOMBJHG; // 0xA0
		::UnityEngine::ComputeBuffer* HKFJLIDOIJG; // 0xA8
		::UnityEngine::ComputeBuffer* LHKNICEGFFM; // 0xB0
		::UnityEngine::ComputeBuffer* LGDJKBBNDIA; // 0xB8
		::Il2CppArray<::System::Int32>* AJPDHODIJHM; // 0xC0
		::System::Int32 CCPNKHJJBEK; // 0xC8
		::System::Int32 isOnCurveSamples; // 0xCC
		// static const ::System::Object FEDCCDBGODG; // 0x0
		// static const ::System::Object CKEHCDOGPKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void JMPDIOFAPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_JMPDIOFAPAJ_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void DBOKBKPAOFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_DBOKBKPAOFO_OFFSET))(this);
		}

		::System::Void AEMMBCAMLII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_AEMMBCAMLII_OFFSET))(this);
		}

		static ::UnityEngine::Vector4 OFGLKFGGKIC(::GameplayWaveRenderer_WaveLayer a1)
		{
			return ((::UnityEngine::Vector4(*)(::GameplayWaveRenderer_WaveLayer))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_OFGLKFGGKIC_OFFSET))(a1);
		}

		::UnityEngine::Vector2 WorldToWaveSpace(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_WORLDTOWAVESPACE_OFFSET))(this, a1);
		}

		::System::Boolean IsOnCurve(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ISONCURVE_OFFSET))(this, a1, a2);
		}

		::System::Single DistanceToCurve(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_DISTANCETOCURVE_OFFSET))(this, a1);
		}

		::System::Void PlaceAtWaveCoord(::System::Int32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_PLACEATWAVECOORD_OFFSET))(this, a1, a2);
		}

		::System::Boolean DJCGDCPHEIC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_DJCGDCPHEIC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 HLFKCHIIIGM(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_HLFKCHIIIGM_OFFSET))(this, a1, a2);
		}

		::System::Single DIDPEDEONNI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_DIDPEDEONNI_OFFSET))(this, a1);
		}

		::System::Single PKFDCKFCGLL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_PKFDCKFCGLL_OFFSET))(this, a1, a2);
		}

		::System::Single ABPBFJAMDLP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ABPBFJAMDLP_OFFSET))(this, a1, a2);
		}

		::System::Void GBAFMBJGELF(::System::Single a1, ::GameplayWaveRenderer_WaveLayer a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::GameplayWaveRenderer_WaveLayer, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_GBAFMBJGELF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single FMNDKMLGDHC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_FMNDKMLGDHC_OFFSET))(this, a1, a2);
		}

		static ::System::Single NLDLDIJHIBF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_NLDLDIJHIBF_OFFSET))(a1);
		}

		static ::System::Single OLKFPABBKCA(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_OLKFPABBKCA_OFFSET))(a1);
		}

		static ::System::Single HBEALPOHNIH()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_HBEALPOHNIH_OFFSET))();
		}

	};
