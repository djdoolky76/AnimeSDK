#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class UIMusicVisualization_MusicMixingMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_ADHKJGGLPEL_OFFSET UNITYSDK_OFFSET(0xE3CCD30)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE3CE1F0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE3CD020)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE3CE130)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xE3CD140)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET_MATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0xE3CDCB0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET_ORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xE3CDF30)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE3CDEB0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_HABJKLPECBB_OFFSET UNITYSDK_OFFSET(0xE3CD9D0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_JLEDELCPIGF_OFFSET UNITYSDK_OFFSET(0xE3CD1A0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE3CD080)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE3CC3E0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE3CCCE0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_NKGFOCANBCE_OFFSET UNITYSDK_OFFSET(0xE3CC490)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE3CD0E0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE3CC440)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMusicVisualization_MusicMixingBehavior_TypeDefinitionIndex = 70830;

	class UIMusicVisualization_MusicMixingBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Vector4 _LastMusicMixingChannel; // 0x38
		::UnityEngine::Vector4 _CurrentMusicMixingChannel; // 0x48
		::UnityEngine::Vector4 _NextMusicMixingChannel; // 0x58
		::System::Single _MusicMixingTransitionTime; // 0x68
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Material*>* _OriginMaterials; // 0x70
		::Il2CppArray<::UnityEngine::Material*>* _MaterialInstances; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* _OriginMaterialBarWidth; // 0x80
		::System::Collections::Generic::List_1<::System::Single>* _OriginMaterialBarInterval; // 0x88
		static ::System::Int32* StaticGet__MusicMixingChannelShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UIMusicVisualization_MusicMixingBehavior")->GetStaticField(0xC980);
		}

		static ::System::Int32* StaticGet__ChunkEdgeShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UIMusicVisualization_MusicMixingBehavior")->GetStaticField(0xC984);
		}

		static ::System::Int32* StaticGet__BarWidthShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UIMusicVisualization_MusicMixingBehavior")->GetStaticField(0xC988);
		}

		static ::System::Int32* StaticGet__BarIntervalShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UIMusicVisualization_MusicMixingBehavior")->GetStaticField(0xC98C);
		}

		static ::System::Int32* StaticGet__UVNoiseTexStShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UIMusicVisualization_MusicMixingBehavior")->GetStaticField(0xC990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void HABJKLPECBB(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_HABJKLPECBB_OFFSET))(this, a1);
		}

		::System::Void NKGFOCANBCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_NKGFOCANBCE_OFFSET))(this);
		}

		::System::Void ADHKJGGLPEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_ADHKJGGLPEL_OFFSET))(this);
		}

		::System::Void JLEDELCPIGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_JLEDELCPIGF_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_OriginMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET_ORIGINMATERIALS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_MaterialInstances()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET_MATERIALINSTANCES_OFFSET))(this);
		}

		::RPG::Client::UIMusicVisualization_MusicMixingMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::UIMusicVisualization_MusicMixingMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
