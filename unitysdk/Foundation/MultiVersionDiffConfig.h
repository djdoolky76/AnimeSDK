#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/Foundation/MultiVer.h"

namespace Foundation { class MultiVersionErrorRef; }
namespace Foundation { class MultiVersionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_MULTIVERSIONDIFFCONFIG_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F3A5EE0)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_GETALLOTHERVERSIONPATHS_OFFSET UNITYSDK_OFFSET(0x1F3A6380)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_GETASSETPATHS_OFFSET UNITYSDK_OFFSET(0x1F3A5FB0)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG_UPDATEHASH_OFFSET UNITYSDK_OFFSET(0x1F3A6230)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A6600)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionDiffConfig_TypeDefinitionIndex = 7977;

	class MultiVersionDiffConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::MultiVersionInfo*>* assets; // 0x58
		::System::Collections::Generic::List_1<::Foundation::MultiVersionErrorRef*>* errorRefs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_CONTAINS_OFFSET))(this, path);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetAssetPaths(::Foundation::MultiVer currentType)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_GETASSETPATHS_OFFSET))(this, currentType);
		}

		::System::Void UpdateHash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_UPDATEHASH_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetAllOtherVersionPaths(::Foundation::MultiVer currentType)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG_GETALLOTHERVERSIONPATHS_OFFSET))(this, currentType);
		}
	};
}
