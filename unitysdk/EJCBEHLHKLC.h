#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GHCECAKHKJP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define EJCBEHLHKLC_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x154D7A40)
#define EJCBEHLHKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x154D7B00)
#define EJCBEHLHKLC_GET_BASICADD_OFFSET UNITYSDK_OFFSET(0x154D79E0)
#define EJCBEHLHKLC_GET_BASIC_OFFSET UNITYSDK_OFFSET(0x154D79C0)
#define EJCBEHLHKLC_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x154D7A20)
#define EJCBEHLHKLC_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x154D7A00)
#define EJCBEHLHKLC_SET_BASICADD_OFFSET UNITYSDK_OFFSET(0x154D79F0)
#define EJCBEHLHKLC_SET_BASIC_OFFSET UNITYSDK_OFFSET(0x154D79D0)
#define EJCBEHLHKLC_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x154D7A30)
#define EJCBEHLHKLC_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x154D7A10)

inline static constexpr unsigned int EJCBEHLHKLC_TypeDefinitionIndex = 62710;

	class EJCBEHLHKLC : public ::System::Object
	{
	public:
		::GHCECAKHKJP* _Basic_k__BackingField; // 0x10
		::GHCECAKHKJP* _Delta_k__BackingField; // 0x18
		::GHCECAKHKJP* _BasicAdd_k__BackingField; // 0x20
		::GHCECAKHKJP* _Ratio_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_CTOR_OFFSET))(this);
		}

		::GHCECAKHKJP* get_Basic()
		{
			return ((::GHCECAKHKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_GET_BASIC_OFFSET))(this);
		}

		::System::Void set_Basic(::GHCECAKHKJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_SET_BASIC_OFFSET))(this, a1);
		}

		::GHCECAKHKJP* get_BasicAdd()
		{
			return ((::GHCECAKHKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_GET_BASICADD_OFFSET))(this);
		}

		::System::Void set_BasicAdd(::GHCECAKHKJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_SET_BASICADD_OFFSET))(this, a1);
		}

		::GHCECAKHKJP* get_Ratio()
		{
			return ((::GHCECAKHKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::GHCECAKHKJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_SET_RATIO_OFFSET))(this, a1);
		}

		::GHCECAKHKJP* get_Delta()
		{
			return ((::GHCECAKHKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_Delta(::GHCECAKHKJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_SET_DELTA_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + EJCBEHLHKLC_CALCULATEVALUE_OFFSET))(this, a1);
		}

	};
