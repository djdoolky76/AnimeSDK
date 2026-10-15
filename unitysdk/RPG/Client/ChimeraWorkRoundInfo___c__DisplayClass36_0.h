#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS36_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCB6C020)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS36_0__ISCURRENTROUNDMISSIONOPTIONFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xCB6CCA0)

namespace RPG::Client
{
	class ChimeraWorkRoundInfo___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS36_0_CTOR_OFFSET))(this);
		}

		::System::Void _IsCurrentRoundMissionOptionFinish_b__0(::System::Collections::Generic::IEnumerable_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS36_0__ISCURRENTROUNDMISSIONOPTIONFINISH_B__0_OFFSET))(this, a1);
		}

	};
}
