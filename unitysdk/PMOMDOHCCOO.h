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

#define PMOMDOHCCOO_ACJANBHIGJG_OFFSET UNITYSDK_OFFSET(0xC322BA0)
#define PMOMDOHCCOO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC323110)
#define PMOMDOHCCOO_CFNKLMMMENF_OFFSET UNITYSDK_OFFSET(0xC322F90)
#define PMOMDOHCCOO_CLNMDMGELJH_OFFSET UNITYSDK_OFFSET(0xC3229E0)
#define PMOMDOHCCOO_CTOR_OFFSET UNITYSDK_OFFSET(0xC322560)
#define PMOMDOHCCOO_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0xC323060)
#define PMOMDOHCCOO_GET_ID_OFFSET UNITYSDK_OFFSET(0xC323040)
#define PMOMDOHCCOO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC322A70)
#define PMOMDOHCCOO_HNBLGILLMPH_OFFSET UNITYSDK_OFFSET(0xC322FE0)
#define PMOMDOHCCOO_IEKANJOEMML_OFFSET UNITYSDK_OFFSET(0xC322E50)
#define PMOMDOHCCOO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC322E00)
#define PMOMDOHCCOO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC322570)
#define PMOMDOHCCOO_LKLCILJBLAJ_OFFSET UNITYSDK_OFFSET(0xC322CA0)
#define PMOMDOHCCOO_NCOAEFHENEH_OFFSET UNITYSDK_OFFSET(0xC3230B0)
#define PMOMDOHCCOO_OBHKACPGOFB_OFFSET UNITYSDK_OFFSET(0xC322D50)
#define PMOMDOHCCOO_OJHICDKLNND_OFFSET UNITYSDK_OFFSET(0xC322F50)
#define PMOMDOHCCOO_ONSELECT_OFFSET UNITYSDK_OFFSET(0xC322AF0)
#define PMOMDOHCCOO_SET_ID_OFFSET UNITYSDK_OFFSET(0xC323050)

inline static constexpr unsigned int PMOMDOHCCOO_TypeDefinitionIndex = 75587;

	class PMOMDOHCCOO : public ::System::Object
	{
	public:
		::System::Action* MPKAFEJFNKN; // 0x10
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x18
		::UnityEngine::Animator* APPGGMLEPLN; // 0x20
		::UnityEngine::Transform* GMKJFNDIBLN; // 0x28
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x30
		::UnityEngine::GameObject* GOHBMPGIIDE; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::Nullable_1<::UnityEngine::Rect> PKLIOOJEGJO; // 0x44
		::System::Byte _padding0[0xC];
		::System::Boolean FHBNNGCEPFD; // 0x58
		static ::System::Int32* StaticGet_BAJIOAFNFDJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PMOMDOHCCOO")->GetStaticField(0x15C80);
		}

		static ::System::Int32* StaticGet_NEMOBIGKIBF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PMOMDOHCCOO")->GetStaticField(0x15C84);
		}

		static ::System::Int32* StaticGet_NLOLPLEPBBP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PMOMDOHCCOO")->GetStaticField(0x15C88);
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
