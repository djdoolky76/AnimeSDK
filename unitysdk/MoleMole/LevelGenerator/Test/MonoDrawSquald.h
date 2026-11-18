#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1FF7CA30)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FF7CB20)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1FF7CC80)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1FF7CF00)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1FF7CA40)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1FF7CC90)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_START_OFFSET UNITYSDK_OFFSET(0x1FF7CE20)
#define MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF7DED0)

namespace MoleMole::LevelGenerator::Test
{
	inline static constexpr unsigned int MonoDrawSquald_TypeDefinitionIndex = 96680;

	class MonoDrawSquald : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0xF8
		::System::Single fillAmount; // 0x100
		::System::Boolean fill; // 0x104
		::System::Byte _padding0[0x3];
		::System::Int32 thickness; // 0x108
		::System::Int32 segments; // 0x10C
		::Il2CppArray<::UnityEngine::UIVertex>* MOHAJNCPDDD; // 0x110
		::Il2CppArray<::UnityEngine::Vector2>* CHPCHCGAFIN; // 0x118
		::Il2CppArray<::UnityEngine::Vector2>* CKPGOKHECCH; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD__CTOR_OFFSET))(this);
		}

		::System::Single get_FillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_FillAmount(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_SET_FILLAMOUNT_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_texture(::UnityEngine::Texture* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_SET_TEXTURE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_START_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* KKHICLCLGDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELGENERATOR_TEST_MONODRAWSQUALD_ONPOPULATEMESH_OFFSET))(this, KKHICLCLGDM);
		}
	};
}
