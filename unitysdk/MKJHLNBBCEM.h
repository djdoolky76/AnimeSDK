#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GHCECAKHKJP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define MKJHLNBBCEM_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0xB992C40)
#define MKJHLNBBCEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB992CA0)
#define MKJHLNBBCEM_GET_BASIC_OFFSET UNITYSDK_OFFSET(0xB992C20)
#define MKJHLNBBCEM_SET_BASIC_OFFSET UNITYSDK_OFFSET(0xB992C30)

inline static constexpr unsigned int MKJHLNBBCEM_TypeDefinitionIndex = 62712;

	class MKJHLNBBCEM : public ::System::Object
	{
	public:
		::GHCECAKHKJP* _Basic_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJHLNBBCEM_CTOR_OFFSET))(this);
		}

		::GHCECAKHKJP* get_Basic()
		{
			return ((::GHCECAKHKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJHLNBBCEM_GET_BASIC_OFFSET))(this);
		}

		::System::Void set_Basic(::GHCECAKHKJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + MKJHLNBBCEM_SET_BASIC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + MKJHLNBBCEM_CALCULATEVALUE_OFFSET))(this, a1);
		}

	};
