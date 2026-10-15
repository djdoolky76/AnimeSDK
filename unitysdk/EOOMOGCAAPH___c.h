#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EOOMOGCAAPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x155C1710)
#define EOOMOGCAAPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x155C1740)
#define EOOMOGCAAPH___C__ORDERBYDAMAGETYPE_B__5_0_OFFSET UNITYSDK_OFFSET(0x155C1750)
#define EOOMOGCAAPH___C__PREFERHIGHERRARITY_B__7_0_OFFSET UNITYSDK_OFFSET(0x155C17C0)
#define EOOMOGCAAPH___C__PREFERLATERRELEASED_B__6_0_OFFSET UNITYSDK_OFFSET(0x155C1760)

inline static constexpr unsigned int EOOMOGCAAPH___c_TypeDefinitionIndex = 62802;

	class EOOMOGCAAPH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43950);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43958);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43960);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43968);
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
