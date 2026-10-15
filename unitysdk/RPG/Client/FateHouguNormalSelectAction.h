#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateHouguSelectBgType.h"
#include "unitysdk/System/Object.h"
class DAFHOKGICNG;
namespace RPG::Client { class FateHouguDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_CONFIRMHOUGUSELECTION_OFFSET UNITYSDK_OFFSET(0xCEA4300)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xCEA39B0)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEA4270)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xCEA44D0)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_BGTYPE_OFFSET UNITYSDK_OFFSET(0xCEA4550)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0xCEA4510)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0xCEA44F0)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xCEA44E0)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_SET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0xCEA4500)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xCEA3D60)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguNormalSelectAction_TypeDefinitionIndex = 64084;

	class FateHouguNormalSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _SelectHouguData_k__BackingField; // 0x10
		::System::UInt32 _ActionID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::DAFHOKGICNG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DAFHOKGICNG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ConfirmHouguSelection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_CONFIRMHOUGUSELECTION_OFFSET))(this, a1);
		}

		::System::Void _Construct(::DAFHOKGICNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAFHOKGICNG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION__CONSTRUCT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_SelectHouguData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_SELECTHOUGUDATA_OFFSET))(this);
		}

		::System::Void set_SelectHouguData(::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_SET_SELECTHOUGUDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_ISINBATTLE_OFFSET))(this);
		}

		::RPG::Client::FateHouguSelectBgType get_BgType()
		{
			return ((::RPG::Client::FateHouguSelectBgType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_BGTYPE_OFFSET))(this);
		}

	};
}
