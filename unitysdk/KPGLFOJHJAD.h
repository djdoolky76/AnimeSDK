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

#define KPGLFOJHJAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B60A0)
#define KPGLFOJHJAD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB5B5A80)
#define KPGLFOJHJAD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB5B5970)
#define KPGLFOJHJAD_EGDHNBDDLJJ_OFFSET UNITYSDK_OFFSET(0xB5B5B10)
#define KPGLFOJHJAD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB5B5870)
#define KPGLFOJHJAD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB5B5680)
#define KPGLFOJHJAD_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB5B56A0)
#define KPGLFOJHJAD_MKHFOBCLIHH_OFFSET UNITYSDK_OFFSET(0xB5B5DC0)
#define KPGLFOJHJAD_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB5B5700)
#define KPGLFOJHJAD_NLIECACMJML_OFFSET UNITYSDK_OFFSET(0xB5B58C0)
#define KPGLFOJHJAD_PCEDKPEOMIM_OFFSET UNITYSDK_OFFSET(0xB5B5C30)
#define KPGLFOJHJAD_PIIIJNEACHE_OFFSET UNITYSDK_OFFSET(0xB5B5EE0)
#define KPGLFOJHJAD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB5B5690)
#define KPGLFOJHJAD__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5B5450)

inline static constexpr unsigned int KPGLFOJHJAD_TypeDefinitionIndex = 71836;

	class KPGLFOJHJAD : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x60
		::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::KPGLFOJHJAD_JBFGDCFKHLM* MOFHGHGKAFP; // 0x78
		::RPG::Client::LocalizedText* GBFKFBCCLKK; // 0x80
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KPGLFOJHJAD_DHHDFAAJMMC_OFFSET))(this, a1);
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
