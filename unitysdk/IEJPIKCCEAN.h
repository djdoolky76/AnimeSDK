#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHEEFIDGFPC.h"
namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define IEJPIKCCEAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15F003D0)
#define IEJPIKCCEAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F00490)
#define IEJPIKCCEAN_ECDCNFMPDLA_OFFSET UNITYSDK_OFFSET(0x15F00ED0)
#define IEJPIKCCEAN_GLGCKMJMMNF_OFFSET UNITYSDK_OFFSET(0x15F00FE0)
#define IEJPIKCCEAN_JBKBBNFJAKN_OFFSET UNITYSDK_OFFSET(0x15F00C90)
#define IEJPIKCCEAN_KOBKHOADBHN_OFFSET UNITYSDK_OFFSET(0x15F00F90)
#define IEJPIKCCEAN_OADGHHBFFDB_OFFSET UNITYSDK_OFFSET(0x15F00E10)
#define IEJPIKCCEAN_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15F00B10)
#define IEJPIKCCEAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F00510)

inline static constexpr unsigned int IEJPIKCCEAN_TypeDefinitionIndex = 57851;

	class IEJPIKCCEAN : public ::KHEEFIDGFPC
	{
	public:
		::RPG::GameCore::CinemachineVirtualCameraTemplateConfig* HCMMLOKKGPG; // 0x78
		::RPG::GameCore::ActiveTemplateVirtualCamera* IMELGBDDPGP; // 0x80
		::System::String* LGODNIDADMN; // 0x88
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveTemplateVirtualCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveTemplateVirtualCamera*))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_ONSKIP_OFFSET))(this);
		}

		::System::Void JBKBBNFJAKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_JBKBBNFJAKN_OFFSET))(this);
		}

		::UnityEngine::GameObject* OADGHHBFFDB()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_OADGHHBFFDB_OFFSET))(this);
		}

		::UnityEngine::GameObject* ECDCNFMPDLA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_ECDCNFMPDLA_OFFSET))(this);
		}

		::System::Void KOBKHOADBHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_KOBKHOADBHN_OFFSET))(this);
		}

		::UnityEngine::GameObject* GLGCKMJMMNF(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + IEJPIKCCEAN_GLGCKMJMMNF_OFFSET))(this, a1, a2);
		}

	};
