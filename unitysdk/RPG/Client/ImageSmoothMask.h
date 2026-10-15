#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class ImageForSmoothMask; }
namespace RPG::Client { class MonoMaskSlider; }
namespace RPG::Client { class MonoMaskSliderDash; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_IMAGESMOOTHMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0xD33FCF0)
#define RPG_CLIENT_IMAGESMOOTHMASK_BJHBKFHPFLN_OFFSET UNITYSDK_OFFSET(0xD33FA60)
#define RPG_CLIENT_IMAGESMOOTHMASK_CTOR_OFFSET UNITYSDK_OFFSET(0xD340E10)
#define RPG_CLIENT_IMAGESMOOTHMASK_DBDILPGCIAO_OFFSET UNITYSDK_OFFSET(0xD33FDE0)
#define RPG_CLIENT_IMAGESMOOTHMASK_DCOJLAPFEJK_OFFSET UNITYSDK_OFFSET(0xD340020)
#define RPG_CLIENT_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET UNITYSDK_OFFSET(0xD33E480)
#define RPG_CLIENT_IMAGESMOOTHMASK_GGCHLFELMLJ_OFFSET UNITYSDK_OFFSET(0xD33FE70)
#define RPG_CLIENT_IMAGESMOOTHMASK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD33F520)
#define RPG_CLIENT_IMAGESMOOTHMASK_LKCENCEPAHK_OFFSET UNITYSDK_OFFSET(0xD33FBD0)
#define RPG_CLIENT_IMAGESMOOTHMASK_MAEPJLFLMHO_OFFSET UNITYSDK_OFFSET(0xD33FC20)
#define RPG_CLIENT_IMAGESMOOTHMASK_OLKEFPPGOIK_OFFSET UNITYSDK_OFFSET(0xD33F4B0)
#define RPG_CLIENT_IMAGESMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD33FD50)

namespace RPG::Client
{
	class ImageSmoothMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Shader* maskShader; // 0x18
		::UnityEngine::UI::Image* maskImage; // 0x20
		::RPG::Client::ImageForSmoothMask* JGPEHEDMCMJ; // 0x28
		::UnityEngine::Material* CEGKGKOKFOI; // 0x30
		::System::Int32 AFBCCOAHKKA; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::MonoMaskSlider* maskSlider; // 0x40
		::System::Boolean isMaskSliderDash; // 0x48
		::System::Byte _padding1[0x7];
		::RPG::Client::MonoMaskSliderDash* maskSliderDash; // 0x50
		::System::Single coverRatio; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_CTOR_OFFSET))(this);
		}

		::System::Void OLKEFPPGOIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_OLKEFPPGOIK_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void MAEPJLFLMHO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_MAEPJLFLMHO_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_ONDESTROY_OFFSET))(this);
		}

		::System::Void LKCENCEPAHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_LKCENCEPAHK_OFFSET))(this);
		}

		::System::Void BJHBKFHPFLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_BJHBKFHPFLN_OFFSET))(this);
		}

		::System::Void DBDILPGCIAO(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_DBDILPGCIAO_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GGCHLFELMLJ(::UnityEngine::Sprite* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_GGCHLFELMLJ_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::UIVertex>*>* GenerateUIQuads()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::UIVertex>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* DCOJLAPFEJK(::UnityEngine::UI::Image* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::UnityEngine::UI::Image*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_DCOJLAPFEJK_OFFSET))(a1, a2);
		}

	};
}
