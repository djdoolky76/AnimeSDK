#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int CKAMKNNDAFO_AssetLoader_2_TypeDefinitionIndex = 69133;

	template <typename T1, typename T2>
	class CKAMKNNDAFO_AssetLoader_2 : public ::System::Object
	{
	public:
		::System::Action_2<T1, ::System::Object*>* _OnLoaded; // 0x0
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>** StaticGet__Operations()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>**)UnitySDK::FromName("", "AssetLoader`2")->GetStaticField(0x0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, T1>** StaticGet__Assets()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, T1>**)UnitySDK::FromName("", "AssetLoader`2")->GetStaticField(0x0);
		}

	};
