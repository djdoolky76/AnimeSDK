#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetsUnloadType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_TEXTASSETLOADER_CACHEREQUESTHANDLE_OFFSET UNITYSDK_OFFSET(0x1F4DE720)
#define FOUNDATION_TEXTASSETLOADER_GETTEMPLATEUNLOADTYPE_OFFSET UNITYSDK_OFFSET(0x1F4DE270)
#define FOUNDATION_TEXTASSETLOADER_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1F4DE7F0)
#define FOUNDATION_TEXTASSETLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1F4DE3B0)
#define FOUNDATION_TEXTASSETLOADER_SETTEMPLATEUNLOADTYPE_OFFSET UNITYSDK_OFFSET(0x1F4DE170)
#define FOUNDATION_TEXTASSETLOADER_UNLOADALLAUTO_OFFSET UNITYSDK_OFFSET(0x1F4DEBF0)
#define FOUNDATION_TEXTASSETLOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1F4DEA60)
#define FOUNDATION_TEXTASSETLOADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4DEE80)
#define FOUNDATION_TEXTASSETLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4DEE70)

namespace Foundation
{
	inline static constexpr unsigned int TextAssetLoader_TypeDefinitionIndex = 8456;

	class TextAssetLoader : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetsUnloadType>** StaticGet__templateUnloadTypeDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetsUnloadType>**)Il2CppClass::FromTypeDefinitionIndex(TextAssetLoader_TypeDefinitionIndex)->GetStaticField(0x7340);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>** StaticGet__requestHandleDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(TextAssetLoader_TypeDefinitionIndex)->GetStaticField(0x7348);
		}
		// static const ::System::String* FileCfgPrefix; // 0x0
		// static const ::System::String* FileCfgPostfix; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER__CCTOR_OFFSET))();
		}

		static ::System::Void SetTemplateUnloadType(::System::String* name, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Void(*)(::System::String*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER_SETTEMPLATEUNLOADTYPE_OFFSET))(name, unloadType);
		}

		static ::Foundation::AssetsUnloadType GetTemplateUnloadType(::System::String* filename)
		{
			return ((::Foundation::AssetsUnloadType(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER_GETTEMPLATEUNLOADTYPE_OFFSET))(filename);
		}

		static ::System::Void Load(::System::String* filename, ::System::Action_1<::Il2CppArray<::System::Byte>*>* complete, ::System::Boolean isAsync)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::Il2CppArray<::System::Byte>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER_LOAD_OFFSET))(filename, complete, isAsync);
		}

		static ::Il2CppArray<::System::Byte>* Load_1(::System::String* filename)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER_LOAD_1_OFFSET))(filename);
		}

		static ::System::Void CacheRequestHandle(::System::String* filename, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::System::String*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER_CACHEREQUESTHANDLE_OFFSET))(filename, handle);
		}

		static ::System::Void Unload(::System::String* filename)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER_UNLOAD_OFFSET))(filename);
		}

		static ::System::Void UnloadAllAuto()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER_UNLOADALLAUTO_OFFSET))();
		}
	};
}
