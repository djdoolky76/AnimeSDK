#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPCJPPDKFJL;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLOICIIPGMJ_PCBJGIHFJBL_ADD_ONLOADED_OFFSET UNITYSDK_OFFSET(0xDA22090)
#define CLOICIIPGMJ_PCBJGIHFJBL_ADD__ONLOADED_OFFSET UNITYSDK_OFFSET(0xDA222C0)
#define CLOICIIPGMJ_PCBJGIHFJBL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA21780)
#define CLOICIIPGMJ_PCBJGIHFJBL_GET_CACHEDASSETLOADEROPERATION_OFFSET UNITYSDK_OFFSET(0xDA22080)
#define CLOICIIPGMJ_PCBJGIHFJBL_HMOEAILBCEO_OFFSET UNITYSDK_OFFSET(0xDA21A40)
#define CLOICIIPGMJ_PCBJGIHFJBL_IKHJMENJMHJ_OFFSET UNITYSDK_OFFSET(0xDA21D20)
#define CLOICIIPGMJ_PCBJGIHFJBL_OFMNIBJKICH_OFFSET UNITYSDK_OFFSET(0xDA21F50)
#define CLOICIIPGMJ_PCBJGIHFJBL_OPFNIIGKGMG_OFFSET UNITYSDK_OFFSET(0xDA21BF0)
#define CLOICIIPGMJ_PCBJGIHFJBL_REMOVE_ONLOADED_OFFSET UNITYSDK_OFFSET(0xDA22340)
#define CLOICIIPGMJ_PCBJGIHFJBL_REMOVE__ONLOADED_OFFSET UNITYSDK_OFFSET(0xDA223F0)

inline static constexpr unsigned int CLOICIIPGMJ_PCBJGIHFJBL_TypeDefinitionIndex = 49781;

	class CLOICIIPGMJ_PCBJGIHFJBL : public ::System::Object
	{
	public:
		::BPCJPPDKFJL* _OnLoaded; // 0x10
		::RPG::Client::IAssetOperation* _CachedAssetLoaderOperation_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_CTOR_OFFSET))(this, a1);
		}

		::System::Void HMOEAILBCEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_HMOEAILBCEO_OFFSET))(this);
		}

		::UnityEngine::Object* OPFNIIGKGMG()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_OPFNIIGKGMG_OFFSET))(this);
		}

		::System::Boolean IKHJMENJMHJ(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_IKHJMENJMHJ_OFFSET))(this, a1);
		}

		::System::String* OFMNIBJKICH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_OFMNIBJKICH_OFFSET))(this);
		}

		::RPG::Client::IAssetOperation* get_CachedAssetLoaderOperation()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_GET_CACHEDASSETLOADEROPERATION_OFFSET))(this);
		}

		::System::Void add_OnLoaded(::BPCJPPDKFJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPCJPPDKFJL*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_ADD_ONLOADED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLoaded(::BPCJPPDKFJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPCJPPDKFJL*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_REMOVE_ONLOADED_OFFSET))(this, a1);
		}

		::System::Void add__OnLoaded(::BPCJPPDKFJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPCJPPDKFJL*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_ADD__ONLOADED_OFFSET))(this, a1);
		}

		::System::Void remove__OnLoaded(::BPCJPPDKFJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPCJPPDKFJL*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_PCBJGIHFJBL_REMOVE__ONLOADED_OFFSET))(this, a1);
		}

	};
