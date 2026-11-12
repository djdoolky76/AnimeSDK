#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_BABELFISHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BE1A0)
#define MIHOYO_SDK_BABELFISHCONFIG_GET_MAXBATCHSIZE_OFFSET UNITYSDK_OFFSET(0xB5BE730)
#define MIHOYO_SDK_BABELFISHCONFIG_GET_MAXTOKENSPERITEM_OFFSET UNITYSDK_OFFSET(0xB5BE750)
#define MIHOYO_SDK_BABELFISHCONFIG_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0xB5BE6F0)
#define MIHOYO_SDK_BABELFISHCONFIG_GET_SUPPORTEDLANGUAGES_OFFSET UNITYSDK_OFFSET(0xB5BE710)
#define MIHOYO_SDK_BABELFISHCONFIG_SET_MAXBATCHSIZE_OFFSET UNITYSDK_OFFSET(0xB5BE740)
#define MIHOYO_SDK_BABELFISHCONFIG_SET_MAXTOKENSPERITEM_OFFSET UNITYSDK_OFFSET(0xB5BE760)
#define MIHOYO_SDK_BABELFISHCONFIG_SET_PROVIDER_OFFSET UNITYSDK_OFFSET(0xB5BE700)
#define MIHOYO_SDK_BABELFISHCONFIG_SET_SUPPORTEDLANGUAGES_OFFSET UNITYSDK_OFFSET(0xB5BE720)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BabelfishConfig_TypeDefinitionIndex = 47605;

	class BabelfishConfig : public ::System::Object
	{
	public:
		::System::String* _Provider_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _SupportedLanguages_k__BackingField; // 0x18
		::System::Int32 _MaxTokensPerItem_k__BackingField; // 0x20
		::System::Int32 _MaxBatchSize_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_CTOR_OFFSET))(this);
		}

		::System::String* get_Provider()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_GET_PROVIDER_OFFSET))(this);
		}

		::System::Void set_Provider(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_SET_PROVIDER_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_SupportedLanguages()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_GET_SUPPORTEDLANGUAGES_OFFSET))(this);
		}

		::System::Void set_SupportedLanguages(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_SET_SUPPORTEDLANGUAGES_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxBatchSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_GET_MAXBATCHSIZE_OFFSET))(this);
		}

		::System::Void set_MaxBatchSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_SET_MAXBATCHSIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxTokensPerItem()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_GET_MAXTOKENSPERITEM_OFFSET))(this);
		}

		::System::Void set_MaxTokensPerItem(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCONFIG_SET_MAXTOKENSPERITEM_OFFSET))(this, a1);
		}

	};
}
