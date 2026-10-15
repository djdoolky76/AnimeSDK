#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletStepState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class IBookletView; }

#define JPNPHHIBPEK_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xB2C82F0)
#define JPNPHHIBPEK_AJKDGPJKLMC_OFFSET UNITYSDK_OFFSET(0xB2C8420)
#define JPNPHHIBPEK_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB2C7F70)
#define JPNPHHIBPEK_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0xB2C8220)
#define JPNPHHIBPEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C8470)
#define JPNPHHIBPEK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB2C8270)
#define JPNPHHIBPEK_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xB2C8350)
#define JPNPHHIBPEK_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0xB2C7D10)
#define JPNPHHIBPEK_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xB2C8390)
#define JPNPHHIBPEK_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB2C81D0)
#define JPNPHHIBPEK_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB2C7C30)
#define JPNPHHIBPEK_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xB2C7BC0)
#define JPNPHHIBPEK_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xB2C7BE0)
#define JPNPHHIBPEK_HKACGHCGHPA_OFFSET UNITYSDK_OFFSET(0xB2C8100)
#define JPNPHHIBPEK_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xB2C7EB0)
#define JPNPHHIBPEK_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0xB2C83D0)
#define JPNPHHIBPEK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB2C7C50)
#define JPNPHHIBPEK_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0xB2C82B0)
#define JPNPHHIBPEK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB2C7DD0)
#define JPNPHHIBPEK_SET_STATE_OFFSET UNITYSDK_OFFSET(0xB2C7C40)
#define JPNPHHIBPEK_SET_VIEW_OFFSET UNITYSDK_OFFSET(0xB2C7BD0)
#define JPNPHHIBPEK_TRYSKIP_OFFSET UNITYSDK_OFFSET(0xB2C8030)

inline static constexpr unsigned int JPNPHHIBPEK_TypeDefinitionIndex = 72428;

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
