#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletStepState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class IBookletView; }

#define JPNPHHIBPEK_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x19DA4310)
#define JPNPHHIBPEK_AJKDGPJKLMC_OFFSET UNITYSDK_OFFSET(0x19DA4440)
#define JPNPHHIBPEK_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x19DA3F90)
#define JPNPHHIBPEK_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x19DA4240)
#define JPNPHHIBPEK_CTOR_OFFSET UNITYSDK_OFFSET(0x19DA4490)
#define JPNPHHIBPEK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x19DA4290)
#define JPNPHHIBPEK_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x19DA4370)
#define JPNPHHIBPEK_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x19DA3D30)
#define JPNPHHIBPEK_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x19DA43B0)
#define JPNPHHIBPEK_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x19DA41F0)
#define JPNPHHIBPEK_GET_STATE_OFFSET UNITYSDK_OFFSET(0x19DA3C50)
#define JPNPHHIBPEK_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x19DA3BE0)
#define JPNPHHIBPEK_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0x19DA3C00)
#define JPNPHHIBPEK_HKACGHCGHPA_OFFSET UNITYSDK_OFFSET(0x19DA4120)
#define JPNPHHIBPEK_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x19DA3ED0)
#define JPNPHHIBPEK_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0x19DA43F0)
#define JPNPHHIBPEK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19DA3C70)
#define JPNPHHIBPEK_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0x19DA42D0)
#define JPNPHHIBPEK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x19DA3DF0)
#define JPNPHHIBPEK_SET_STATE_OFFSET UNITYSDK_OFFSET(0x19DA3C60)
#define JPNPHHIBPEK_SET_VIEW_OFFSET UNITYSDK_OFFSET(0x19DA3BF0)
#define JPNPHHIBPEK_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x19DA4050)

inline static constexpr unsigned int JPNPHHIBPEK_TypeDefinitionIndex = 74507;

	class JPNPHHIBPEK : public ::System::Object
	{
	public:
		::RPG::Client::IBookletView* _View_k__BackingField; // 0x10
		::RPG::Client::BookletStepState _State_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_CTOR_OFFSET))(this);
		}

		::RPG::Client::IBookletView* get_View()
		{
			return ((::RPG::Client::IBookletView*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_GET_VIEW_OFFSET))(this);
		}

		::System::Void set_View(::RPG::Client::IBookletView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_SET_VIEW_OFFSET))(this, a1);
		}

		::RPG::Client::Booklet* GHDIJCNKKOM()
		{
			return ((::RPG::Client::Booklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_GHDIJCNKKOM_OFFSET))(this);
		}

		::RPG::Client::BookletStepState get_State()
		{
			return ((::RPG::Client::BookletStepState(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::BookletStepState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletStepState))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::IBookletView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FHLALJENMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_FHLALJENMHB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Boolean TrySkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_TRYSKIP_OFFSET))(this);
		}

		::System::Void ForceSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_FORCESKIP_OFFSET))(this);
		}

		::System::Boolean CheckCanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_CHECKCANSKIP_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NPOFEKBLAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_NPOFEKBLAIH_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_AGHABIKPPNO_OFFSET))(this, a1);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void KPAOCJEJCNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_KPAOCJEJCNA_OFFSET))(this, a1);
		}

		::System::Void HKACGHCGHPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_HKACGHCGHPA_OFFSET))(this, a1);
		}

		::System::Void AJKDGPJKLMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPHHIBPEK_AJKDGPJKLMC_OFFSET))(this);
		}

	};
