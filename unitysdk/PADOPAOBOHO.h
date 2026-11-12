#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class KAIHLAFFGMC;
class MGFFCMONLJG;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define PADOPAOBOHO_CHCNGLCLMCN_OFFSET UNITYSDK_OFFSET(0xC8C8E40)
#define PADOPAOBOHO_CTOR_OFFSET UNITYSDK_OFFSET(0xC8C8EB0)
#define PADOPAOBOHO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xC8C7EA0)
#define PADOPAOBOHO_EHCKMPALNHI_OFFSET UNITYSDK_OFFSET(0xC8C8590)
#define PADOPAOBOHO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC8C7E40)
#define PADOPAOBOHO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC8C7E60)
#define PADOPAOBOHO_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0xC8C8DE0)
#define PADOPAOBOHO_JLIKLGDAKMH_OFFSET UNITYSDK_OFFSET(0xC8C8B90)
#define PADOPAOBOHO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC8C7E50)
#define PADOPAOBOHO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC8C8060)
#define PADOPAOBOHO__ONBIND_OFFSET UNITYSDK_OFFSET(0xC8C7BD0)
#define PADOPAOBOHO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC8C8260)

inline static constexpr unsigned int PADOPAOBOHO_TypeDefinitionIndex = 73360;

	class PADOPAOBOHO : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::AnimatorButton* KHPBNLJHDNN; // 0x60
		::MGFFCMONLJG* IGHAHBNLIJA; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* LKGHAOIFHMM; // 0x70
		::RPG::Client::AnimatorButton* JOODINOFCLL; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* OCCNLMANFFA; // 0x80
		::System::Collections::Generic::List_1<::KAIHLAFFGMC*>* ECLILPCCMLN; // 0x88
		::RPG::Client::LocalizedText* FIMDEMPOELF; // 0x90
		::RPG::Client::PrefabLoadMeta* EPDOILCCANP; // 0x98
		::System::Int32 _Index_k__BackingField; // 0xA0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* LIPNELAINCN; // 0x0
		// static const ::System::String* GMPJBGAEHJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PADOPAOBOHO_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO_GET_TRANS_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PADOPAOBOHO_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void CHCNGLCLMCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PADOPAOBOHO_CHCNGLCLMCN_OFFSET))(this, a1);
		}

		::System::Void EHCKMPALNHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO_EHCKMPALNHI_OFFSET))(this);
		}

		::System::Void JLIKLGDAKMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOPAOBOHO_JLIKLGDAKMH_OFFSET))(this);
		}

	};
