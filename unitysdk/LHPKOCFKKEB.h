#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHPKOCFKKEB;
namespace RPG::Client::Billboard { class IBillboardTypeData; }

#define LHPKOCFKKEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCD3D90)
#define LHPKOCFKKEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1BCD3D50)
#define LHPKOCFKKEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD3D00)
#define LHPKOCFKKEB_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BCD3CD0)
#define LHPKOCFKKEB_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BCD3D10)

inline static constexpr unsigned int LHPKOCFKKEB_TypeDefinitionIndex = 77313;

	class LHPKOCFKKEB : public ::System::Object
	{
	public:
		static ::LHPKOCFKKEB** StaticGet__Instance_k__BackingField()
		{
			return (::LHPKOCFKKEB**)UnitySDK::FromName("", "LHPKOCFKKEB")->GetStaticField(0x671C0);
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
