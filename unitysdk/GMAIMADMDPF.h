#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define GMAIMADMDPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACA100)
#define GMAIMADMDPF_GET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0x15ACA0C0)
#define GMAIMADMDPF_GET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0x15ACA0A0)
#define GMAIMADMDPF_GET_SHOWEMPTYOPTION_OFFSET UNITYSDK_OFFSET(0x15ACA0E0)
#define GMAIMADMDPF_SET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0x15ACA0D0)
#define GMAIMADMDPF_SET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0x15ACA0B0)
#define GMAIMADMDPF_SET_SHOWEMPTYOPTION_OFFSET UNITYSDK_OFFSET(0x15ACA0F0)

	class GMAIMADMDPF : public ::System::Attribute
	{
	public:
		::System::String* _SearchDirectory_k__BackingField; // 0x10
		::System::Boolean _ShowEmptyOption_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 _MaxSelection_k__BackingField; // 0x1C
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAIMADMDPF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_SearchDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAIMADMDPF_GET_SEARCHDIRECTORY_OFFSET))(this);
		}

		::System::Void set_SearchDirectory(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GMAIMADMDPF_SET_SEARCHDIRECTORY_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxSelection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAIMADMDPF_GET_MAXSELECTION_OFFSET))(this);
		}

		::System::Void set_MaxSelection(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMAIMADMDPF_SET_MAXSELECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowEmptyOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAIMADMDPF_GET_SHOWEMPTYOPTION_OFFSET))(this);
		}

		::System::Void set_ShowEmptyOption(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAIMADMDPF_SET_SHOWEMPTYOPTION_OFFSET))(this, a1);
		}

	};
