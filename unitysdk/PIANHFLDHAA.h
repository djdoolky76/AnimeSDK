#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIANHFLDHAA;
namespace System { class Action; }

#define PIANHFLDHAA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCB813C0)
#define PIANHFLDHAA_CTOR_OFFSET UNITYSDK_OFFSET(0xCB813B0)
#define PIANHFLDHAA_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xCB81440)
#define PIANHFLDHAA_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xCB81400)
#define PIANHFLDHAA_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xCB81680)
#define PIANHFLDHAA_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xCB815E0)
#define PIANHFLDHAA_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xCB81640)
#define PIANHFLDHAA_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xCB81510)

inline static constexpr unsigned int PIANHFLDHAA_TypeDefinitionIndex = 61773;

	class PIANHFLDHAA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIANHFLDHAA_CTOR_OFFSET))(this);
		}

		static ::PIANHFLDHAA* BPLPBPMEODA()
		{
			return ((::PIANHFLDHAA*(*)())((::PBYTE)hIl2Cpp + PIANHFLDHAA_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIANHFLDHAA_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIANHFLDHAA_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIANHFLDHAA_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PIANHFLDHAA_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIANHFLDHAA_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PIANHFLDHAA_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
