#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define JHPIHKLNMPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9EB5A0)
#define JHPIHKLNMPO_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB9EB0E0)
#define JHPIHKLNMPO_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB9EB0A0)
#define JHPIHKLNMPO_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB9EB540)
#define JHPIHKLNMPO_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB9EB4A0)
#define JHPIHKLNMPO_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB9EB500)
#define JHPIHKLNMPO_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB9EB3E0)

inline static constexpr unsigned int JHPIHKLNMPO_TypeDefinitionIndex = 61764;

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
