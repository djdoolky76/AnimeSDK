#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define BEBKBMOAJNL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C1A40)
#define BEBKBMOAJNL_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB7C15C0)
#define BEBKBMOAJNL_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB7C1580)
#define BEBKBMOAJNL_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB7C19E0)
#define BEBKBMOAJNL_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB7C1940)
#define BEBKBMOAJNL_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB7C19A0)
#define BEBKBMOAJNL_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB7C1880)

inline static constexpr unsigned int BEBKBMOAJNL_TypeDefinitionIndex = 61756;

	class BEBKBMOAJNL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKBMOAJNL_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKBMOAJNL_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKBMOAJNL_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKBMOAJNL_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEBKBMOAJNL_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKBMOAJNL_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEBKBMOAJNL_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
