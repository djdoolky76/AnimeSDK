#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KPGLFOJHJAD_JBFGDCFKHLM;
class LHHCPMMADKG;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define KPGLFOJHJAD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE10870)
#define KPGLFOJHJAD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBE10140)
#define KPGLFOJHJAD_EGDHNBDDLJJ_OFFSET UNITYSDK_OFFSET(0xBE102E0)
#define KPGLFOJHJAD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBE0FE50)
#define KPGLFOJHJAD_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBE0FE70)
#define KPGLFOJHJAD_MKHFOBCLIHH_OFFSET UNITYSDK_OFFSET(0xBE10590)
#define KPGLFOJHJAD_NLIECACMJML_OFFSET UNITYSDK_OFFSET(0xBE10090)
#define KPGLFOJHJAD_PCEDKPEOMIM_OFFSET UNITYSDK_OFFSET(0xBE10400)
#define KPGLFOJHJAD_PIIIJNEACHE_OFFSET UNITYSDK_OFFSET(0xBE106B0)
#define KPGLFOJHJAD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBE0FE60)
#define KPGLFOJHJAD__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBE0FED0)
#define KPGLFOJHJAD__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE0FB10)
#define KPGLFOJHJAD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBE10250)
#define KPGLFOJHJAD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBE10040)

inline static constexpr unsigned int KPGLFOJHJAD_TypeDefinitionIndex = 73858;

	class KPGLFOJHJAD : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x60
		::KPGLFOJHJAD_JBFGDCFKHLM* MOFHGHGKAFP; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::RPG::Client::LocalizedText* GBFKFBCCLKK; // 0x78
		::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x80
		::System::UInt32 HLHEBKGANEM; // 0x88
		::System::Boolean DMBFJAEAGPL; // 0x8C
		::System::Byte _padding0[0x3];
		::System::Int32 _Index_k__BackingField; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_GET_TRANS_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD__SETUPVIEW_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KPGLFOJHJAD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void EGDHNBDDLJJ(::LHHCPMMADKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHHCPMMADKG*))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_EGDHNBDDLJJ_OFFSET))(this, a1);
		}

		::System::Void NLIECACMJML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_NLIECACMJML_OFFSET))(this);
		}

		::System::Void PCEDKPEOMIM(::LHHCPMMADKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHHCPMMADKG*))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_PCEDKPEOMIM_OFFSET))(this, a1);
		}

		::System::Void MKHFOBCLIHH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_MKHFOBCLIHH_OFFSET))(this, a1);
		}

		::System::Void PIIIJNEACHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_PIIIJNEACHE_OFFSET))(this, a1);
		}

	};
