#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define NJMBLOEMHAF_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC14C40)

inline static constexpr unsigned int NJMBLOEMHAF_TypeDefinitionIndex = 54063;

	class NJMBLOEMHAF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_IFBCGDFNAAH()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF130);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_AHCBMACHCMK()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF138);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IKGLNNHDKDJ()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF140);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_GFBFPOOEDIN()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF148);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NMHOJLKEBCG()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF150);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NLPHANKNJHB()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF158);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_BILIHHHJCIE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF160);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_HODMGOBMOGC()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF168);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IAKBLBBJONL()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF170);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_FKKCHDLIKBE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMBLOEMHAF_CCTOR_OFFSET))();
		}

	};
