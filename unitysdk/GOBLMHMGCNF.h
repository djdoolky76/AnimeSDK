#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBAOKOHKCF.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class GOBLMHMGCNF;
namespace System { class String; }

#define GOBLMHMGCNF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B27200)
#define GOBLMHMGCNF_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0x15B270E0)
#define GOBLMHMGCNF_GET_ICON_OFFSET UNITYSDK_OFFSET(0x15B27250)
#define GOBLMHMGCNF_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x15B27270)
#define GOBLMHMGCNF_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B27230)
#define GOBLMHMGCNF_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x15B27290)
#define GOBLMHMGCNF_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15B27210)
#define GOBLMHMGCNF_SET_ICON_OFFSET UNITYSDK_OFFSET(0x15B27260)
#define GOBLMHMGCNF_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x15B27280)
#define GOBLMHMGCNF_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15B27240)
#define GOBLMHMGCNF_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x15B272A0)
#define GOBLMHMGCNF_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15B27220)

inline static constexpr unsigned int GOBLMHMGCNF_TypeDefinitionIndex = 76378;

	class GOBLMHMGCNF : public ::System::Object
	{
	public:
		::System::String* _Icon_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::Int32 _Order_k__BackingField; // 0x28
		::System::Boolean _IsShow_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::GLBAOKOHKCF _PropertyType_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_CTOR_OFFSET))(this);
		}

		static ::GOBLMHMGCNF* FLFLCMEJEPM(::GLBAOKOHKCF a1)
		{
			return ((::GOBLMHMGCNF*(*)(::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_FLFLCMEJEPM_OFFSET))(a1);
		}

		::GLBAOKOHKCF get_PropertyType()
		{
			return ((::GLBAOKOHKCF(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::GLBAOKOHKCF a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_GET_ICON_OFFSET))(this);
		}

		::System::Void set_Icon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_SET_ICON_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOBLMHMGCNF_SET_ORDER_OFFSET))(this, a1);
		}

	};
