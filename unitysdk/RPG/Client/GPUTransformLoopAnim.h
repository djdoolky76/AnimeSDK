#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMGLILNMKDP_LineType.h"
#include "unitysdk/IKOKHPCKLAN_ERenderInstanceCollectMode.h"
#include "unitysdk/KBPPKMAJGCG_DrawModeType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PNJJDIDBMNM.h"
#include "unitysdk/UnityEngine/Bounds.h"
class FMGLILNMKDP_AdditionalTransformAnim;
class KBPPKMAJGCG_AnimatedInstance;
namespace RPG::Client { class BezierCurve; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_BAKEBEZIERCURVEDRAWMODE_OFFSET UNITYSDK_OFFSET(0xD08E860)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_CTOR_OFFSET UNITYSDK_OFFSET(0xD090350)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xD08F4E0)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xD08FD30)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_BAKETEXTURE_OFFSET UNITYSDK_OFFSET(0xD08E800)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xD08FDE0)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0xD090340)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_PEEGFEOCNLN_OFFSET UNITYSDK_OFFSET(0xD08E8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GPUTransformLoopAnim_TypeDefinitionIndex = 70322;

	class GPUTransformLoopAnim
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* AnimatedCrowd; // 0x30
		::KBPPKMAJGCG_DrawModeType DrawMode; // 0x38
		::FMGLILNMKDP_LineType Mode; // 0x3C
		::UnityEngine::Vector3 StartPos; // 0x40
		::UnityEngine::Vector3 EndPos; // 0x4C
		::RPG::Client::BezierCurve* Curve; // 0x58
		::System::Boolean FollowCurve; // 0x60
		::System::Byte _padding0[0x3];
		::System::Single Speed; // 0x64
		::UnityEngine::Vector3 GlobalRelativeTranslation; // 0x68
		::UnityEngine::Vector3 GlobalRelativeRotation; // 0x74
		::UnityEngine::Vector3 GlobalRelativeScale; // 0x80
		::System::Byte _padding1[0x4];
		::FMGLILNMKDP_AdditionalTransformAnim* AdditionalTransformAnim; // 0x90
		::System::Boolean Inited; // 0x98
		::System::Byte _padding2[0x3];
		::System::Single SpeedLog; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* get_BakeTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_BAKETEXTURE_OFFSET))(this);
		}

		::System::Void BakeBezierCurveDrawMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_BAKEBEZIERCURVEDRAWMODE_OFFSET))(this);
		}

		::KBPPKMAJGCG_AnimatedInstance* PEEGFEOCNLN(::UnityEngine::Transform* a1)
		{
			return ((::KBPPKMAJGCG_AnimatedInstance*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_PEEGFEOCNLN_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET))(this);
		}

		::PNJJDIDBMNM get_RenderBudgetData()
		{
			return ((::PNJJDIDBMNM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::IKOKHPCKLAN_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::IKOKHPCKLAN_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}

	};
}
