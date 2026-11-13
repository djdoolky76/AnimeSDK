#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIJBPPGHLHD.h"
#include "unitysdk/NHFNHPGEPNB.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class GNKAKEONBPI;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MNKBPJBFBPM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBCOOJPNGDC_ADD_FEVEREXITED_OFFSET UNITYSDK_OFFSET(0x19DC96D0)
#define KBCOOJPNGDC_ALDJBBJPONJ_OFFSET UNITYSDK_OFFSET(0x19DCA570)
#define KBCOOJPNGDC_BHMPIIKGGPG_OFFSET UNITYSDK_OFFSET(0x19DCA860)
#define KBCOOJPNGDC_CIHBDIKMDLA_OFFSET UNITYSDK_OFFSET(0x19DC9790)
#define KBCOOJPNGDC_CJKGGADNPNP_OFFSET UNITYSDK_OFFSET(0x19DC9810)
#define KBCOOJPNGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x19DC9580)
#define KBCOOJPNGDC_FGKOBBMAPNA_OFFSET UNITYSDK_OFFSET(0x19DCA200)
#define KBCOOJPNGDC_IDKNGEOLEOO_OFFSET UNITYSDK_OFFSET(0x19DCA6B0)
#define KBCOOJPNGDC_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x19DC99E0)
#define KBCOOJPNGDC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x19DCADD0)
#define KBCOOJPNGDC_KKCCKPJKBCJ_OFFSET UNITYSDK_OFFSET(0x19DCA290)
#define KBCOOJPNGDC_KNKIMNEMDPK_OFFSET UNITYSDK_OFFSET(0x19DC98E0)
#define KBCOOJPNGDC_LBLOCEDHLED_OFFSET UNITYSDK_OFFSET(0x19DCA110)
#define KBCOOJPNGDC_LOAJBKIKNDP_OFFSET UNITYSDK_OFFSET(0x19DC9A40)
#define KBCOOJPNGDC_MHFAIPMNOGE_OFFSET UNITYSDK_OFFSET(0x19DC99A0)
#define KBCOOJPNGDC_NEFJIJGEFOH_OFFSET UNITYSDK_OFFSET(0x19DCABB0)
#define KBCOOJPNGDC_NNIBIGFLJJB_OFFSET UNITYSDK_OFFSET(0x19DC9C00)
#define KBCOOJPNGDC_REMOVE_FEVEREXITED_OFFSET UNITYSDK_OFFSET(0x19DC9730)

inline static constexpr unsigned int KBCOOJPNGDC_TypeDefinitionIndex = 79896;

	class KBCOOJPNGDC : public ::System::Object
	{
	public:
		::System::Nullable_1<::NHFNHPGEPNB> FJLAKANGNEF; // 0x10
		::System::Byte _padding0[0x20];
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x38
		::System::Collections::Generic::List_1<::System::Action*>* LLPJOLPGNIE; // 0x40
		::System::Action* FeverExited; // 0x48
		::MNKBPJBFBPM* GIHELDCNHGJ; // 0x50
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x58
		::GNKAKEONBPI* OJAGDPJEMPN; // 0x60
		::System::Nullable_1<::IIJBPPGHLHD> CLKEPOJFDPD; // 0x68
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::GNKAKEONBPI* a2, ::HLJNBBHKKMI* a3, ::MNKBPJBFBPM* a4)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::GNKAKEONBPI*, ::HLJNBBHKKMI*, ::MNKBPJBFBPM*))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void add_FeverExited(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_ADD_FEVEREXITED_OFFSET))(this, a1);
		}

		::System::Void remove_FeverExited(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_REMOVE_FEVEREXITED_OFFSET))(this, a1);
		}

		::System::Void CIHBDIKMDLA(::IIJBPPGHLHD a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIJBPPGHLHD))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_CIHBDIKMDLA_OFFSET))(this, a1);
		}

		::IIJBPPGHLHD KNKIMNEMDPK()
		{
			return ((::IIJBPPGHLHD(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_KNKIMNEMDPK_OFFSET))(this);
		}

		::System::Boolean MHFAIPMNOGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_MHFAIPMNOGE_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Boolean LOAJBKIKNDP(::NHFNHPGEPNB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHFNHPGEPNB))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_LOAJBKIKNDP_OFFSET))(this, a1);
		}

		::System::Void CJKGGADNPNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_CJKGGADNPNP_OFFSET))(this);
		}

		::System::Void NNIBIGFLJJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_NNIBIGFLJJB_OFFSET))(this);
		}

		::System::Void KKCCKPJKBCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_KKCCKPJKBCJ_OFFSET))(this);
		}

		::System::Void LBLOCEDHLED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_LBLOCEDHLED_OFFSET))(this);
		}

		::System::Void FGKOBBMAPNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_FGKOBBMAPNA_OFFSET))(this);
		}

		::System::Void IDKNGEOLEOO(::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID, ::System::String*))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_IDKNGEOLEOO_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean BHMPIIKGGPG(::LPHINGPIEAJ* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::System::String*))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_BHMPIIKGGPG_OFFSET))(a1, a2);
		}

		static ::System::Void NEFJIJGEFOH(::LPHINGPIEAJ* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::LPHINGPIEAJ*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_NEFJIJGEFOH_OFFSET))(a1, a2, a3);
		}

		::System::Void ALDJBBJPONJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_ALDJBBJPONJ_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
