#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTUNLOCKREASONPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA04640)
#define RPG_CLIENT_GRIDFIGHTUNLOCKREASONPROVIDER_GETREASON_OFFSET UNITYSDK_OFFSET(0x1CA04410)
#define RPG_CLIENT_GRIDFIGHTUNLOCKREASONPROVIDER__GETPAMKINGREASON_OFFSET UNITYSDK_OFFSET(0x1CA044C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUnlockReasonProvider_TypeDefinitionIndex = 66744;

	class GridFightUnlockReasonProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKREASONPROVIDER_CTOR_OFFSET))(this);
		}

		::System::String* GetReason(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKREASONPROVIDER_GETREASON_OFFSET))(this, a1);
		}

		static ::System::String* _GetPamKingReason()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKREASONPROVIDER__GETPAMKINGREASON_OFFSET))();
		}

	};
}
