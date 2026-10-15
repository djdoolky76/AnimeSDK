#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define LHLLAIAEFGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BC5F0)
#define LHLLAIAEFGK_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB6BC170)
#define LHLLAIAEFGK_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB6BC130)
#define LHLLAIAEFGK_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB6BC590)
#define LHLLAIAEFGK_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB6BC4F0)
#define LHLLAIAEFGK_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB6BC550)
#define LHLLAIAEFGK_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB6BC430)

inline static constexpr unsigned int LHLLAIAEFGK_TypeDefinitionIndex = 60467;

	class LHLLAIAEFGK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLLAIAEFGK_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLLAIAEFGK_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLLAIAEFGK_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLLAIAEFGK_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LHLLAIAEFGK_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLLAIAEFGK_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LHLLAIAEFGK_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
