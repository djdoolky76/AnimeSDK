#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCBOJGNGLGO.h"
class OGHPKFMNNHL;
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define EFJAJBNPIIA_CACLPALKHND_OFFSET UNITYSDK_OFFSET(0x13A4DC40)
#define EFJAJBNPIIA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4D9D0)
#define EFJAJBNPIIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A4D9E0)
#define EFJAJBNPIIA_FLIFLEOICAO_OFFSET UNITYSDK_OFFSET(0x13A4E410)
#define EFJAJBNPIIA_HIINBAKDDJK_OFFSET UNITYSDK_OFFSET(0x13A4E760)
#define EFJAJBNPIIA_JBCBIPJPFOP_OFFSET UNITYSDK_OFFSET(0x13A4DA30)
#define EFJAJBNPIIA_JECJEHEAEAI_OFFSET UNITYSDK_OFFSET(0x13A4E0C0)
#define EFJAJBNPIIA_LGIOECMNIBO_OFFSET UNITYSDK_OFFSET(0x13A4EAB0)
#define EFJAJBNPIIA_NMLOOJOCOON_OFFSET UNITYSDK_OFFSET(0x13A4E940)

	class EFJAJBNPIIA : public ::GCBOJGNGLGO
	{
	public:
		::RPG::Client::Promises::Promise* GJLMIAMPLLE; // 0x38
		::System::Boolean PBNMDACHCHL; // 0x40
		::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::OGHPKFMNNHL* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::OGHPKFMNNHL*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_DISPOSE_OFFSET))(this);
		}

		::System::Void JBCBIPJPFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_JBCBIPJPFOP_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* CACLPALKHND()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_CACLPALKHND_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* JECJEHEAEAI()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_JECJEHEAEAI_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* FLIFLEOICAO()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_FLIFLEOICAO_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* HIINBAKDDJK()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_HIINBAKDDJK_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* NMLOOJOCOON()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_NMLOOJOCOON_OFFSET))(this);
		}

		::System::Void LGIOECMNIBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFJAJBNPIIA_LGIOECMNIBO_OFFSET))(this, a1);
		}

	};
