#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define ONKMNDIAKEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD598D0)
#define ONKMNDIAKEA_GET_FEATURENAME_OFFSET UNITYSDK_OFFSET(0x1DD598E0)
#define ONKMNDIAKEA_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x1DD598F0)
#define ONKMNDIAKEA_SET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x1DD59900)

inline static constexpr unsigned int ONKMNDIAKEA_TypeDefinitionIndex = 6312;

	class ONKMNDIAKEA : public ::System::Attribute
	{
	public:
		::System::String* _FeatureName_k__BackingField; // 0x10
		::System::Boolean _IsOptional_k__BackingField; // 0x18
		// static const ::System::String* CHKCLKNDIIP; // 0x0
		// static const ::System::String* GFNFGCMDJII; // 0x0
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ONKMNDIAKEA_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_FeatureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMNDIAKEA_GET_FEATURENAME_OFFSET))(this);
		}

		::System::Boolean get_IsOptional()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMNDIAKEA_GET_ISOPTIONAL_OFFSET))(this);
		}

		::System::Void set_IsOptional(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONKMNDIAKEA_SET_ISOPTIONAL_OFFSET))(this, a1);
		}

	};
