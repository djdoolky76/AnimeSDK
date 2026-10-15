#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GJDPEGIFLGB;
class NMMNJLDKJMD_ABBHBIKKFIG;
class NMMNJLDKJMD_BELFBEJOIFB;
class NPPMHDBABDI;
namespace RPG::Client::ActivityHipplen { class HipplenGameBoard; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NMMNJLDKJMD_AEAOGMFOCIG_OFFSET UNITYSDK_OFFSET(0xBC8E9E0)
#define NMMNJLDKJMD_AEODGOJKEMK_OFFSET UNITYSDK_OFFSET(0xBC8DD70)
#define NMMNJLDKJMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8F210)
#define NMMNJLDKJMD_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0xBC8EEF0)
#define NMMNJLDKJMD_DEGOBFNCBII_OFFSET UNITYSDK_OFFSET(0xBC8F110)
#define NMMNJLDKJMD_DNOPLMGEEJE_OFFSET UNITYSDK_OFFSET(0xBC8EF50)
#define NMMNJLDKJMD_FEPPMNBMKCM_OFFSET UNITYSDK_OFFSET(0xBC8F020)
#define NMMNJLDKJMD_FJAACDOELNC_OFFSET UNITYSDK_OFFSET(0xBC8F190)
#define NMMNJLDKJMD_GET_HIPPLENINSTANCE_OFFSET UNITYSDK_OFFSET(0xBC8F1F0)
#define NMMNJLDKJMD_GLCGGAOJJFC_OFFSET UNITYSDK_OFFSET(0xBC8EFB0)
#define NMMNJLDKJMD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBC8DC10)
#define NMMNJLDKJMD_HOJCGIDIECE_OFFSET UNITYSDK_OFFSET(0xBC8E420)
#define NMMNJLDKJMD_IMAJLPIFLNN_OFFSET UNITYSDK_OFFSET(0xBC8EE90)
#define NMMNJLDKJMD_IMGLLNBDIDD_OFFSET UNITYSDK_OFFSET(0xBC8EB30)
#define NMMNJLDKJMD_JHAIMKAGIBP_OFFSET UNITYSDK_OFFSET(0xBC8E3C0)
#define NMMNJLDKJMD_JKOJDDMPDLK_OFFSET UNITYSDK_OFFSET(0xBC8DEC0)
#define NMMNJLDKJMD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC8DB40)
#define NMMNJLDKJMD_LCNCEDADFFD_OFFSET UNITYSDK_OFFSET(0xBC8EE40)
#define NMMNJLDKJMD_NLLJGBOANKJ_OFFSET UNITYSDK_OFFSET(0xBC8DF30)
#define NMMNJLDKJMD_PJDMFCOOCMO_1_OFFSET UNITYSDK_OFFSET(0xBC8E7D0)
#define NMMNJLDKJMD_PJDMFCOOCMO_OFFSET UNITYSDK_OFFSET(0xBC8E600)
#define NMMNJLDKJMD_SET_HIPPLENINSTANCE_OFFSET UNITYSDK_OFFSET(0xBC8F200)
#define NMMNJLDKJMD__ONGAMEBOARDLOAD_B__11_0_OFFSET UNITYSDK_OFFSET(0xBC8F220)

inline static constexpr unsigned int NMMNJLDKJMD_TypeDefinitionIndex = 75468;

	class NMMNJLDKJMD : public ::System::Object
	{
	public:
		::System::Action* EFGGKMNKLDN; // 0x10
		::RPG::Client::ActivityHipplen::HipplenGameBoard* BJGEGPAJNJK; // 0x18
		::System::String* EPBNBLDBFPC; // 0x20
		::GJDPEGIFLGB* _HipplenInstance_k__BackingField; // 0x28
		::NMMNJLDKJMD_BELFBEJOIFB* ILJKFHIEJJK; // 0x30
		::System::Boolean PPIGLCIEIIM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_HADOHLNHHGB_OFFSET))(this);
		}

		::UnityEngine::Transform* JKOJDDMPDLK(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_JKOJDDMPDLK_OFFSET))(this, a1);
		}

		::System::Void NLLJGBOANKJ(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Action* a4, ::NMMNJLDKJMD_ABBHBIKKFIG* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*, ::NMMNJLDKJMD_ABBHBIKKFIG*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_NLLJGBOANKJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JHAIMKAGIBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_JHAIMKAGIBP_OFFSET))(this);
		}

		::System::Void HOJCGIDIECE(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_HOJCGIDIECE_OFFSET))(this, a1);
		}

		::System::Void PJDMFCOOCMO(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_PJDMFCOOCMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PJDMFCOOCMO_1(::System::String* a1, ::RPG::GameCore::VCameraBlend* a2, ::System::Boolean a3, ::UnityEngine::Transform* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::VCameraBlend*, ::System::Boolean, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_PJDMFCOOCMO_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AEAOGMFOCIG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_AEAOGMFOCIG_OFFSET))(this, a1);
		}

		::System::Void IMGLLNBDIDD(::RPG::Client::ActivityHipplen::HipplenGameBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::HipplenGameBoard*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_IMGLLNBDIDD_OFFSET))(this, a1);
		}

		::System::Void LCNCEDADFFD(::RPG::Client::ActivityHipplen::HipplenGameBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::HipplenGameBoard*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_LCNCEDADFFD_OFFSET))(this, a1);
		}

		::System::Boolean IMAJLPIFLNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_IMAJLPIFLNN_OFFSET))(this);
		}

		::System::Void DALKINCKLJJ(::NPPMHDBABDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPMHDBABDI*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_DALKINCKLJJ_OFFSET))(this, a1);
		}

		::System::Void DNOPLMGEEJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_DNOPLMGEEJE_OFFSET))(this);
		}

		::NPPMHDBABDI* GLCGGAOJJFC()
		{
			return ((::NPPMHDBABDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_GLCGGAOJJFC_OFFSET))(this);
		}

		::System::Void AEODGOJKEMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_AEODGOJKEMK_OFFSET))(this);
		}

		::System::Void FEPPMNBMKCM(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_FEPPMNBMKCM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DEGOBFNCBII(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_DEGOBFNCBII_OFFSET))(this, a1);
		}

		::System::Void FJAACDOELNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_FJAACDOELNC_OFFSET))(this, a1);
		}

		::GJDPEGIFLGB* get_HipplenInstance()
		{
			return ((::GJDPEGIFLGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_GET_HIPPLENINSTANCE_OFFSET))(this);
		}

		::System::Void set_HipplenInstance(::GJDPEGIFLGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJDPEGIFLGB*))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_SET_HIPPLENINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _OnGameBoardLoad_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD__ONGAMEBOARDLOAD_B__11_0_OFFSET))(this);
		}

	};
