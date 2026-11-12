#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }

#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xD1E7D00)
#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD1E4B60)
#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_GET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xD1E7C80)
#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xD1E7CA0)
#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_SET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xD1E7C90)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int IconBillboardData_TypeDefinitionIndex = 77307;

	class IconBillboardData : public ::System::Object
	{
	public:
		::System::String* _TypeIconPath_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_CTOR_OFFSET))(this);
		}

		::System::String* get_TypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_GET_TYPEICONPATH_OFFSET))(this);
		}

		::System::Void set_TypeIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_SET_TYPEICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_CLONE_OFFSET))(this);
		}

	};
}
