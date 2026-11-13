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

#define PADOPAOBOHO_CHCNGLCLMCN_OFFSET UNITYSDK_OFFSET(0x18AD6810)
#define PADOPAOBOHO_CTOR_OFFSET UNITYSDK_OFFSET(0x18AD6880)
#define PADOPAOBOHO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x18AD5860)
#define PADOPAOBOHO_EHCKMPALNHI_OFFSET UNITYSDK_OFFSET(0x18AD5F50)
#define PADOPAOBOHO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18AD5800)
#define PADOPAOBOHO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18AD5820)
#define PADOPAOBOHO_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0x18AD67B0)
#define PADOPAOBOHO_JLIKLGDAKMH_OFFSET UNITYSDK_OFFSET(0x18AD6560)
#define PADOPAOBOHO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18AD5810)
#define PADOPAOBOHO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18AD5A20)
#define PADOPAOBOHO__ONBIND_OFFSET UNITYSDK_OFFSET(0x18AD5590)
#define PADOPAOBOHO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18AD5C30)

inline static constexpr unsigned int PADOPAOBOHO_TypeDefinitionIndex = 73359;

	class PADOPAOBOHO : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* EPDOILCCANP; // 0x60
		::RPG::Client::AnimatorButton* JOODINOFCLL; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* LKGHAOIFHMM; // 0x70
		::System::Collections::Generic::List_1<::KAIHLAFFGMC*>* ECLILPCCMLN; // 0x78
		::RPG::Client::AnimatorButton* KHPBNLJHDNN; // 0x80
		::RPG::Client::LocalizedText* FIMDEMPOELF; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* OCCNLMANFFA; // 0x90
		::MGFFCMONLJG* IGHAHBNLIJA; // 0x98
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
