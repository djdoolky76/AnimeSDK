#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define LABKNEEHINJ_CBKJNLLHBGI_OFFSET UNITYSDK_OFFSET(0xBE68F40)
#define LABKNEEHINJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE690D0)
#define LABKNEEHINJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBE68BE0)
#define LABKNEEHINJ_GET_KEY_OFFSET UNITYSDK_OFFSET(0xBE68BA0)
#define LABKNEEHINJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBE68AF0)
#define LABKNEEHINJ_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBE685E0)
#define LABKNEEHINJ_JBNFDBCFAIM_OFFSET UNITYSDK_OFFSET(0xBE68E10)
#define LABKNEEHINJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE686A0)
#define LABKNEEHINJ_NCPFGEDLDEM_OFFSET UNITYSDK_OFFSET(0xBE68FC0)
#define LABKNEEHINJ___RETRIVEDEPTHSAMPLE_B__8_0_OFFSET UNITYSDK_OFFSET(0xBE690E0)

inline static constexpr unsigned int LABKNEEHINJ_TypeDefinitionIndex = 64511;

	class LABKNEEHINJ : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector4>* NKKKCPIDHGN; // 0x10
		::UnityEngine::RenderTexture* HGADCGCBJCE; // 0x18
		::UnityEngine::Material* CGGJOHOBPIO; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* JMCJLDLFAHN; // 0x28
		::Il2CppArray<::System::Single>* GAFBBCEGJLJ; // 0x30
		::System::Int32 EKBKMHAAKDN; // 0x38
		::System::Int32 DMIKJDCOCNI; // 0x3C
		static ::UnityEngine::Mesh** StaticGet_DKDMHCDJNFJ()
		{
			return (::UnityEngine::Mesh**)UnitySDK::FromName("", "LABKNEEHINJ")->GetStaticField(0x625B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABKNEEHINJ_CTOR_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABKNEEHINJ_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LABKNEEHINJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABKNEEHINJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LABKNEEHINJ_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + LABKNEEHINJ_EXECUTE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Vector4>* JBNFDBCFAIM()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABKNEEHINJ_JBNFDBCFAIM_OFFSET))(this);
		}

		::System::Single CBKJNLLHBGI(::UnityEngine::Vector4 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LABKNEEHINJ_CBKJNLLHBGI_OFFSET))(this, a1);
		}

		::System::Void NCPFGEDLDEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABKNEEHINJ_NCPFGEDLDEM_OFFSET))(this);
		}

		::System::Void __RetriveDepthSample_b__8_0(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + LABKNEEHINJ___RETRIVEDEPTHSAMPLE_B__8_0_OFFSET))(this, a1);
		}

	};
