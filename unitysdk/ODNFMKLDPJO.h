#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class NAMMEJAABAM;
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define ODNFMKLDPJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF1BD0)
#define ODNFMKLDPJO_IPKLEHABJDF_OFFSET UNITYSDK_OFFSET(0xBDF1850)
#define ODNFMKLDPJO__ONBIND_OFFSET UNITYSDK_OFFSET(0xBDF17A0)

inline static constexpr unsigned int ODNFMKLDPJO_TypeDefinitionIndex = 71668;

	class ODNFMKLDPJO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* OHJCABBKJHA; // 0x60
		::NAMMEJAABAM* ACAKMFDAHDM; // 0x68
		::UnityEngine::RectTransform* NHDIHFJFJDA; // 0x70
		// static const ::System::Object IMCLIANMBCN; // 0x0
		// static const ::System::Object KMKOOGLDPJA; // 0x0
		// static const ::System::Object GKKGDEMCFBL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFMKLDPJO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFMKLDPJO__ONBIND_OFFSET))(this);
		}

		::System::Void IPKLEHABJDF(::RPG::Client::ForceKillMarkDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + ODNFMKLDPJO_IPKLEHABJDF_OFFSET))(this, a1);
		}

	};
