#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BEFIOALJIMP___c__DisplayClass4_0.h"
#include "unitysdk/IJIMDIILCBF.h"
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }

#define BEFIOALJIMP_BADINOMDOLE_OFFSET UNITYSDK_OFFSET(0x16306FF0)
#define BEFIOALJIMP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16306B80)
#define BEFIOALJIMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1630A0C0)
#define BEFIOALJIMP_GCJPBIAAONJ_OFFSET UNITYSDK_OFFSET(0x16308E90)
#define BEFIOALJIMP_MECGOHFMLLM_OFFSET UNITYSDK_OFFSET(0x16306C30)
#define BEFIOALJIMP_PGCHAECEEPP_OFFSET UNITYSDK_OFFSET(0x16308CA0)
#define BEFIOALJIMP___CREATENORMALSKIN_G__ADDMAP_4_0_OFFSET UNITYSDK_OFFSET(0x1630A050)

inline static constexpr unsigned int BEFIOALJIMP_TypeDefinitionIndex = 62609;

	class BEFIOALJIMP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOALJIMP_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarSkin* BPLPBPMEODA(::IJIMDIILCBF a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + BEFIOALJIMP_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarSkin* PGCHAECEEPP(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEFIOALJIMP_PGCHAECEEPP_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarSkin* MECGOHFMLLM(::IJIMDIILCBF a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + BEFIOALJIMP_MECGOHFMLLM_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarSkin* GCJPBIAAONJ(::IJIMDIILCBF a1, ::RPG::GameCore::IAvatarCommonRowWrap* a2, ::RPG::GameCore::IAdventurePlayerCommonRowWrap* a3, ::RPG::GameCore::ItemRow* a4)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::IJIMDIILCBF, ::RPG::GameCore::IAvatarCommonRowWrap*, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + BEFIOALJIMP_GCJPBIAAONJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::AvatarSystem::AvatarSkin* BADINOMDOLE(::IJIMDIILCBF a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + BEFIOALJIMP_BADINOMDOLE_OFFSET))(this, a1);
		}

		static ::System::Void __CreateNormalSkin_g__AddMap_4_0(::System::String* a1, ::System::String* a2, ::BEFIOALJIMP___c__DisplayClass4_0 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::BEFIOALJIMP___c__DisplayClass4_0))((::PBYTE)hIl2Cpp + BEFIOALJIMP___CREATENORMALSKIN_G__ADDMAP_4_0_OFFSET))(a1, a2, a3);
		}

	};
