#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_USERLOCALDATAITEM_OPMGFFNLNJA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5CD20)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_OPMGFFNLNJA_TypeDefinitionIndex = 89801;

	class UserLocalDataItem_OPMGFFNLNJA : public ::System::Object
	{
	public:
		::System::Boolean KGNNFBDBHIK; // 0x10
		::System::Boolean HDKKIFIJOFO; // 0x11
		::System::Boolean HMCHHJPDNIL; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_OPMGFFNLNJA__CTOR_OFFSET))(this);
		}
	};
}
