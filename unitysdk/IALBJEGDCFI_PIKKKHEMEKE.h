#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IALBJEGDCFI_HCBKBKPNDKB.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define IALBJEGDCFI_PIKKKHEMEKE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0C5A0)
#define IALBJEGDCFI_PIKKKHEMEKE_GET_MUTABLESHOULDHINTROTATIONIMPROPER_OFFSET UNITYSDK_OFFSET(0x15E0C510)
#define IALBJEGDCFI_PIKKKHEMEKE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x15E0C4F0)
#define IALBJEGDCFI_PIKKKHEMEKE_HNEADNPJHEB_OFFSET UNITYSDK_OFFSET(0x15E0C560)
#define IALBJEGDCFI_PIKKKHEMEKE_OIDLGEHDOOE_OFFSET UNITYSDK_OFFSET(0x15E0C520)
#define IALBJEGDCFI_PIKKKHEMEKE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x15E0C500)

inline static constexpr unsigned int IALBJEGDCFI_PIKKKHEMEKE_TypeDefinitionIndex = 79495;

	class IALBJEGDCFI_PIKKKHEMEKE : public ::IALBJEGDCFI_HCBKBKPNDKB
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* _MutableShouldHintRotationImproper_k__BackingField; // 0x10
		::RPG::Client::MechCraft::MechCraftRotationType _Rotation_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_PIKKKHEMEKE_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftRotationType get_Rotation()
		{
			return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_PIKKKHEMEKE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::RPG::Client::MechCraft::MechCraftRotationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + IALBJEGDCFI_PIKKKHEMEKE_SET_ROTATION_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_MutableShouldHintRotationImproper()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_PIKKKHEMEKE_GET_MUTABLESHOULDHINTROTATIONIMPROPER_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* OIDLGEHDOOE()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_PIKKKHEMEKE_OIDLGEHDOOE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftRotationType HNEADNPJHEB()
		{
			return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_PIKKKHEMEKE_HNEADNPJHEB_OFFSET))(this);
		}

	};
