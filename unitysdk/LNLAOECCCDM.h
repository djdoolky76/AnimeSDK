#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
class HONBPDEJDCC;
class IDLLEGHGJMB;
class LIELJCGKNJN;
class LNLAOECCCDM;
class PCBNCBNOAAE;
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNLAOECCCDM_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xB7DFE90)
#define LNLAOECCCDM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB7DFD10)
#define LNLAOECCCDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DFDA0)
#define LNLAOECCCDM_DIOEAJEHHND_1_OFFSET UNITYSDK_OFFSET(0xB7DFF60)
#define LNLAOECCCDM_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB7DFDB0)
#define LNLAOECCCDM_EOHLKMEAOFD_OFFSET UNITYSDK_OFFSET(0xB7DFC50)
#define LNLAOECCCDM_GET_LEVELSTATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB7DF6E0)
#define LNLAOECCCDM_GET_LEVELSTATE_OFFSET UNITYSDK_OFFSET(0xB7DF6C0)
#define LNLAOECCCDM_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xB7DF700)
#define LNLAOECCCDM_GIMJBAEBPNL_OFFSET UNITYSDK_OFFSET(0xB7DFFD0)
#define LNLAOECCCDM_IHKHBIKDGBI_OFFSET UNITYSDK_OFFSET(0xB7DFA90)
#define LNLAOECCCDM_JICFKEOHHKH_OFFSET UNITYSDK_OFFSET(0xB7E09A0)
#define LNLAOECCCDM_JNCIINCECFN_OFFSET UNITYSDK_OFFSET(0xB7DFCB0)
#define LNLAOECCCDM_KHCOONBFOJO_OFFSET UNITYSDK_OFFSET(0xB7DFBF0)
#define LNLAOECCCDM_NBAICEOIOCB_OFFSET UNITYSDK_OFFSET(0xB7E14E0)
#define LNLAOECCCDM_OOIAOFDAJKA_OFFSET UNITYSDK_OFFSET(0xB7DF720)
#define LNLAOECCCDM_PLIGLOOCEEI_OFFSET UNITYSDK_OFFSET(0xB7E1AF0)
#define LNLAOECCCDM_SET_LEVELSTATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB7DF6F0)
#define LNLAOECCCDM_SET_LEVELSTATE_OFFSET UNITYSDK_OFFSET(0xB7DF6D0)
#define LNLAOECCCDM_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xB7DF710)

inline static constexpr unsigned int LNLAOECCCDM_TypeDefinitionIndex = 78108;

	class LNLAOECCCDM : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>* _Sections_k__BackingField; // 0x10
		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType _LevelState_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 _LevelStateStartTimestamp_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType get_LevelState()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_GET_LEVELSTATE_OFFSET))(this);
		}

		::System::Void set_LevelState(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + LNLAOECCCDM_SET_LEVELSTATE_OFFSET))(this, a1);
		}

		::System::UInt64 get_LevelStateStartTimestamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_GET_LEVELSTATESTARTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_LevelStateStartTimestamp(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LNLAOECCCDM_SET_LEVELSTATESTARTTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>* get_Sections()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_GET_SECTIONS_OFFSET))(this);
		}

		::System::Void set_Sections(::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>*))((::PBYTE)hIl2Cpp + LNLAOECCCDM_SET_SECTIONS_OFFSET))(this, a1);
		}

		::HONBPDEJDCC* OOIAOFDAJKA()
		{
			return ((::HONBPDEJDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_OOIAOFDAJKA_OFFSET))(this);
		}

		::System::Int32 IHKHBIKDGBI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_IHKHBIKDGBI_OFFSET))(this);
		}

		::System::UInt32 KHCOONBFOJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_KHCOONBFOJO_OFFSET))(this);
		}

		::System::UInt32 EOHLKMEAOFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_EOHLKMEAOFD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::LIELJCGKNJN*>* JNCIINCECFN()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LIELJCGKNJN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_JNCIINCECFN_OFFSET))(this);
		}

		static ::LNLAOECCCDM* BPLPBPMEODA(::IDLLEGHGJMB* a1)
		{
			return ((::LNLAOECCCDM*(*)(::IDLLEGHGJMB*))((::PBYTE)hIl2Cpp + LNLAOECCCDM_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::LNLAOECCCDM* BPLPBPMEODA_1(::PCBNCBNOAAE* a1)
		{
			return ((::LNLAOECCCDM*(*)(::PCBNCBNOAAE*))((::PBYTE)hIl2Cpp + LNLAOECCCDM_BPLPBPMEODA_1_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND(::IDLLEGHGJMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDLLEGHGJMB*))((::PBYTE)hIl2Cpp + LNLAOECCCDM_DIOEAJEHHND_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND_1(::PCBNCBNOAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCBNCBNOAAE*))((::PBYTE)hIl2Cpp + LNLAOECCCDM_DIOEAJEHHND_1_OFFSET))(this, a1);
		}

		::System::UInt32 GIMJBAEBPNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_GIMJBAEBPNL_OFFSET))(this);
		}

		::System::UInt32 JICFKEOHHKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_JICFKEOHHKH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceEffectDataItem*>* NBAICEOIOCB()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLAOECCCDM_NBAICEOIOCB_OFFSET))(this);
		}

		::System::Boolean PLIGLOOCEEI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNLAOECCCDM_PLIGLOOCEEI_OFFSET))(this, a1);
		}

	};
