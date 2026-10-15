#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EOOMOGCAAPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x155CD100)
#define EOOMOGCAAPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x155CD130)
#define EOOMOGCAAPH___C__ORDERBYDAMAGETYPE_B__5_0_OFFSET UNITYSDK_OFFSET(0x155CD140)
#define EOOMOGCAAPH___C__PREFERHIGHERRARITY_B__7_0_OFFSET UNITYSDK_OFFSET(0x155CD1B0)
#define EOOMOGCAAPH___C__PREFERLATERRELEASED_B__6_0_OFFSET UNITYSDK_OFFSET(0x155CD150)

	class EOOMOGCAAPH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53F70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53F78);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53F80);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53F88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOOMOGCAAPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOMOGCAAPH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _OrderByDamageType_b__5_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH___C__ORDERBYDAMAGETYPE_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 _PreferLaterReleased_b__6_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH___C__PREFERLATERRELEASED_B__6_0_OFFSET))(this, a1);
		}

		::System::Int32 _PreferHigherRarity_b__7_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH___C__PREFERHIGHERRARITY_B__7_0_OFFSET))(this, a1);
		}

	};
