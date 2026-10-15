#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MNGLGNFNLHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92DCE0)
#define MNGLGNFNLHH_GET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x1C92DCA0)
#define MNGLGNFNLHH_GET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x1C92DCC0)
#define MNGLGNFNLHH_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0x1C92DC20)
#define MNGLGNFNLHH_MDLBGKOLEAD_OFFSET UNITYSDK_OFFSET(0x1C92DC60)
#define MNGLGNFNLHH_SET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x1C92DCB0)
#define MNGLGNFNLHH_SET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x1C92DCD0)

inline static constexpr unsigned int MNGLGNFNLHH_TypeDefinitionIndex = 41960;

	class MNGLGNFNLHH : public ::System::Object
	{
	public:
		::System::Int32 _OverrideCasterID_k__BackingField; // 0x10
		::System::UInt32 _DataSourceSkillID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGLGNFNLHH_CTOR_OFFSET))(this);
		}

		static ::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MNGLGNFNLHH_IGOGDDNGCLN_OFFSET))();
		}

		::System::String* MDLBGKOLEAD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGLGNFNLHH_MDLBGKOLEAD_OFFSET))(this);
		}

		::System::UInt32 get_DataSourceSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGLGNFNLHH_GET_DATASOURCESKILLID_OFFSET))(this);
		}

		::System::Void set_DataSourceSkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNGLGNFNLHH_SET_DATASOURCESKILLID_OFFSET))(this, a1);
		}

		::System::Int32 get_OverrideCasterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGLGNFNLHH_GET_OVERRIDECASTERID_OFFSET))(this);
		}

		::System::Void set_OverrideCasterID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNGLGNFNLHH_SET_OVERRIDECASTERID_OFFSET))(this, a1);
		}

	};
