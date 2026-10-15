#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_TEXTICONS_BKLBALDEGHK_OFFSET UNITYSDK_OFFSET(0xE212BF0)
#define RPG_CLIENT_TEXTICONS_CFGCILKDEEB_OFFSET UNITYSDK_OFFSET(0xE211E50)
#define RPG_CLIENT_TEXTICONS_CLEAR_OFFSET UNITYSDK_OFFSET(0xE20E7E0)
#define RPG_CLIENT_TEXTICONS_CPGODLFKMEN_OFFSET UNITYSDK_OFFSET(0xE20C170)
#define RPG_CLIENT_TEXTICONS_CTOR_OFFSET UNITYSDK_OFFSET(0xE212DE0)
#define RPG_CLIENT_TEXTICONS_CULL_OFFSET UNITYSDK_OFFSET(0xE20E720)
#define RPG_CLIENT_TEXTICONS_FFKJOPELDPP_OFFSET UNITYSDK_OFFSET(0xE20EE80)
#define RPG_CLIENT_TEXTICONS_GET_ICONS_OFFSET UNITYSDK_OFFSET(0xE20BDE0)
#define RPG_CLIENT_TEXTICONS_GFOGDDEMDKB_OFFSET UNITYSDK_OFFSET(0xE20CE10)
#define RPG_CLIENT_TEXTICONS_GJOFAHEIHFK_OFFSET UNITYSDK_OFFSET(0xE2103F0)
#define RPG_CLIENT_TEXTICONS_JENFGEEHAOF_OFFSET UNITYSDK_OFFSET(0xE20E0E0)
#define RPG_CLIENT_TEXTICONS_OMFCJIEMEDK_OFFSET UNITYSDK_OFFSET(0xE20F210)
#define RPG_CLIENT_TEXTICONS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE20C410)
#define RPG_CLIENT_TEXTICONS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE20BE70)
#define RPG_CLIENT_TEXTICONS_PHHIBFMOKIM_OFFSET UNITYSDK_OFFSET(0xE210D10)
#define RPG_CLIENT_TEXTICONS_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xE20E780)
#define RPG_CLIENT_TEXTICONS_SET_ICONS_OFFSET UNITYSDK_OFFSET(0xE20BE20)
#define RPG_CLIENT_TEXTICONS_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xE20D000)
#define RPG_CLIENT_TEXTICONS_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xE20E4D0)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_0_OFFSET UNITYSDK_OFFSET(0xE212E20)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_1_OFFSET UNITYSDK_OFFSET(0xE212E70)

namespace RPG::Client
{
	class TextIcons : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Sprite*>* m_Icons; // 0x18
		::UnityEngine::UI::Text* HAPMAPAJMOC; // 0x20
		::Il2CppArray<::UnityEngine::Vector4>* GGABAIOMHPE; // 0x28
		::UnityEngine::Texture* AJLNAFOHFJP; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* AMGJPHOPMOM; // 0x38
		::Il2CppArray<::System::Object*>* CHNBCOANIJA; // 0x40
		::Il2CppArray<::System::Single>* DIDCHGMBHLI; // 0x48
		::UnityEngine::Rect CAOMNOEAJCC; // 0x50
		::UnityEngine::Material* ELKGDBPFCMI; // 0x60
		::System::Int32 OMAOFBNHCFL; // 0x68
		::System::Int32 NNIFBDFMHKI; // 0x6C
		::UnityEngine::Experimental::Rendering::GraphicsFormat DIEDAENPFLG; // 0x70
		static ::UnityEngine::Material** StaticGet_NJPALBPLPIJ()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("RPG.Client", "TextIcons")->GetStaticField(0x15080);
		}

		static ::UnityEngine::Mesh** StaticGet_MJJPAPGBALA()
		{
			return (::UnityEngine::Mesh**)UnitySDK::FromName("RPG.Client", "TextIcons")->GetStaticField(0x15088);
		}

		static ::UnityEngine::Texture** StaticGet_CPOFKPJOCEF()
		{
			return (::UnityEngine::Texture**)UnitySDK::FromName("RPG.Client", "TextIcons")->GetStaticField(0x15090);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>** StaticGet_NMGAADNPIOG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>**)UnitySDK::FromName("RPG.Client", "TextIcons")->GetStaticField(0x15098);
		}

		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet_EKJGCDIEEHB()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)UnitySDK::FromName("RPG.Client", "TextIcons")->GetStaticField(0x150A0);
		}

		static ::System::Int32* StaticGet_AOMGOGBFECA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TextIcons")->GetStaticField(0x50C0);
		}

		// static const ::System::Object LHCKIKNCDPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Sprite*>* get_icons()
		{
			return ((::Il2CppArray<::UnityEngine::Sprite*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_GET_ICONS_OFFSET))(this);
		}

		::System::Void set_icons(::Il2CppArray<::UnityEngine::Sprite*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_SET_ICONS_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void UpdateMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_UPDATEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void Cull(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CULL_OFFSET))(this, a1);
		}

		::System::Void SetClipRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_SETCLIPRECT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CLEAR_OFFSET))(this);
		}

		::System::Void JENFGEEHAOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_JENFGEEHAOF_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* FFKJOPELDPP()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_FFKJOPELDPP_OFFSET))(this);
		}

		::System::Void OMFCJIEMEDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_OMFCJIEMEDK_OFFSET))(this);
		}

		::System::Void CFGCILKDEEB(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CFGCILKDEEB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PHHIBFMOKIM(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_PHHIBFMOKIM_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void CPGODLFKMEN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CPGODLFKMEN_OFFSET))();
		}

		static ::System::Void GFOGDDEMDKB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_GFOGDDEMDKB_OFFSET))();
		}

		static ::System::Void BKLBALDEGHK(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_BKLBALDEGHK_OFFSET))(a1);
		}

		static ::System::Boolean GJOFAHEIHFK(::System::Object* a1, ::Il2CppArray<::UnityEngine::Sprite*>* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_GJOFAHEIHFK_OFFSET))(a1, a2);
		}

		::System::Boolean _BuildIconAtlas_b__13_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildIconAtlas_b__13_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_1_OFFSET))(this, a1);
		}

	};
}
