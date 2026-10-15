#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IEHGPFIGKOB_NPHKIPDJODH.h"
class BBDFGMBNDGD;
class KNKPLOGICFO;
class MJOPBJKKGPL;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define IEHGPFIGKOB_AEHLKBPHKOD_OFFSET UNITYSDK_OFFSET(0x15EFAA90)
#define IEHGPFIGKOB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EFBF60)
#define IEHGPFIGKOB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15EFC050)
#define IEHGPFIGKOB_BHDLCEEJAKE_OFFSET UNITYSDK_OFFSET(0x15EFB3C0)
#define IEHGPFIGKOB_BKECBPCHOOI_OFFSET UNITYSDK_OFFSET(0x15EFB100)
#define IEHGPFIGKOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15EFC120)
#define IEHGPFIGKOB_DHONMHFMEAD_OFFSET UNITYSDK_OFFSET(0x15EFA6E0)
#define IEHGPFIGKOB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15EFA1D0)
#define IEHGPFIGKOB_EKNDOCDFGBM_OFFSET UNITYSDK_OFFSET(0x15EFB970)
#define IEHGPFIGKOB_EOKCBIONPEG_OFFSET UNITYSDK_OFFSET(0x15EFBD20)
#define IEHGPFIGKOB_FOPDCOJAKKG_OFFSET UNITYSDK_OFFSET(0x15EFBE70)
#define IEHGPFIGKOB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15EFA000)
#define IEHGPFIGKOB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15EFA020)
#define IEHGPFIGKOB_HDGDHIPKJJF_OFFSET UNITYSDK_OFFSET(0x15EFA630)
#define IEHGPFIGKOB_HJHHLHEFODC_OFFSET UNITYSDK_OFFSET(0x15EFAB50)
#define IEHGPFIGKOB_HLAAPMDNDNH_OFFSET UNITYSDK_OFFSET(0x15EFA5E0)
#define IEHGPFIGKOB_KACGJJIJPAN_OFFSET UNITYSDK_OFFSET(0x15EFB0A0)
#define IEHGPFIGKOB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15EFA380)
#define IEHGPFIGKOB_LMBPKBDIPIJ_OFFSET UNITYSDK_OFFSET(0x15EFA840)
#define IEHGPFIGKOB_MNGOCDDIHNC_OFFSET UNITYSDK_OFFSET(0x15EFA3F0)
#define IEHGPFIGKOB_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15EFA060)
#define IEHGPFIGKOB_PIMOFJDMJGA_OFFSET UNITYSDK_OFFSET(0x15EFAD50)
#define IEHGPFIGKOB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15EFA010)
#define IEHGPFIGKOB__ONBIND_OFFSET UNITYSDK_OFFSET(0x15EF9EF0)
#define IEHGPFIGKOB__ONTICK_OFFSET UNITYSDK_OFFSET(0x15EFB7B0)

inline static constexpr unsigned int IEHGPFIGKOB_TypeDefinitionIndex = 72087;

	class IEHGPFIGKOB : public ::FMPCODLIOLG
	{
	public:
		::System::Action* GAPEPJJJBME; // 0x60
		::System::String* KBHBEBLFBOD; // 0x68
		::System::String* ICMMNDHIIMN; // 0x70
		::KNKPLOGICFO* PGMIOKKLHIE; // 0x78
		::System::String* EJHJDJCFLEJ; // 0x80
		::UnityEngine::Animator* EHOABNOOJJO; // 0x88
		::System::String* DPBCIFGKPPL; // 0x90
		::UnityEngine::UI::Image* NJOHEEPFLNM; // 0x98
		::System::String* LMAJLLBMEHL; // 0xA0
		::System::String* EOHOKJDPILG; // 0xA8
		::System::String* KIBCGMIDNOG; // 0xB0
		::System::Action* GIANJDIPHAC; // 0xB8
		::UnityEngine::UI::Slider* DNHDAJDEFBM; // 0xC0
		::UnityEngine::UI::Slider* EDLNEDEKKCF; // 0xC8
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xD0
		::MJOPBJKKGPL* DCDDGOHLPMC; // 0xD8
		::System::String* JHKODMIOIKF; // 0xE0
		::System::String* AEGCPFAGOLC; // 0xE8
		::System::String* EOKGFDBKKHB; // 0xF0
		::System::Action* LLLBNIFCFGG; // 0xF8
		::UnityEngine::UI::Image* DOHOGHIHBNH; // 0x100
		::IEHGPFIGKOB_NPHKIPDJODH KKKPBJLFLLM; // 0x108
		::System::Single IBFGCEKJPHP; // 0x110
		::System::Single DLCIBKLLMAL; // 0x114
		::System::Int32 _Index_k__BackingField; // 0x118
		::System::Single NBGFBGPBECJ; // 0x11C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_GET_TRANS_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void HLAAPMDNDNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_HLAAPMDNDNH_OFFSET))(this);
		}

		::System::Void HDGDHIPKJJF(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_HDGDHIPKJJF_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DHONMHFMEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_DHONMHFMEAD_OFFSET))(this);
		}

		::System::Void MNGOCDDIHNC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_MNGOCDDIHNC_OFFSET))(this, a1, a2);
		}

		::System::Void LMBPKBDIPIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_LMBPKBDIPIJ_OFFSET))(this);
		}

		::System::Void AEHLKBPHKOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_AEHLKBPHKOD_OFFSET))(this, a1);
		}

		::System::Void HJHHLHEFODC(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_HJHHLHEFODC_OFFSET))(this, a1);
		}

		::System::Void PIMOFJDMJGA(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_PIMOFJDMJGA_OFFSET))(this, a1);
		}

		::System::Void KACGJJIJPAN(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_KACGJJIJPAN_OFFSET))(this, a1);
		}

		::System::Void BKECBPCHOOI(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_BKECBPCHOOI_OFFSET))(this, a1);
		}

		::System::Void BHDLCEEJAKE(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_BHDLCEEJAKE_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEHGPFIGKOB__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EKNDOCDFGBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_EKNDOCDFGBM_OFFSET))(this);
		}

		::System::Void EOKCBIONPEG(::System::Action* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_EOKCBIONPEG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FOPDCOJAKKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_FOPDCOJAKKG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
