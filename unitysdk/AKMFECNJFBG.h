#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJOADPKDFLC;
class HEKHCLACHJE;

#define AKMFECNJFBG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD3650)
#define AKMFECNJFBG_GET_INTEGRATIONMAXPERCENT_OFFSET UNITYSDK_OFFSET(0x12CD3610)
#define AKMFECNJFBG_GET_INTEGRATIONPRODUCTPERCENT_OFFSET UNITYSDK_OFFSET(0x12CD3630)
#define AKMFECNJFBG_GET_PRODUCTATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x12CD3590)
#define AKMFECNJFBG_GET_PRODUCTATTRIBUTEVALUES_OFFSET UNITYSDK_OFFSET(0x12CD3570)
#define AKMFECNJFBG_GET_PRODUCTTRAITS_OFFSET UNITYSDK_OFFSET(0x12CD35F0)
#define AKMFECNJFBG_GET_TARGETATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x12CD35B0)
#define AKMFECNJFBG_GET_TARGETTRAITCOUNT_OFFSET UNITYSDK_OFFSET(0x12CD35D0)
#define AKMFECNJFBG_SET_INTEGRATIONMAXPERCENT_OFFSET UNITYSDK_OFFSET(0x12CD3620)
#define AKMFECNJFBG_SET_INTEGRATIONPRODUCTPERCENT_OFFSET UNITYSDK_OFFSET(0x12CD3640)
#define AKMFECNJFBG_SET_PRODUCTATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x12CD35A0)
#define AKMFECNJFBG_SET_PRODUCTATTRIBUTEVALUES_OFFSET UNITYSDK_OFFSET(0x12CD3580)
#define AKMFECNJFBG_SET_PRODUCTTRAITS_OFFSET UNITYSDK_OFFSET(0x12CD3600)
#define AKMFECNJFBG_SET_TARGETATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x12CD35C0)
#define AKMFECNJFBG_SET_TARGETTRAITCOUNT_OFFSET UNITYSDK_OFFSET(0x12CD35E0)

inline static constexpr unsigned int AKMFECNJFBG_TypeDefinitionIndex = 80188;

	class AKMFECNJFBG : public ::System::Object
	{
	public:
		::HEKHCLACHJE* _TargetAttributeLevels_k__BackingField; // 0x10
		::HEKHCLACHJE* _ProductAttributeLevels_k__BackingField; // 0x18
		::FJOADPKDFLC* _ProductTraits_k__BackingField; // 0x20
		::HEKHCLACHJE* _ProductAttributeValues_k__BackingField; // 0x28
		::System::Int32 _TargetTraitCount_k__BackingField; // 0x30
		::System::Int32 _IntegrationProductPercent_k__BackingField; // 0x34
		::System::Int32 _IntegrationMaxPercent_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMFECNJFBG_CTOR_OFFSET))(this);
		}

		::HEKHCLACHJE* get_ProductAttributeValues()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMFECNJFBG_GET_PRODUCTATTRIBUTEVALUES_OFFSET))(this);
		}

		::System::Void set_ProductAttributeValues(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + AKMFECNJFBG_SET_PRODUCTATTRIBUTEVALUES_OFFSET))(this, a1);
		}

		::HEKHCLACHJE* get_ProductAttributeLevels()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMFECNJFBG_GET_PRODUCTATTRIBUTELEVELS_OFFSET))(this);
		}

		::System::Void set_ProductAttributeLevels(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + AKMFECNJFBG_SET_PRODUCTATTRIBUTELEVELS_OFFSET))(this, a1);
		}

		::HEKHCLACHJE* get_TargetAttributeLevels()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMFECNJFBG_GET_TARGETATTRIBUTELEVELS_OFFSET))(this);
		}

		::System::Void set_TargetAttributeLevels(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + AKMFECNJFBG_SET_TARGETATTRIBUTELEVELS_OFFSET))(this, a1);
		}

		::System::Int32 get_TargetTraitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMFECNJFBG_GET_TARGETTRAITCOUNT_OFFSET))(this);
		}

		::System::Void set_TargetTraitCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMFECNJFBG_SET_TARGETTRAITCOUNT_OFFSET))(this, a1);
		}

		::FJOADPKDFLC* get_ProductTraits()
		{
			return ((::FJOADPKDFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMFECNJFBG_GET_PRODUCTTRAITS_OFFSET))(this);
		}

		::System::Void set_ProductTraits(::FJOADPKDFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJOADPKDFLC*))((::PBYTE)hIl2Cpp + AKMFECNJFBG_SET_PRODUCTTRAITS_OFFSET))(this, a1);
		}

		::System::Int32 get_IntegrationMaxPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMFECNJFBG_GET_INTEGRATIONMAXPERCENT_OFFSET))(this);
		}

		::System::Void set_IntegrationMaxPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMFECNJFBG_SET_INTEGRATIONMAXPERCENT_OFFSET))(this, a1);
		}

		::System::Int32 get_IntegrationProductPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMFECNJFBG_GET_INTEGRATIONPRODUCTPERCENT_OFFSET))(this);
		}

		::System::Void set_IntegrationProductPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMFECNJFBG_SET_INTEGRATIONPRODUCTPERCENT_OFFSET))(this, a1);
		}

	};
