#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define JHPIHKLNMPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C96B0)
#define JHPIHKLNMPO_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB1C91F0)
#define JHPIHKLNMPO_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB1C91B0)
#define JHPIHKLNMPO_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB1C9650)
#define JHPIHKLNMPO_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB1C95B0)
#define JHPIHKLNMPO_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB1C9610)
#define JHPIHKLNMPO_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB1C94F0)

inline static constexpr unsigned int JHPIHKLNMPO_TypeDefinitionIndex = 60474;

	class JHPIHKLNMPO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPIHKLNMPO_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPIHKLNMPO_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPIHKLNMPO_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPIHKLNMPO_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JHPIHKLNMPO_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPIHKLNMPO_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JHPIHKLNMPO_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
