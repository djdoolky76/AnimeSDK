#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIPMNNAHIFP.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_CANGOTOAVATAR_OFFSET UNITYSDK_OFFSET(0x3E8C570)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E8C670)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E8C630)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E8C620)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x3E8C520)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GET_OBTAINED_OFFSET UNITYSDK_OFFSET(0x3E0FB00)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GET_SHOWGOTO_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B7608D0)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B7608A0)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E8C600)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_SET_OBTAINED_OFFSET UNITYSDK_OFFSET(0x3E0FB10)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_SET_SHOWGOTO_OFFSET UNITYSDK_OFFSET(0xB88D90)
#define RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E8C5F0)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int SeriesSkillsBuffedAvatarDisplayData_TypeDefinitionIndex = 53027;

	struct alignas(8) SeriesSkillsBuffedAvatarDisplayData
	{
		::OIPMNNAHIFP _Identifier_k__BackingField; // 0x10
		::System::Boolean _Obtained_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::System::Func_3<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean, ::System::Boolean>* _ShowGoto_k__BackingField; // 0x18
		::OIPMNNAHIFP get_Identifier()
		{
			return ((::OIPMNNAHIFP(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::OIPMNNAHIFP a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_Obtained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GET_OBTAINED_OFFSET))(this);
		}

		::System::Void set_Obtained(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_SET_OBTAINED_OFFSET))(this, a1);
		}

		::System::Func_3<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean, ::System::Boolean>* get_ShowGoto()
		{
			return ((::System::Func_3<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GET_SHOWGOTO_OFFSET))(this);
		}

		::System::Void set_ShowGoto(::System::Func_3<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_SET_SHOWGOTO_OFFSET))(this, a1);
		}

		::System::Boolean CanGotoAvatar(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_CANGOTOAVATAR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData a1, ::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData, ::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData a1, ::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData, ::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSBUFFEDAVATARDISPLAYDATA_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};
}
