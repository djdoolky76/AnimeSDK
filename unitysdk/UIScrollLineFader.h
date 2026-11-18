#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class MaskableGraphic; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class UIRectMask2DExt; }

#define UISCROLLLINEFADER_CALCLIPRECT_OFFSET UNITYSDK_OFFSET(0x194CB570)
#define UISCROLLLINEFADER_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x194CB2F0)
#define UISCROLLLINEFADER_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x194CB830)
#define UISCROLLLINEFADER_SETLINECOLOR_OFFSET UNITYSDK_OFFSET(0x194CBFC0)
#define UISCROLLLINEFADER_SET_OFFSET UNITYSDK_OFFSET(0x194CAFD0)
#define UISCROLLLINEFADER_START_OFFSET UNITYSDK_OFFSET(0x194CAB80)
#define UISCROLLLINEFADER_UPDATE_OFFSET UNITYSDK_OFFSET(0x194CB720)
#define UISCROLLLINEFADER__CTOR_OFFSET UNITYSDK_OFFSET(0x194CC270)

inline static constexpr unsigned int UIScrollLineFader_TypeDefinitionIndex = 74713;

class UIScrollLineFader : public ::UnityEngine::UI::BaseMeshEffect
{
public:
	::UnityEngine::RectTransform* CanvasTrans; // 0x20
	::UnityEngine::UI::Extension::UIRectMask2DExt* parentRectMask; // 0x28
	::UnityEngine::UI::MaskableGraphic* _graphic; // 0x30
	::System::Boolean isCanvasSizeSet; // 0x38
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector2 _canvasCenterPos; // 0x3C
	::UnityEngine::Vector2 _canvasScale; // 0x44
	::UnityEngine::Rect clipRect; // 0x4C
	::System::Byte _padding1[0x4];
	::UnityEngine::Transform* clipTrans; // 0x60
	::UnityEngine::Vector2 clipV2; // 0x68
	::UnityEngine::Vector2 _clipMin; // 0x70
	::UnityEngine::Vector2 _clipMax; // 0x78
	::UnityEngine::Vector2 _softnessVector; // 0x80
	::UnityEngine::Vector2 PixelSize; // 0x88
	::System::Boolean isDebug; // 0x90
	::System::Boolean isStarted; // 0x91
	::System::Byte _padding2[0x2];
	::System::Single halfLineHeight; // 0x94
	::UnityEngine::Vector2 DebugDelta; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLLINEFADER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLLINEFADER_START_OFFSET))(this);
	}

	::System::Void EnableUIVertexColorCalc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLLINEFADER_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
	}

	::System::Void Set(::System::Boolean byGUI, ::System::Boolean force)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UISCROLLLINEFADER_SET_OFFSET))(this, byGUI, force);
	}

	::System::Void CalClipRect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLLINEFADER_CALCLIPRECT_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLLINEFADER_UPDATE_OFFSET))(this);
	}

	::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UISCROLLLINEFADER_MODIFYMESH_OFFSET))(this, vh);
	}

	::System::Void SetLineColor(::System::Int32 i, ::UnityEngine::UIVertex vert, ::UnityEngine::UI::VertexHelper* vh, ::System::Single lineA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UIVertex, ::UnityEngine::UI::VertexHelper*, ::System::Single))((::PBYTE)hIl2Cpp + UISCROLLLINEFADER_SETLINECOLOR_OFFSET))(this, i, vert, vh, lineA);
	}
};
