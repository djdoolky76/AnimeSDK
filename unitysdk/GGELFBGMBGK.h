#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GGELFBGMBGK;
class GHCECAKHKJP;
namespace System { class Object; }

#define GGELFBGMBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A03260)
#define GGELFBGMBGK_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x15A035B0)
#define GGELFBGMBGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15A03320)
#define GGELFBGMBGK_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x15A03380)
#define GGELFBGMBGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x15A03270)
#define GGELFBGMBGK_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x15A034D0)
#define GGELFBGMBGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15A03490)
#define GGELFBGMBGK_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15A03250)

	class GGELFBGMBGK : public ::System::Object
	{
	public:
		::RPG::GameCore::IdleLiveAvatarPropertyType _PropertyType_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + GGELFBGMBGK_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::IdleLiveAvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + GGELFBGMBGK_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::GHCECAKHKJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + GGELFBGMBGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGELFBGMBGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGELFBGMBGK*))((::PBYTE)hIl2Cpp + GGELFBGMBGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGELFBGMBGK_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGELFBGMBGK_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::GGELFBGMBGK* a1, ::GGELFBGMBGK* a2)
		{
			return ((::System::Boolean(*)(::GGELFBGMBGK*, ::GGELFBGMBGK*))((::PBYTE)hIl2Cpp + GGELFBGMBGK_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::GGELFBGMBGK* a1, ::GGELFBGMBGK* a2)
		{
			return ((::System::Boolean(*)(::GGELFBGMBGK*, ::GGELFBGMBGK*))((::PBYTE)hIl2Cpp + GGELFBGMBGK_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
