#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class GNDBFODAHFK;
namespace System { class Object; }
namespace System { class String; }

#define CEOHIFAFKLH_CTOR_OFFSET UNITYSDK_OFFSET(0xC9E6DA0)
#define CEOHIFAFKLH_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xC9E7480)
#define CEOHIFAFKLH_EBBPHHGFCMK_OFFSET UNITYSDK_OFFSET(0xC9E75D0)
#define CEOHIFAFKLH_HFMACMMKHBF_OFFSET UNITYSDK_OFFSET(0xC9E7510)
#define CEOHIFAFKLH_HHLEFEDHMCB_OFFSET UNITYSDK_OFFSET(0xC9E7560)
#define CEOHIFAFKLH_IOCGFDMIHNA_OFFSET UNITYSDK_OFFSET(0xC9E7940)
#define CEOHIFAFKLH_JHFNJDOKFHD_OFFSET UNITYSDK_OFFSET(0xC9E74C0)
#define CEOHIFAFKLH_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0xC9E7360)
#define CEOHIFAFKLH__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC9E6E10)
#define CEOHIFAFKLH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC9E73F0)

inline static constexpr unsigned int CEOHIFAFKLH_TypeDefinitionIndex = 72750;

	class CEOHIFAFKLH : public ::RPG::Client::UIController
	{
	public:
		::System::String* NGPDLFOAGOC; // 0x190
		::System::UInt32 MMFAJHOBJJH; // 0x198
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHIFAFKLH_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHIFAFKLH__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHIFAFKLH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JHFNJDOKFHD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEOHIFAFKLH_JHFNJDOKFHD_OFFSET))(this, a1);
		}

		::System::Void HFMACMMKHBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEOHIFAFKLH_HFMACMMKHBF_OFFSET))(this, a1);
		}

		::System::Void HHLEFEDHMCB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEOHIFAFKLH_HHLEFEDHMCB_OFFSET))(this, a1);
		}

		::System::Void EBBPHHGFCMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEOHIFAFKLH_EBBPHHGFCMK_OFFSET))(this, a1);
		}

		::System::Void IOCGFDMIHNA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEOHIFAFKLH_IOCGFDMIHNA_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHIFAFKLH_DIOEAJEHHND_OFFSET))(this);
		}

		::GNDBFODAHFK* OICGPNAMNAI()
		{
			return ((::GNDBFODAHFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHIFAFKLH_OICGPNAMNAI_OFFSET))(this);
		}

	};
