#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEMPJKLAAPG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { class IGroup; }

#define CCPMKFLIKBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC75D7D0)
#define CCPMKFLIKBM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC75D9D0)
#define CCPMKFLIKBM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC75D990)
#define CCPMKFLIKBM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC75DF50)

	class CCPMKFLIKBM : public ::System::Object
	{
	public:
		::DEMPJKLAAPG* FBHBOJMPCIM; // 0x10
		::Entitas::IGroup* MGPDGDNOGJA; // 0x18
		::OAIPJANPCEK* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + CCPMKFLIKBM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMKFLIKBM_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMKFLIKBM_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMKFLIKBM_TEARDOWN_OFFSET))(this);
		}

	};
