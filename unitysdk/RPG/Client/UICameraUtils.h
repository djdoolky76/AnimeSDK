#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ICameraFightState; }

#define RPG_CLIENT_UICAMERAUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0xEDF19B0)
#define RPG_CLIENT_UICAMERAUTILS_GETSELECTDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xEDF1890)

namespace RPG::Client
{
	inline static constexpr unsigned int UICameraUtils_TypeDefinitionIndex = 75282;

	class UICameraUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICAMERAUTILS_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ICameraFightState* GetSelectDarkTeamEntity()
		{
			return ((::RPG::Client::ICameraFightState*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UICAMERAUTILS_GETSELECTDARKTEAMENTITY_OFFSET))();
		}

	};
}
