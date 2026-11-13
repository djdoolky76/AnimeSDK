#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLKEPPAFKNF;
class ILGDFJMKOEC;
namespace RPG::Client { class MonopolySelectOptionDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D80A800)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D811C70)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GETOPTIONRATIO_OFFSET UNITYSDK_OFFSET(0x1D811C80)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1D811DA0)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_ISSHOWOPTIONRATIO_OFFSET UNITYSDK_OFFSET(0x1D811E00)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x1D811DC0)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_OPTIONRATIODATAS_OFFSET UNITYSDK_OFFSET(0x1D811DE0)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1D811DB0)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x1D811DD0)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_OPTIONRATIODATAS_OFFSET UNITYSDK_OFFSET(0x1D811DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolySelectOptionDisplayData_TypeDefinitionIndex = 68226;

	class MonopolySelectOptionDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BLKEPPAFKNF*>* _OptionRatioDatas_k__BackingField; // 0x10
		::System::UInt32 _EventID_k__BackingField; // 0x18
		::System::UInt32 _OptionID_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolySelectOptionDisplayData* Create(::ILGDFJMKOEC* a1)
		{
			return ((::RPG::Client::MonopolySelectOptionDisplayData*(*)(::ILGDFJMKOEC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 GetOptionRatio(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GETOPTIONRATIO_OFFSET))(this, a1);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_OPTIONID_OFFSET))(this);
		}

		::System::Void set_OptionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_OPTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::BLKEPPAFKNF*>* get_OptionRatioDatas()
		{
			return ((::System::Collections::Generic::List_1<::BLKEPPAFKNF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_OPTIONRATIODATAS_OFFSET))(this);
		}

		::System::Void set_OptionRatioDatas(::System::Collections::Generic::List_1<::BLKEPPAFKNF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BLKEPPAFKNF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_OPTIONRATIODATAS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowOptionRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_ISSHOWOPTIONRATIO_OFFSET))(this);
		}

	};
}
