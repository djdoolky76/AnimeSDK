#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B2F70F41B9C3250D_BF3B0A1C68CF188E_E8740A24A94F4750_OFFSET UNITYSDK_OFFSET(0x41430D0)
#define B2F70F41B9C3250D_BF3B0A1C68CF188E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace B2F70F41B9C3250D
{
	inline static constexpr unsigned int BF3B0A1C68CF188E_TypeDefinitionIndex = 17220;

	class BF3B0A1C68CF188E : public ::System::Object
	{
	public:
		static ::System::String* E8740A24A94F4750(::System::String* FCEC930BC087C085)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + B2F70F41B9C3250D_BF3B0A1C68CF188E_E8740A24A94F4750_OFFSET))(FCEC930BC087C085);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2F70F41B9C3250D_BF3B0A1C68CF188E__CTOR_OFFSET))(this);
		}
	};
}
