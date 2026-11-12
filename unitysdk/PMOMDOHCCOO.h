#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define PMOMDOHCCOO_ACJANBHIGJG_OFFSET UNITYSDK_OFFSET(0xCC59870)
#define PMOMDOHCCOO_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC59DE0)
#define PMOMDOHCCOO_CFNKLMMMENF_OFFSET UNITYSDK_OFFSET(0xCC59C60)
#define PMOMDOHCCOO_CLNMDMGELJH_OFFSET UNITYSDK_OFFSET(0xCC59670)
#define PMOMDOHCCOO_CTOR_OFFSET UNITYSDK_OFFSET(0xCC59260)
#define PMOMDOHCCOO_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0xCC59D30)
#define PMOMDOHCCOO_GET_ID_OFFSET UNITYSDK_OFFSET(0xCC59D10)
#define PMOMDOHCCOO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCC596E0)
#define PMOMDOHCCOO_HNBLGILLMPH_OFFSET UNITYSDK_OFFSET(0xCC59CB0)
#define PMOMDOHCCOO_IEKANJOEMML_OFFSET UNITYSDK_OFFSET(0xCC59B20)
#define PMOMDOHCCOO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCC59AD0)
#define PMOMDOHCCOO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCC59270)
#define PMOMDOHCCOO_LKLCILJBLAJ_OFFSET UNITYSDK_OFFSET(0xCC59970)
#define PMOMDOHCCOO_NCOAEFHENEH_OFFSET UNITYSDK_OFFSET(0xCC59D80)
#define PMOMDOHCCOO_OBHKACPGOFB_OFFSET UNITYSDK_OFFSET(0xCC59A20)
#define PMOMDOHCCOO_OJHICDKLNND_OFFSET UNITYSDK_OFFSET(0xCC59C20)
#define PMOMDOHCCOO_ONSELECT_OFFSET UNITYSDK_OFFSET(0xCC59760)
#define PMOMDOHCCOO_SET_ID_OFFSET UNITYSDK_OFFSET(0xCC59D20)

inline static constexpr unsigned int PMOMDOHCCOO_TypeDefinitionIndex = 77915;

	class PMOMDOHCCOO : public ::System::Object
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x10
		::System::Action* MPKAFEJFNKN; // 0x18
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x20
		::UnityEngine::GameObject* GOHBMPGIIDE; // 0x28
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x30
		::UnityEngine::Transform* GMKJFNDIBLN; // 0x38
		::System::Nullable_1<::UnityEngine::Rect> PKLIOOJEGJO; // 0x40
		::System::Byte _padding0[0xC];
		::System::UInt32 _ID_k__BackingField; // 0x54
		::System::Boolean FHBNNGCEPFD; // 0x58
		static ::System::Int32* StaticGet_NEMOBIGKIBF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PMOMDOHCCOO")->GetStaticField(0x16320);
		}

		static ::System::Int32* StaticGet_NLOLPLEPBBP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PMOMDOHCCOO")->GetStaticField(0x16324);
		}

		static ::System::Int32* StaticGet_BAJIOAFNFDJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PMOMDOHCCOO")->GetStaticField(0x16328);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMOMDOHCCOO_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_ONSELECT_OFFSET))(this);
		}

		::System::Void ACJANBHIGJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_ACJANBHIGJG_OFFSET))(this);
		}

		::System::Void LKLCILJBLAJ(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_LKLCILJBLAJ_OFFSET))(this, a1);
		}

		::System::Void OBHKACPGOFB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_OBHKACPGOFB_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean IEKANJOEMML(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_IEKANJOEMML_OFFSET))(this, a1);
		}

		::System::Void OJHICDKLNND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_OJHICDKLNND_OFFSET))(this);
		}

		::System::Void CFNKLMMMENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_CFNKLMMMENF_OFFSET))(this);
		}

		::System::Void CLNMDMGELJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_CLNMDMGELJH_OFFSET))(this, a1);
		}

		::System::Void HNBLGILLMPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_HNBLGILLMPH_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_SET_ID_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* EBHNJMPEILL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_EBHNJMPEILL_OFFSET))(this);
		}

		::System::Boolean NCOAEFHENEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMDOHCCOO_NCOAEFHENEH_OFFSET))(this);
		}

	};
