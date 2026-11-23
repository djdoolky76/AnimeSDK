#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::CustomRenderPipeline { class LensFlareElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define FD4DB778617E0DB1_EE8C76B731BE55CE_OFFSET UNITYSDK_OFFSET(0x2770D80)
#define FD4DB778617E0DB1__CTOR_OFFSET UNITYSDK_OFFSET(0x2770DB0)

inline static constexpr unsigned int FD4DB778617E0DB1_TypeDefinitionIndex = 16510;

class FD4DB778617E0DB1 : public ::System::Object
{
public:
	::System::Int32 E9161AE6B7C1B8D7; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::GameObject* E63E0F25F251B753; // 0x18
	::UnityEngine::Vector3 FFF299FAC6915F64; // 0x20
	::System::Single A5B3AF877A8DE247; // 0x2C
	::System::Single AD3C8E800A3DAF7E; // 0x30
	::System::Single F4E2B11D3A4832BB; // 0x34
	::UnityEngine::E46B881AA2636190 A10EF4162BB31536; // 0x38
	::System::Single B581485DCAF52E1E; // 0x48
	::System::Single B913A387368D02D7; // 0x4C
	::System::Single B4C283B2C7F9AECF; // 0x50
	::System::Single E722E3726EB5E1A1; // 0x54
	::System::Single EBB04634B9577A9C; // 0x58
	::System::Single E1C3AC9331952200; // 0x5C
	::UnityEngine::Texture2D* BA77B83292411426; // 0x60
	::System::Single E0BD4EE5C777AED4; // 0x68
	::System::Single F7C227071BCA27C0; // 0x6C
	::System::Single A8360BD107407743; // 0x70
	::System::Single A2F43B435635605F; // 0x74
	::System::Collections::Generic::List_1<::ABC::CustomRenderPipeline::LensFlareElement*>* A219A77440DBEEA6; // 0x78
	::UnityEngine::RenderTexture* FEF5B1CCD180F869; // 0x80

	::System::Int32 EE8C76B731BE55CE(::FD4DB778617E0DB1* BEEE7A5A60941632)
	{
		return ((::System::Int32(*)(::PVOID, ::FD4DB778617E0DB1*))((::PBYTE)hIl2Cpp + FD4DB778617E0DB1_EE8C76B731BE55CE_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD4DB778617E0DB1__CTOR_OFFSET))(this);
	}
};
