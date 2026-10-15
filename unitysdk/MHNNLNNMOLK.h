#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define MHNNLNNMOLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB942440)
#define MHNNLNNMOLK_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB941FC0)
#define MHNNLNNMOLK_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB941F80)
#define MHNNLNNMOLK_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB9423E0)
#define MHNNLNNMOLK_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB942340)
#define MHNNLNNMOLK_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB9423A0)
#define MHNNLNNMOLK_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB942280)

inline static constexpr unsigned int MHNNLNNMOLK_TypeDefinitionIndex = 60482;

	class MHNNLNNMOLK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNLNNMOLK_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNLNNMOLK_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNLNNMOLK_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNLNNMOLK_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MHNNLNNMOLK_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNLNNMOLK_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MHNNLNNMOLK_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
