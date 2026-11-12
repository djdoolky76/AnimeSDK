#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPFEPCCHCND.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertGamePhase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define HLDFALLAPPH_CBCAJPFIKKH_OFFSET UNITYSDK_OFFSET(0x16CB6120)
#define HLDFALLAPPH_CTOR_OFFSET UNITYSDK_OFFSET(0x16CB6210)
#define HLDFALLAPPH_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x16CB6060)
#define HLDFALLAPPH_GET_CURRENTTOAST_OFFSET UNITYSDK_OFFSET(0x16CB5F80)
#define HLDFALLAPPH_GET_ISDEVICEAUTOMATIONSUSPENDED_OFFSET UNITYSDK_OFFSET(0x16CB5FB0)
#define HLDFALLAPPH_GET_ISINPUTBLOCKED_OFFSET UNITYSDK_OFFSET(0x16CB5FD0)
#define HLDFALLAPPH_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x16CB5F60)
#define HLDFALLAPPH_JCHFPJLJNEK_OFFSET UNITYSDK_OFFSET(0x16CB6170)
#define HLDFALLAPPH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16CB61C0)
#define HLDFALLAPPH_PKLJJDCDPHB_OFFSET UNITYSDK_OFFSET(0x16CB60C0)
#define HLDFALLAPPH_PNNIIBFEKBK_OFFSET UNITYSDK_OFFSET(0x16CB5FF0)
#define HLDFALLAPPH_SET_CURRENTTOAST_OFFSET UNITYSDK_OFFSET(0x16CB5FA0)
#define HLDFALLAPPH_SET_ISDEVICEAUTOMATIONSUSPENDED_OFFSET UNITYSDK_OFFSET(0x16CB5FC0)
#define HLDFALLAPPH_SET_ISINPUTBLOCKED_OFFSET UNITYSDK_OFFSET(0x16CB5FE0)
#define HLDFALLAPPH_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x16CB5F70)

inline static constexpr unsigned int HLDFALLAPPH_TypeDefinitionIndex = 79899;

	class HLDFALLAPPH : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase _Phase_k__BackingField; // 0x10
		::System::Nullable_1<::DPFEPCCHCND> _CurrentToast_k__BackingField; // 0x14
		::System::Byte _padding0[0x4];
		::System::Boolean _IsInputBlocked_k__BackingField; // 0x20
		::System::Boolean _IsDeviceAutomationSuspended_k__BackingField; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDFALLAPPH_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase get_Phase()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDFALLAPPH_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + HLDFALLAPPH_SET_PHASE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::DPFEPCCHCND> get_CurrentToast()
		{
			return ((::System::Nullable_1<::DPFEPCCHCND>(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDFALLAPPH_GET_CURRENTTOAST_OFFSET))(this);
		}

		::System::Void set_CurrentToast(::System::Nullable_1<::DPFEPCCHCND> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::DPFEPCCHCND>))((::PBYTE)hIl2Cpp + HLDFALLAPPH_SET_CURRENTTOAST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDeviceAutomationSuspended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDFALLAPPH_GET_ISDEVICEAUTOMATIONSUSPENDED_OFFSET))(this);
		}

		::System::Void set_IsDeviceAutomationSuspended(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLDFALLAPPH_SET_ISDEVICEAUTOMATIONSUSPENDED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInputBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDFALLAPPH_GET_ISINPUTBLOCKED_OFFSET))(this);
		}

		::System::Void set_IsInputBlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLDFALLAPPH_SET_ISINPUTBLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean PNNIIBFEKBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDFALLAPPH_PNNIIBFEKBK_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + HLDFALLAPPH_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Void PKLJJDCDPHB(::DPFEPCCHCND a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPFEPCCHCND))((::PBYTE)hIl2Cpp + HLDFALLAPPH_PKLJJDCDPHB_OFFSET))(this, a1);
		}

		::System::Void CBCAJPFIKKH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLDFALLAPPH_CBCAJPFIKKH_OFFSET))(this, a1);
		}

		::System::Void JCHFPJLJNEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLDFALLAPPH_JCHFPJLJNEK_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDFALLAPPH_KHGIKBFDLFB_OFFSET))(this);
		}

	};
