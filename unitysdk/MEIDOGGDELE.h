#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MEIDOGGDELE_CTOR_OFFSET UNITYSDK_OFFSET(0x17C59B50)
#define MEIDOGGDELE_HLJEBPABFAD_OFFSET UNITYSDK_OFFSET(0x17C59AC0)
#define MEIDOGGDELE__ONBIND_OFFSET UNITYSDK_OFFSET(0x17C598E0)
#define MEIDOGGDELE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17C59A60)

inline static constexpr unsigned int MEIDOGGDELE_TypeDefinitionIndex = 74383;

	class MEIDOGGDELE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* AOKHJDHAAKP; // 0x60
		::UnityEngine::ParticleSystem* MBJJHPKBCCC; // 0x68
		::UnityEngine::Transform* DCCOIAKMMEE; // 0x70
		::System::Boolean DAKHCIHNGBK; // 0x78
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* PCANCCCAJHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIDOGGDELE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIDOGGDELE__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIDOGGDELE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void HLJEBPABFAD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEIDOGGDELE_HLJEBPABFAD_OFFSET))(this, a1);
		}

	};
