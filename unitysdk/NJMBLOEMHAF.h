#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define NJMBLOEMHAF_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC1B040)

inline static constexpr unsigned int NJMBLOEMHAF_TypeDefinitionIndex = 54063;

	class NJMBLOEMHAF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_AHCBMACHCMK()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF530);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NMHOJLKEBCG()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF538);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_HODMGOBMOGC()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF540);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_GFBFPOOEDIN()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF548);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IAKBLBBJONL()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF550);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IKGLNNHDKDJ()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF558);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_FKKCHDLIKBE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF560);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_BILIHHHJCIE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF568);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IFBCGDFNAAH()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF570);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NLPHANKNJHB()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "NJMBLOEMHAF")->GetStaticField(0xF578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMBLOEMHAF_CCTOR_OFFSET))();
		}

	};
