#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class HPKACEPPPCA;
class KLEFGGIHGMI;
namespace System { class String; }

#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA81FA0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS24_0__ONSTREAMINGINSTANCECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xDA852E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PartialFlipDeviceComponent___c__DisplayClass24_0_TypeDefinitionIndex = 73320;

	class PartialFlipDeviceComponent___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::HPKACEPPPCA* instance; // 0x10
		::KLEFGGIHGMI* block; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnStreamingInstanceChange_b__0(::System::ValueTuple_2<::System::String*, ::System::String*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS24_0__ONSTREAMINGINSTANCECHANGE_B__0_OFFSET))(this, a1);
		}

	};
}
