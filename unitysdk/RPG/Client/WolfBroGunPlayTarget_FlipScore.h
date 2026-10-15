#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
class FICJADOJGMF;
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0xE46CEB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_INIT_OFFSET UNITYSDK_OFFSET(0xE46CD90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_OJADEICOEHL_OFFSET UNITYSDK_OFFSET(0xE46CE00)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_FlipScore_TypeDefinitionIndex = 68726;

	class WolfBroGunPlayTarget_FlipScore : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Single positiveScore; // 0xD8
		::System::Single negativeScore; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_CTOR_OFFSET))(this);
		}

		::System::Void Init(::FICJADOJGMF* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void OJADEICOEHL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_OJADEICOEHL_OFFSET))(this, a1);
		}

	};
}
