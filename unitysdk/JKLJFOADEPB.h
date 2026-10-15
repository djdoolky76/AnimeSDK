#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JKLJFOADEPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA2FB0)
#define JKLJFOADEPB_GET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x1CBA2F70)
#define JKLJFOADEPB_GET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x1CBA2F90)
#define JKLJFOADEPB_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0x1CBA2EF0)
#define JKLJFOADEPB_MDLBGKOLEAD_OFFSET UNITYSDK_OFFSET(0x1CBA2F30)
#define JKLJFOADEPB_SET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x1CBA2F80)
#define JKLJFOADEPB_SET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x1CBA2FA0)

	class JKLJFOADEPB : public ::System::Object
	{
	public:
		::System::UInt32 _DataSourceSkillID_k__BackingField; // 0x10
		::System::Int32 _OverrideCasterID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JKLJFOADEPB_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + JKLJFOADEPB_IGOGDDNGCLN_OFFSET))();
		}

		::System::String* MDLBGKOLEAD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLJFOADEPB_MDLBGKOLEAD_OFFSET))(this);
		}

		::System::UInt32 get_DataSourceSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLJFOADEPB_GET_DATASOURCESKILLID_OFFSET))(this);
		}

		::System::Void set_DataSourceSkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKLJFOADEPB_SET_DATASOURCESKILLID_OFFSET))(this, a1);
		}

		::System::Int32 get_OverrideCasterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLJFOADEPB_GET_OVERRIDECASTERID_OFFSET))(this);
		}

		::System::Void set_OverrideCasterID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKLJFOADEPB_SET_OVERRIDECASTERID_OFFSET))(this, a1);
		}

	};
