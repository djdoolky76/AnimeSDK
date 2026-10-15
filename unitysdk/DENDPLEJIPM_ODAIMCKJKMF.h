#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define DENDPLEJIPM_ODAIMCKJKMF_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xE51E8E0)
#define DENDPLEJIPM_ODAIMCKJKMF_CPLIEDLFHJH_OFFSET UNITYSDK_OFFSET(0xE51DBA0)
#define DENDPLEJIPM_ODAIMCKJKMF_CTOR_OFFSET UNITYSDK_OFFSET(0xE51DE80)
#define DENDPLEJIPM_ODAIMCKJKMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE51F140)
#define DENDPLEJIPM_ODAIMCKJKMF_DLFKFJOLDCF_OFFSET UNITYSDK_OFFSET(0xE51E0A0)
#define DENDPLEJIPM_ODAIMCKJKMF_EKKPLPGGBNK_OFFSET UNITYSDK_OFFSET(0xE51D270)
#define DENDPLEJIPM_ODAIMCKJKMF_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE51F030)
#define DENDPLEJIPM_ODAIMCKJKMF_GBMKHJOBNPH_OFFSET UNITYSDK_OFFSET(0xE51F190)
#define DENDPLEJIPM_ODAIMCKJKMF_NKPBILFIMCM_OFFSET UNITYSDK_OFFSET(0xE51E760)
#define DENDPLEJIPM_ODAIMCKJKMF_PLICGIHDFFC_OFFSET UNITYSDK_OFFSET(0xE51E260)

	class DENDPLEJIPM_ODAIMCKJKMF : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* NIFNLNOLAJC; // 0x10
		::Il2CppArray<::UnityEngine::Vector2>* EDCJKBFNJBP; // 0x18
		::System::Action* GOJNFHCLBAF; // 0x20
		::System::Collections::Generic::List_1<::System::Action*>* BHHJMAOIAOM; // 0x28
		::UnityEngine::RenderTexture* DJMPAIFPBCM; // 0x30
		::UnityEngine::ComputeShader* MLNAIBGJAGD; // 0x38
		::Il2CppArray<::UnityEngine::Vector4>* ALANEOALIFK; // 0x40
		::UnityEngine::Texture2D* BECBMGHFMNA; // 0x48
		::UnityEngine::ComputeBuffer* CIDOIOPKOKP; // 0x50
		::Il2CppArray<::System::Action*>* BKPAKEADKOM; // 0x58
		::System::Int32 PIHPNGEIJBO; // 0x60
		::System::Boolean POLPDEKOOCM; // 0x64
		::System::Boolean JAGIDLCEAPD; // 0x65
		// static const ::System::Object GDBIEIAMPLF; // 0x0
		// static const ::System::String* NJCFPPOEGDF; // 0x0
		// static const ::System::String* OICMFANFFGJ; // 0x0
		// static const ::System::String* DDFLCOFHDCB; // 0x0
		// static const ::System::String* BPBOEOFALEK; // 0x0
		// static const ::System::Object CCOGJDIIJIC; // 0x0
		// static const ::System::Object OLGKIMHNGDI; // 0x0
		::System::Void _ctor(::UnityEngine::Texture2D* a1, ::UnityEngine::ComputeShader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_FINALIZE_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_BJMNKLGEMPM_OFFSET))(this, a1);
		}

		::System::Void CPLIEDLFHJH(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_CPLIEDLFHJH_OFFSET))(this, a1, a2);
		}

		::System::Void EKKPLPGGBNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_EKKPLPGGBNK_OFFSET))(this);
		}

		::System::Int32 NKPBILFIMCM(::UnityEngine::Vector2 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_NKPBILFIMCM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 PLICGIHDFFC(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_PLICGIHDFFC_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_DISPOSE_OFFSET))(this);
		}

		::System::Void GBMKHJOBNPH(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_GBMKHJOBNPH_OFFSET))(this, a1);
		}

		::System::Void DLFKFJOLDCF(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ODAIMCKJKMF_DLFKFJOLDCF_OFFSET))(this, a1);
		}

	};
