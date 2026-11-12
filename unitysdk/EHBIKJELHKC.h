#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHBIKJELHKC;
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define EHBIKJELHKC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1639C8A0)
#define EHBIKJELHKC_CANAKGGKBAH_OFFSET UNITYSDK_OFFSET(0x1639C9A0)
#define EHBIKJELHKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1639C890)
#define EHBIKJELHKC_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x1639C950)
#define EHBIKJELHKC_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x1639C910)
#define EHBIKJELHKC_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x1639CE10)
#define EHBIKJELHKC_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x1639CDB0)
#define EHBIKJELHKC_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x1639CE70)
#define EHBIKJELHKC_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x1639CB90)

inline static constexpr unsigned int EHBIKJELHKC_TypeDefinitionIndex = 84638;

	class EHBIKJELHKC : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		// static const ::System::Object HIEGFEPPKLE; // 0x0
		// static const ::System::Object HEEFNKCBAIC; // 0x0
		// static const ::System::Object GBMCFKGODLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBIKJELHKC_CTOR_OFFSET))(this);
		}

		static ::EHBIKJELHKC* BPLPBPMEODA()
		{
			return ((::EHBIKJELHKC*(*)())((::PBYTE)hIl2Cpp + EHBIKJELHKC_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBIKJELHKC_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBIKJELHKC_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void CANAKGGKBAH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EHBIKJELHKC_CANAKGGKBAH_OFFSET))(this, a1);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBIKJELHKC_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EHBIKJELHKC_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EHBIKJELHKC_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBIKJELHKC_NNAGLJCMMGD_OFFSET))(this);
		}

	};
