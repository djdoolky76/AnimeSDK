#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;
class FAODCLALLME;
class HKAJMEMCBLC;
namespace RPG::Client::FateRin::Card { class IFateRinCardKeywordListViewModel; }
namespace System { class String; }

#define MEKNFEPEBEB_AGBMBCBEHKC_OFFSET UNITYSDK_OFFSET(0xB8D6A70)
#define MEKNFEPEBEB_ANNKGAFOPMP_OFFSET UNITYSDK_OFFSET(0xB8D7320)
#define MEKNFEPEBEB_BPIAMCKKAAH_1_OFFSET UNITYSDK_OFFSET(0xB8D75C0)
#define MEKNFEPEBEB_BPIAMCKKAAH_OFFSET UNITYSDK_OFFSET(0xB8D74F0)
#define MEKNFEPEBEB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8D7FF0)
#define MEKNFEPEBEB_FDPCFEPDBAH_OFFSET UNITYSDK_OFFSET(0xB8D7750)
#define MEKNFEPEBEB_HDANEJIMALI_1_OFFSET UNITYSDK_OFFSET(0xB8D6B70)
#define MEKNFEPEBEB_HDANEJIMALI_2_OFFSET UNITYSDK_OFFSET(0xB8D6BF0)
#define MEKNFEPEBEB_HDANEJIMALI_OFFSET UNITYSDK_OFFSET(0xB8D6AD0)
#define MEKNFEPEBEB_JKIEPICHHND_OFFSET UNITYSDK_OFFSET(0xB8D7130)
#define MEKNFEPEBEB_JLIFCOGGOPK_OFFSET UNITYSDK_OFFSET(0xB8D6D10)
#define MEKNFEPEBEB_KOFOMJPIAMH_OFFSET UNITYSDK_OFFSET(0xB8D6E50)
#define MEKNFEPEBEB_LBDLBDBHONL_OFFSET UNITYSDK_OFFSET(0xB8D70D0)
#define MEKNFEPEBEB_LEALAKAHGEL_OFFSET UNITYSDK_OFFSET(0xB8D6DA0)
#define MEKNFEPEBEB_MEMLMMLJFLO_OFFSET UNITYSDK_OFFSET(0xB8D7440)
#define MEKNFEPEBEB_NPCLLIBPMDD_OFFSET UNITYSDK_OFFSET(0xB8D7040)

inline static constexpr unsigned int MEKNFEPEBEB_TypeDefinitionIndex = 81194;

	class MEKNFEPEBEB : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet_LIIOPLOBGCG()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "MEKNFEPEBEB")->GetStaticField(0x148F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKNFEPEBEB_CCTOR_OFFSET))();
		}

		static ::System::String* AGBMBCBEHKC()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEKNFEPEBEB_AGBMBCBEHKC_OFFSET))();
		}

		static ::System::String* HDANEJIMALI(::HKAJMEMCBLC* a1)
		{
			return ((::System::String*(*)(::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_HDANEJIMALI_OFFSET))(a1);
		}

		static ::System::String* HDANEJIMALI_1(::COOONBGCCCM* a1)
		{
			return ((::System::String*(*)(::COOONBGCCCM*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_HDANEJIMALI_1_OFFSET))(a1);
		}

		static ::System::String* HDANEJIMALI_2(::COOONBGCCCM* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::COOONBGCCCM*, ::System::Boolean))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_HDANEJIMALI_2_OFFSET))(a1, a2);
		}

		static ::System::String* JLIFCOGGOPK(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_JLIFCOGGOPK_OFFSET))(a1);
		}

		static ::System::String* LEALAKAHGEL(::HKAJMEMCBLC* a1)
		{
			return ((::System::String*(*)(::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_LEALAKAHGEL_OFFSET))(a1);
		}

		static ::System::String* KOFOMJPIAMH(::HKAJMEMCBLC* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::String*(*)(::HKAJMEMCBLC*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_KOFOMJPIAMH_OFFSET))(a1, a2);
		}

		static ::System::String* JKIEPICHHND(::HKAJMEMCBLC* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::String*(*)(::HKAJMEMCBLC*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_JKIEPICHHND_OFFSET))(a1, a2);
		}

		static ::System::Boolean NPCLLIBPMDD(::HKAJMEMCBLC* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Boolean(*)(::HKAJMEMCBLC*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_NPCLLIBPMDD_OFFSET))(a1, a2);
		}

		static ::System::String* LBDLBDBHONL(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_LBDLBDBHONL_OFFSET))(a1, a2);
		}

		static ::System::String* ANNKGAFOPMP(::HKAJMEMCBLC* a1)
		{
			return ((::System::String*(*)(::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_ANNKGAFOPMP_OFFSET))(a1);
		}

		static ::System::String* MEMLMMLJFLO(::HKAJMEMCBLC* a1)
		{
			return ((::System::String*(*)(::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_MEMLMMLJFLO_OFFSET))(a1);
		}

		static ::System::String* BPIAMCKKAAH(::HKAJMEMCBLC* a1)
		{
			return ((::System::String*(*)(::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_BPIAMCKKAAH_OFFSET))(a1);
		}

		static ::System::String* BPIAMCKKAAH_1(::COOONBGCCCM* a1, ::HKAJMEMCBLC* a2)
		{
			return ((::System::String*(*)(::COOONBGCCCM*, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_BPIAMCKKAAH_1_OFFSET))(a1, a2);
		}

		static ::System::String* FDPCFEPDBAH(::RPG::Client::FateRin::Card::IFateRinCardKeywordListViewModel* a1, ::FAODCLALLME* a2)
		{
			return ((::System::String*(*)(::RPG::Client::FateRin::Card::IFateRinCardKeywordListViewModel*, ::FAODCLALLME*))((::PBYTE)hIl2Cpp + MEKNFEPEBEB_FDPCFEPDBAH_OFFSET))(a1, a2);
		}

	};
