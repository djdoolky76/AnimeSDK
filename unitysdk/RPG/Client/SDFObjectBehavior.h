#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MeshSDFRendererMonoPlugin; }
namespace RPG::Client { class SDFObjectMonoPlugin; }

#define RPG_CLIENT_SDFOBJECTBEHAVIOR_CDLGDNPMLNL_OFFSET UNITYSDK_OFFSET(0x1C0787F0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_CNNLJJFFJPE_OFFSET UNITYSDK_OFFSET(0x1C078C40)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C079A30)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_DACKBBLIDKE_OFFSET UNITYSDK_OFFSET(0x1C0785D0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_FLIDIOKOLPO_OFFSET UNITYSDK_OFFSET(0x1C079870)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_GALOOPFPFAI_OFFSET UNITYSDK_OFFSET(0x1C0795B0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_GBMAAHFMBIG_OFFSET UNITYSDK_OFFSET(0x1C079520)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_GCBAEEAJNGH_OFFSET UNITYSDK_OFFSET(0x1C079430)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1C077CF0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_ICNPJKFCNHH_OFFSET UNITYSDK_OFFSET(0x1C078960)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_IHGMOCEOMBC_OFFSET UNITYSDK_OFFSET(0x1C077680)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_JDAJFCNCAMH_OFFSET UNITYSDK_OFFSET(0x1C0794A0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1C078900)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C0775D0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_MEHFAIIEFEM_OFFSET UNITYSDK_OFFSET(0x1C078850)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1C078130)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_MONKEIJOHKJ_OFFSET UNITYSDK_OFFSET(0x1C0790D0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x1C077D70)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_NFDMDOFGKBF_OFFSET UNITYSDK_OFFSET(0x1C0793F0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1C0778A0)
#define RPG_CLIENT_SDFOBJECTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1C078470)

namespace RPG::Client
{
	inline static constexpr unsigned int SDFObjectBehavior_TypeDefinitionIndex = 72926;

	class SDFObjectBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Int32 objectID; // 0x38
		::System::Boolean isRegistered; // 0x3C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::Client::MeshSDFRendererMonoPlugin*>* _childRenderers; // 0x40
		::UnityEngine::Bounds _worldBounds; // 0x48
		::UnityEngine::Matrix4x4 _localToWorldMatrix; // 0x60
		::UnityEngine::Matrix4x4 _worldToLocalMatrix; // 0xA0
		::UnityEngine::Vector3 _lastPosition; // 0xE0
		::UnityEngine::Quaternion _lastRotation; // 0xEC
		::UnityEngine::Vector3 _lastScale; // 0xFC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void IHGMOCEOMBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_IHGMOCEOMBC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MeshSDFRendererMonoPlugin*>* CDLGDNPMLNL()
		{
			return ((::Il2CppArray<::RPG::Client::MeshSDFRendererMonoPlugin*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_CDLGDNPMLNL_OFFSET))(this);
		}

		::RPG::Client::MeshSDFRendererMonoPlugin* MEHFAIIEFEM()
		{
			return ((::RPG::Client::MeshSDFRendererMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_MEHFAIIEFEM_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Boolean DACKBBLIDKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_DACKBBLIDKE_OFFSET))(this);
		}

		::System::Void NBJFLGNEBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_NBJFLGNEBED_OFFSET))(this);
		}

		::System::Void ICNPJKFCNHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_ICNPJKFCNHH_OFFSET))(this);
		}

		::UnityEngine::Bounds CNNLJJFFJPE(::RPG::Client::MeshSDFRendererMonoPlugin* a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::RPG::Client::MeshSDFRendererMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_CNNLJJFFJPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds MONKEIJOHKJ(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_MONKEIJOHKJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 NFDMDOFGKBF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_NFDMDOFGKBF_OFFSET))(this);
		}

		::UnityEngine::Bounds GCBAEEAJNGH()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_GCBAEEAJNGH_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 JDAJFCNCAMH()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_JDAJFCNCAMH_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GBMAAHFMBIG()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_GBMAAHFMBIG_OFFSET))(this);
		}

		::System::Boolean GALOOPFPFAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_GALOOPFPFAI_OFFSET))(this);
		}

		::System::Void FLIDIOKOLPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_FLIDIOKOLPO_OFFSET))(this);
		}

		::RPG::Client::SDFObjectMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::SDFObjectMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFOBJECTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
