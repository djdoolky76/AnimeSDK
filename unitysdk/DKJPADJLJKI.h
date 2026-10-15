#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define DKJPADJLJKI_CTOR_OFFSET UNITYSDK_OFFSET(0xF888AF0)
#define DKJPADJLJKI_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xF888930)
#define DKJPADJLJKI_HCOIAPLKJPG_OFFSET UNITYSDK_OFFSET(0xF888A60)
#define DKJPADJLJKI_IDMOBNIGBDP_OFFSET UNITYSDK_OFFSET(0xF8889B0)
#define DKJPADJLJKI_PLBBBPJGBMH_OFFSET UNITYSDK_OFFSET(0xF888880)
#define DKJPADJLJKI__ONBIND_OFFSET UNITYSDK_OFFSET(0xF8886F0)

inline static constexpr unsigned int DKJPADJLJKI_TypeDefinitionIndex = 71993;

	class DKJPADJLJKI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::UnityEngine::Transform* FIACEDOMPEA; // 0x68
		::UnityEngine::Transform* CDJGLKECPHI; // 0x70
		::UnityEngine::Transform* GHGAKNDLKGM; // 0x78
		// static const ::System::String* CMAAILAJKLG; // 0x0
		// static const ::System::String* DGNLNMNPMGI; // 0x0
		// static const ::System::String* ENFHEKDIEEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPADJLJKI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPADJLJKI__ONBIND_OFFSET))(this);
		}

		::System::Void PLBBBPJGBMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJPADJLJKI_PLBBBPJGBMH_OFFSET))(this, a1);
		}

		::System::Void DKKJNPPHDPM(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJPADJLJKI_DKKJNPPHDPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IDMOBNIGBDP(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJPADJLJKI_IDMOBNIGBDP_OFFSET))(this, a1, a2);
		}

		::System::Void HCOIAPLKJPG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJPADJLJKI_HCOIAPLKJPG_OFFSET))(this, a1);
		}

	};
