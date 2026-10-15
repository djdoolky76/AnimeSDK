#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDOPEFMMILF;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPBMIDPNFMP_BOGBGKOHMFO_OFFSET UNITYSDK_OFFSET(0xB2AFB10)
#define JPBMIDPNFMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB2AFFE0)
#define JPBMIDPNFMP_IAEAJCHBEHE_OFFSET UNITYSDK_OFFSET(0xB2AFA60)
#define JPBMIDPNFMP_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xB2AFB70)
#define JPBMIDPNFMP_MFMGMEEIMKP_OFFSET UNITYSDK_OFFSET(0xB2AFEE0)
#define JPBMIDPNFMP_OIIKCEBBHCH_OFFSET UNITYSDK_OFFSET(0xB2AFD80)

	class JPBMIDPNFMP : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::Collections::Generic::List_1<::JDOPEFMMILF*>* MEBCIJPKOHB; // 0x18
		::RPG::GameCore::GameWorld* JNOFGLFPMLB; // 0x20
		::System::Int32 DGOMDMCAKCC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMIDPNFMP_CTOR_OFFSET))(this);
		}

		::System::Void IAEAJCHBEHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPBMIDPNFMP_IAEAJCHBEHE_OFFSET))(this, a1);
		}

		::System::Void OIIKCEBBHCH(::JDOPEFMMILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDOPEFMMILF*))((::PBYTE)hIl2Cpp + JPBMIDPNFMP_OIIKCEBBHCH_OFFSET))(this, a1);
		}

		::System::Void MFMGMEEIMKP(::JDOPEFMMILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDOPEFMMILF*))((::PBYTE)hIl2Cpp + JPBMIDPNFMP_MFMGMEEIMKP_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPBMIDPNFMP_JEJLPHKIHLB_OFFSET))(this, a1);
		}

		::System::Boolean BOGBGKOHMFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMIDPNFMP_BOGBGKOHMFO_OFFSET))(this);
		}

	};
