#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC2A530)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CC2A740)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CC2A420)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2A320)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_COLORSWITCHNAME_OFFSET UNITYSDK_OFFSET(0x1CC2A860)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_HASTRAITFRAME_OFFSET UNITYSDK_OFFSET(0x1CC2A890)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1CC2A850)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITICONKEY_OFFSET UNITYSDK_OFFSET(0x1CC2A870)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC2A880)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1CC2A930)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITRANKSUFFIX_OFFSET UNITYSDK_OFFSET(0x1CC2A940)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITRANK_OFFSET UNITYSDK_OFFSET(0x1CC2A8F0)
#define RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO__BUILDCOLORSWITCHNAME_OFFSET UNITYSDK_OFFSET(0x1CC2A690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightItemFrameInfo_TypeDefinitionIndex = 66570;

	class GridFightItemFrameInfo : public ::System::Object
	{
	public:
		::System::String* _TraitIconKey_k__BackingField; // 0x10
		::System::String* _ColorSwitchName_k__BackingField; // 0x18
		::System::String* _TraitRankSuffix_k__BackingField; // 0x20
		::System::String* _TraitIconPath_k__BackingField; // 0x28
		::System::UInt32 _Rank_k__BackingField; // 0x30
		::System::UInt32 _TraitID_k__BackingField; // 0x34
		// static const ::System::String* TraitIconPathFormat; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_RANK_OFFSET))(this);
		}

		::System::String* get_ColorSwitchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_COLORSWITCHNAME_OFFSET))(this);
		}

		::System::String* get_TraitIconKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITICONKEY_OFFSET))(this);
		}

		::System::String* get_TraitIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITICONPATH_OFFSET))(this);
		}

		::System::Boolean get_HasTraitFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_HASTRAITFRAME_OFFSET))(this);
		}

		::System::String* get_TraitRank()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITRANK_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITID_OFFSET))(this);
		}

		::System::String* get_TraitRankSuffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO_GET_TRAITRANKSUFFIX_OFFSET))(this);
		}

		static ::System::String* _BuildColorSwitchName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMFRAMEINFO__BUILDCOLORSWITCHNAME_OFFSET))(a1, a2);
		}

	};
}
