#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOBCIDMKOFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78E5E0)
#define HOBCIDMKOFM_GET_BASEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1E78E5C0)
#define HOBCIDMKOFM_GET_TALENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1E78E5A0)
#define HOBCIDMKOFM_SET_BASEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1E78E5D0)
#define HOBCIDMKOFM_SET_TALENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1E78E5B0)

inline static constexpr unsigned int HOBCIDMKOFM_TypeDefinitionIndex = 42848;

	class HOBCIDMKOFM : public ::System::Object
	{
	public:
		::System::Int32 _BaseAttributeValue_k__BackingField; // 0x10
		::System::Int32 _TalentLevel_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBCIDMKOFM_CTOR_OFFSET))(this);
		}

		::System::Int32 get_TalentLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBCIDMKOFM_GET_TALENTLEVEL_OFFSET))(this);
		}

		::System::Void set_TalentLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOBCIDMKOFM_SET_TALENTLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 get_BaseAttributeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBCIDMKOFM_GET_BASEATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Void set_BaseAttributeValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOBCIDMKOFM_SET_BASEATTRIBUTEVALUE_OFFSET))(this, a1);
		}

	};
