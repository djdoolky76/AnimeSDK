#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHPKOCFKKEB;
namespace RPG::Client::Billboard { class IBillboardTypeData; }

#define LHPKOCFKKEB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6BB350)
#define LHPKOCFKKEB_CLONE_OFFSET UNITYSDK_OFFSET(0xB6BB310)
#define LHPKOCFKKEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BB2C0)
#define LHPKOCFKKEB_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB6BB290)
#define LHPKOCFKKEB_ISVALID_OFFSET UNITYSDK_OFFSET(0xB6BB2D0)

inline static constexpr unsigned int LHPKOCFKKEB_TypeDefinitionIndex = 74986;

	class LHPKOCFKKEB : public ::System::Object
	{
	public:
		static ::LHPKOCFKKEB** StaticGet__Instance_k__BackingField()
		{
			return (::LHPKOCFKKEB**)UnitySDK::FromName("", "LHPKOCFKKEB")->GetStaticField(0x635A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPKOCFKKEB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHPKOCFKKEB_CCTOR_OFFSET))();
		}

		static ::LHPKOCFKKEB* get_Instance()
		{
			return ((::LHPKOCFKKEB*(*)())((::PBYTE)hIl2Cpp + LHPKOCFKKEB_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPKOCFKKEB_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPKOCFKKEB_CLONE_OFFSET))(this);
		}

	};
