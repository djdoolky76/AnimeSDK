#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FiveDimStaffRollUISlot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19ADAC00)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19ADAC40)
#define RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT___C___ENSUREINITIALIZED_B__13_0_OFFSET UNITYSDK_OFFSET(0x19ADAC50)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimStaffRollUISlot___c_TypeDefinitionIndex = 61687;

	class FiveDimStaffRollUISlot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67E10);
		}

		static ::System::Action_1<::RPG::Client::FiveDimStaffRollUISlot*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::RPG::Client::FiveDimStaffRollUISlot*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT___C_CTOR_OFFSET))(this);
		}

		::System::Void __EnsureInitialized_b__13_0(::RPG::Client::FiveDimStaffRollUISlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimStaffRollUISlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFROLLUISLOT___C___ENSUREINITIALIZED_B__13_0_OFFSET))(this, a1);
		}

	};
}
