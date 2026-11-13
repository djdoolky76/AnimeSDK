#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class KKCDPIJCADB;
class MGFFCMONLJG;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define AFPCDLDMKOI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18DC8F30)
#define AFPCDLDMKOI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18DC9020)
#define AFPCDLDMKOI_BOPFKBCADKK_OFFSET UNITYSDK_OFFSET(0x18DC8890)
#define AFPCDLDMKOI_CHCNGLCLMCN_OFFSET UNITYSDK_OFFSET(0x18DC88F0)
#define AFPCDLDMKOI_CONCIMLFDDN_OFFSET UNITYSDK_OFFSET(0x18DC8A80)
#define AFPCDLDMKOI_CTOR_OFFSET UNITYSDK_OFFSET(0x18DC90F0)
#define AFPCDLDMKOI_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x18DC7A30)
#define AFPCDLDMKOI_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18DC79D0)
#define AFPCDLDMKOI_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18DC79F0)
#define AFPCDLDMKOI_KCMMFFGLFOM_OFFSET UNITYSDK_OFFSET(0x18DC8170)
#define AFPCDLDMKOI_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x18DC8690)
#define AFPCDLDMKOI_LMLLFHNOLPC_OFFSET UNITYSDK_OFFSET(0x18DC8DF0)
#define AFPCDLDMKOI_MLBLJINNNBM_OFFSET UNITYSDK_OFFSET(0x18DC8960)
#define AFPCDLDMKOI_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18DC79E0)
#define AFPCDLDMKOI__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18DC7E40)
#define AFPCDLDMKOI__ONBIND_OFFSET UNITYSDK_OFFSET(0x18DC7400)
#define AFPCDLDMKOI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18DC80F0)

inline static constexpr unsigned int AFPCDLDMKOI_TypeDefinitionIndex = 73360;

	class AFPCDLDMKOI : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::UnityEngine::UI::Image*>* HFOPBPJKDAB; // 0x60
		::RPG::Client::AnimatorButton* JOODINOFCLL; // 0x68
		::KKCDPIJCADB* FKNBPKADNPA; // 0x70
		::Il2CppArray<::RPG::Client::UIStateCtrl*>* MEFMPOBILBM; // 0x78
		::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x80
		::MGFFCMONLJG* IGHAHBNLIJA; // 0x88
		::UnityEngine::UI::Slider* LMLEDHGLPLN; // 0x90
		::Il2CppArray<::UnityEngine::RectTransform*>* DJOPAHMNEEL; // 0x98
		::Il2CppArray<::RPG::Client::AnimatorButton*>* IPHMEPEMCAC; // 0xA0
		::System::Int32 _Index_k__BackingField; // 0xA8
		::System::UInt32 JFMBJONOGLA; // 0xAC
		::System::Boolean JCAIOHNIFMK; // 0xB0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object KNENKDIHOAP; // 0x0
		// static const ::System::String* CIFHCIOFBNK; // 0x0
		// static const ::System::String* CAABCMOBJDF; // 0x0
		// static const ::System::String* LIFKMDIJBLH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_GET_TRANS_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void BOPFKBCADKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_BOPFKBCADKK_OFFSET))(this, a1);
		}

		::System::Void CHCNGLCLMCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_CHCNGLCLMCN_OFFSET))(this, a1);
		}

		::System::Void KCMMFFGLFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_KCMMFFGLFOM_OFFSET))(this);
		}

		::System::Void MLBLJINNNBM(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_MLBLJINNNBM_OFFSET))(this, a1, a2);
		}

		::System::Void LEEEAMMHPFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_LEEEAMMHPFM_OFFSET))(this, a1);
		}

		::System::Void CONCIMLFDDN(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_CONCIMLFDDN_OFFSET))(this, a1, a2);
		}

		::System::Void LMLLFHNOLPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_LMLLFHNOLPC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCDLDMKOI_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
