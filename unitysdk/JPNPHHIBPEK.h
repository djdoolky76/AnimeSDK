#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletStepState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class IBookletView; }

#define JPNPHHIBPEK_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xBB52490)
#define JPNPHHIBPEK_AJKDGPJKLMC_OFFSET UNITYSDK_OFFSET(0xBB525C0)
#define JPNPHHIBPEK_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xBB52110)
#define JPNPHHIBPEK_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0xBB523C0)
#define JPNPHHIBPEK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB52610)
#define JPNPHHIBPEK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xBB52410)
#define JPNPHHIBPEK_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xBB524F0)
#define JPNPHHIBPEK_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0xBB51EB0)
#define JPNPHHIBPEK_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xBB52530)
#define JPNPHHIBPEK_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBB52370)
#define JPNPHHIBPEK_GET_STATE_OFFSET UNITYSDK_OFFSET(0xBB51DD0)
#define JPNPHHIBPEK_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xBB51D60)
#define JPNPHHIBPEK_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xBB51D80)
#define JPNPHHIBPEK_HKACGHCGHPA_OFFSET UNITYSDK_OFFSET(0xBB522A0)
#define JPNPHHIBPEK_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xBB52050)
#define JPNPHHIBPEK_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0xBB52570)
#define JPNPHHIBPEK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBB51DF0)
#define JPNPHHIBPEK_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0xBB52450)
#define JPNPHHIBPEK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBB51F70)
#define JPNPHHIBPEK_SET_STATE_OFFSET UNITYSDK_OFFSET(0xBB51DE0)
#define JPNPHHIBPEK_SET_VIEW_OFFSET UNITYSDK_OFFSET(0xBB51D70)
#define JPNPHHIBPEK_TRYSKIP_OFFSET UNITYSDK_OFFSET(0xBB521D0)

inline static constexpr unsigned int JPNPHHIBPEK_TypeDefinitionIndex = 74508;

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
