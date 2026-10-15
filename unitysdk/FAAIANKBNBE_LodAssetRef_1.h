#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

	template <typename T>
	class FAAIANKBNBE_LodAssetRef_1 : public ::System::Object
	{
	public:
		::System::String* _path; // 0x0
		::System::Int32 _refCount; // 0x0
		T _loadAsset; // 0x0
		::RPG::Client::IAssetOperation* _assetOp; // 0x0
		::RPG::Client::CachedAssetLogicType _logicType; // 0x0
	};
