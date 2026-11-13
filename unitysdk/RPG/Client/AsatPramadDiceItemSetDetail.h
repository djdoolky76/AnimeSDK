#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_ASATPRAMADDICEITEMSETDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9E2E0)
#define RPG_CLIENT_ASATPRAMADDICEITEMSETDETAIL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1CA9E310)
#define RPG_CLIENT_ASATPRAMADDICEITEMSETDETAIL_GET_DISPLAYITEMID_OFFSET UNITYSDK_OFFSET(0x1CA9E300)
#define RPG_CLIENT_ASATPRAMADDICEITEMSETDETAIL_GET_SETNAME_OFFSET UNITYSDK_OFFSET(0x1CA9E2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AsatPramadDiceItemSetDetail_TypeDefinitionIndex = 68795;

	class AsatPramadDiceItemSetDetail : public ::System::Object
	{
	public:
		::System::String* _Description_k__BackingField; // 0x10
		::System::UInt32 _DisplayItemID_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _SetName_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMSETDETAIL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID get_SetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMSETDETAIL_GET_SETNAME_OFFSET))(this);
		}

		::System::UInt32 get_DisplayItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMSETDETAIL_GET_DISPLAYITEMID_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMSETDETAIL_GET_DESCRIPTION_OFFSET))(this);
		}

	};
}
