#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/OutlinePost/TrainPartyBuildOutlineState.h"
#include "unitysdk/System/Object.h"
class GJCFMFEAEBG;

#define GJCFMFEAEBG_CDBDNCNBDBC_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15A51270)
#define GJCFMFEAEBG_CDBDNCNBDBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A51220)
#define GJCFMFEAEBG_CDBDNCNBDBC_GET_STATE_OFFSET UNITYSDK_OFFSET(0x15A512B0)
#define GJCFMFEAEBG_CDBDNCNBDBC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15A51230)
#define GJCFMFEAEBG_CDBDNCNBDBC_SET_STATE_OFFSET UNITYSDK_OFFSET(0x15A512C0)

inline static constexpr unsigned int GJCFMFEAEBG_CDBDNCNBDBC_TypeDefinitionIndex = 74371;

	class GJCFMFEAEBG_CDBDNCNBDBC : public ::System::Object
	{
	public:
		::GJCFMFEAEBG* ADMKLAHAHAM; // 0x10
		::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState _State_k__BackingField; // 0x18
		::System::Void _ctor(::GJCFMFEAEBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJCFMFEAEBG*))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_CDBDNCNBDBC_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_CDBDNCNBDBC_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_CDBDNCNBDBC_CHAHBFGGIDL_OFFSET))(this);
		}

		::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState get_State()
		{
			return ((::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_CDBDNCNBDBC_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_CDBDNCNBDBC_SET_STATE_OFFSET))(this, a1);
		}

	};
