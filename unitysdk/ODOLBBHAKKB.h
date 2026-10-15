#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ODOLBBHAKKB_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF1C50)
#define ODOLBBHAKKB_GET_GENDER_OFFSET UNITYSDK_OFFSET(0xBDF1C30)
#define ODOLBBHAKKB_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBDF1C10)
#define ODOLBBHAKKB_SET_GENDER_OFFSET UNITYSDK_OFFSET(0xBDF1C40)
#define ODOLBBHAKKB_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBDF1C20)

	class ODOLBBHAKKB : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::RPG::GameCore::GenderType _Gender_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOLBBHAKKB_CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOLBBHAKKB_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODOLBBHAKKB_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::GenderType get_Gender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOLBBHAKKB_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::RPG::GameCore::GenderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + ODOLBBHAKKB_SET_GENDER_OFFSET))(this, a1);
		}

	};
