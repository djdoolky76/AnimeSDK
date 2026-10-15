#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GHCECAKHKJP;
class JFIGEFGFEDP;
namespace System { class Object; }

#define JFIGEFGFEDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1664EF70)
#define JFIGEFGFEDP_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1664EE90)
#define JFIGEFGFEDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1664EC70)
#define JFIGEFGFEDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1664EBE0)
#define JFIGEFGFEDP_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1664EDB0)
#define JFIGEFGFEDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1664ED70)
#define JFIGEFGFEDP_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1664EBC0)
#define JFIGEFGFEDP_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1664EBD0)

inline static constexpr unsigned int JFIGEFGFEDP_TypeDefinitionIndex = 51966;

	class JFIGEFGFEDP : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIGEFGFEDP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIGEFGFEDP_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + JFIGEFGFEDP_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::GHCECAKHKJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + JFIGEFGFEDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFIGEFGFEDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIGEFGFEDP_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::JFIGEFGFEDP* a1, ::JFIGEFGFEDP* a2)
		{
			return ((::System::Boolean(*)(::JFIGEFGFEDP*, ::JFIGEFGFEDP*))((::PBYTE)hIl2Cpp + JFIGEFGFEDP_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::JFIGEFGFEDP* a1, ::JFIGEFGFEDP* a2)
		{
			return ((::System::Boolean(*)(::JFIGEFGFEDP*, ::JFIGEFGFEDP*))((::PBYTE)hIl2Cpp + JFIGEFGFEDP_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
