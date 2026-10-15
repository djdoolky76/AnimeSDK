#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define MNHGCMGOFBF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA08C00)
#define MNHGCMGOFBF_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xBA08C50)
#define MNHGCMGOFBF_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xBA08C10)
#define MNHGCMGOFBF_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xBA08FC0)
#define MNHGCMGOFBF_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xBA08CD0)
#define MNHGCMGOFBF_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xBA08E50)
#define MNHGCMGOFBF_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xBA08C90)

inline static constexpr unsigned int MNHGCMGOFBF_TypeDefinitionIndex = 60479;

	class MNHGCMGOFBF : public ::System::Object
	{
	public:
		::RPG::GameCore::TransitionLoadingType NHIBKAHAPMB; // 0x10
		::System::Void _ctor(::RPG::GameCore::TransitionLoadingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + MNHGCMGOFBF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHGCMGOFBF_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHGCMGOFBF_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHGCMGOFBF_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNHGCMGOFBF_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHGCMGOFBF_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNHGCMGOFBF_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
