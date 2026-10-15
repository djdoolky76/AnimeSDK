#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMGLILNMKDP_LineType.h"
#include "unitysdk/IKOKHPCKLAN_ERenderInstanceCollectMode.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PNJJDIDBMNM.h"
#include "unitysdk/UnityEngine/Bounds.h"
class FMGLILNMKDP_AdditionalTransformAnim;
class KLPGPGDOCCA_AnimatedInstance;
namespace RPG::Client { class BezierCurve; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_CTOR_OFFSET UNITYSDK_OFFSET(0xD08E720)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD08E6D0)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xD08D860)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xD08E0B0)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xD08E160)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0xD08E6C0)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_PEEGFEOCNLN_OFFSET UNITYSDK_OFFSET(0xD08CC30)

namespace RPG::Client
{
	class GPUParticleTransformLoopAnim
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* AnimatedCrowd; // 0x30
		::FMGLILNMKDP_LineType Mode; // 0x38
		::UnityEngine::Vector3 StartPos; // 0x3C
		::UnityEngine::Vector3 EndPos; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::BezierCurve* Curve; // 0x58
		::System::Boolean FollowCurve; // 0x60
		::System::Byte _padding1[0x3];
		::System::Single Speed; // 0x64
		::UnityEngine::Vector3 GlobalRelativeTranslation; // 0x68
		::UnityEngine::Vector3 GlobalRelativeRotation; // 0x74
		::UnityEngine::Vector3 GlobalRelativeScale; // 0x80
		::System::Byte _padding2[0x4];
		::FMGLILNMKDP_AdditionalTransformAnim* AdditionalTransformAnim; // 0x90
		::System::Boolean Inited; // 0x98
		::System::Byte _padding3[0x3];
		::System::Single SpeedLog; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_CTOR_OFFSET))(this);
		}

		::KLPGPGDOCCA_AnimatedInstance* PEEGFEOCNLN(::UnityEngine::Transform* a1)
		{
			return ((::KLPGPGDOCCA_AnimatedInstance*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_PEEGFEOCNLN_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET))(this);
		}

		::PNJJDIDBMNM get_RenderBudgetData()
		{
			return ((::PNJJDIDBMNM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::IKOKHPCKLAN_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::IKOKHPCKLAN_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
