#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class FILCLOOIFKF;
class INMMPMDELKE;
class KGIBAGMFENA;
class MNCOPNHONHO;
namespace Entitas { class IGroup; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }

#define CHENLCDDMGN_AMMIBNBFFJM_OFFSET UNITYSDK_OFFSET(0xCC94800)
#define CHENLCDDMGN_AOGLIAEGMMO_OFFSET UNITYSDK_OFFSET(0xCC93ED0)
#define CHENLCDDMGN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC939F0)
#define CHENLCDDMGN_EJFMOGGGCJH_OFFSET UNITYSDK_OFFSET(0xCC944B0)
#define CHENLCDDMGN_GLJEBOHFOMO_OFFSET UNITYSDK_OFFSET(0xCC94080)
#define CHENLCDDMGN_HJCIHBPELGK_OFFSET UNITYSDK_OFFSET(0xCC94250)
#define CHENLCDDMGN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCC93AC0)
#define CHENLCDDMGN_KDJBOHLBKPD_OFFSET UNITYSDK_OFFSET(0xCC93BC0)
#define CHENLCDDMGN_MNFJIHPJNPH_OFFSET UNITYSDK_OFFSET(0xCC93F80)
#define CHENLCDDMGN_NGCGACLHKEH_OFFSET UNITYSDK_OFFSET(0xCC94C10)
#define CHENLCDDMGN_NHPLKGACLFH_OFFSET UNITYSDK_OFFSET(0xCC94680)
#define CHENLCDDMGN_PECPANJDMBA_OFFSET UNITYSDK_OFFSET(0xCC93B60)
#define CHENLCDDMGN_PKBLMLKLHAO_OFFSET UNITYSDK_OFFSET(0xCC94420)
#define CHENLCDDMGN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xCC93E90)

	class CHENLCDDMGN : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::Entitas::IGroup* MIGADKPEGEF; // 0x18
		::BABNOKHOBCF* FKINCGODJEP; // 0x20
		::RPG::GameCore::PropButtonConfig* KNBCOOOOOKP; // 0x28
		// static const ::System::String* GNJIEPNGAKK; // 0x0
		// static const ::System::String* NEFLHKDMFHB; // 0x0
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHENLCDDMGN_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHENLCDDMGN_TEARDOWN_OFFSET))(this);
		}

		::System::Void PECPANJDMBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHENLCDDMGN_PECPANJDMBA_OFFSET))(this);
		}

		::System::Void KDJBOHLBKPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHENLCDDMGN_KDJBOHLBKPD_OFFSET))(this);
		}

		::System::Void HJCIHBPELGK(::INMMPMDELKE* a1, ::KGIBAGMFENA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::KGIBAGMFENA*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_HJCIHBPELGK_OFFSET))(this, a1, a2);
		}

		static ::System::String* PKBLMLKLHAO(::KGIBAGMFENA* a1)
		{
			return ((::System::String*(*)(::KGIBAGMFENA*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_PKBLMLKLHAO_OFFSET))(a1);
		}

		::RPG::GameCore::PropButtonConfig* MNFJIHPJNPH(::KGIBAGMFENA* a1)
		{
			return ((::RPG::GameCore::PropButtonConfig*(*)(::PVOID, ::KGIBAGMFENA*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_MNFJIHPJNPH_OFFSET))(this, a1);
		}

		::System::Void GLJEBOHFOMO(::INMMPMDELKE* a1, ::KGIBAGMFENA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::KGIBAGMFENA*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_GLJEBOHFOMO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PropButtonConfig* AOGLIAEGMMO()
		{
			return ((::RPG::GameCore::PropButtonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHENLCDDMGN_AOGLIAEGMMO_OFFSET))(this);
		}

		::System::Void EJFMOGGGCJH(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_EJFMOGGGCJH_OFFSET))(this, a1);
		}

		::System::Void NHPLKGACLFH(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_NHPLKGACLFH_OFFSET))(this, a1);
		}

		::System::Void AMMIBNBFFJM(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_AMMIBNBFFJM_OFFSET))(this, a1);
		}

		::System::Void NGCGACLHKEH(::FILCLOOIFKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FILCLOOIFKF*))((::PBYTE)hIl2Cpp + CHENLCDDMGN_NGCGACLHKEH_OFFSET))(this, a1);
		}

	};
