#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define NJMBLOEMHAF_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4FE9D0)

inline static constexpr unsigned int NJMBLOEMHAF_TypeDefinitionIndex = 55227;

	class NJMBLOEMHAF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_BILIHHHJCIE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9EA0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IFBCGDFNAAH()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9EA8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_FKKCHDLIKBE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9EB0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NMHOJLKEBCG()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9EB8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_AHCBMACHCMK()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9EC0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NLPHANKNJHB()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9EC8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IAKBLBBJONL()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9ED0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_GFBFPOOEDIN()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9ED8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IKGLNNHDKDJ()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9EE0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_HODMGOBMOGC()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x9EE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMBLOEMHAF_CCTOR_OFFSET))();
		}

	};
