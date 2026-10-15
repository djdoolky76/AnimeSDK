#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class FILCLOOIFKF;
class INMMPMDELKE;
class KGIBAGMFENA;
class MNCOPNHONHO;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }

#define CHENLCDDMGN_AMMIBNBFFJM_OFFSET UNITYSDK_OFFSET(0xCC8F4B0)
#define CHENLCDDMGN_AOGLIAEGMMO_OFFSET UNITYSDK_OFFSET(0xCC8EB80)
#define CHENLCDDMGN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8E6A0)
#define CHENLCDDMGN_EJFMOGGGCJH_OFFSET UNITYSDK_OFFSET(0xCC8F160)
#define CHENLCDDMGN_GLJEBOHFOMO_OFFSET UNITYSDK_OFFSET(0xCC8ED30)
#define CHENLCDDMGN_HJCIHBPELGK_OFFSET UNITYSDK_OFFSET(0xCC8EF00)
#define CHENLCDDMGN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCC8E770)
#define CHENLCDDMGN_KDJBOHLBKPD_OFFSET UNITYSDK_OFFSET(0xCC8E870)
#define CHENLCDDMGN_MNFJIHPJNPH_OFFSET UNITYSDK_OFFSET(0xCC8EC30)
#define CHENLCDDMGN_NGCGACLHKEH_OFFSET UNITYSDK_OFFSET(0xCC8F8C0)
#define CHENLCDDMGN_NHPLKGACLFH_OFFSET UNITYSDK_OFFSET(0xCC8F330)
#define CHENLCDDMGN_PECPANJDMBA_OFFSET UNITYSDK_OFFSET(0xCC8E810)
#define CHENLCDDMGN_PKBLMLKLHAO_OFFSET UNITYSDK_OFFSET(0xCC8F0D0)
#define CHENLCDDMGN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xCC8EB40)

inline static constexpr unsigned int CHENLCDDMGN_TypeDefinitionIndex = 76814;

	class CHENLCDDMGN : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::RPG::GameCore::PropButtonConfig* KNBCOOOOOKP; // 0x18
		::BABNOKHOBCF* FKINCGODJEP; // 0x20
		::Entitas::IGroup_1<::INMMPMDELKE*>* MIGADKPEGEF; // 0x28
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
