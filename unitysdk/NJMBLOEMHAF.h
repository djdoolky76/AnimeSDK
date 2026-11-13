#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define NJMBLOEMHAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A797170)

inline static constexpr unsigned int NJMBLOEMHAF_TypeDefinitionIndex = 55227;

	class NJMBLOEMHAF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_FKKCHDLIKBE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98B0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_HODMGOBMOGC()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98B8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NLPHANKNJHB()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98C0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IAKBLBBJONL()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98C8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_GFBFPOOEDIN()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98D0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_BILIHHHJCIE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98D8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NMHOJLKEBCG()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98E0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IFBCGDFNAAH()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98E8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IKGLNNHDKDJ()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98F0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_AHCBMACHCMK()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0x98F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMBLOEMHAF_CCTOR_OFFSET))();
		}

	};
