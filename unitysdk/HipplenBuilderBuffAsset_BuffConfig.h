#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERBUFFASSET_BUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE2FA0)

	class HipplenBuilderBuffAsset_BuffConfig : public ::System::Object
	{
	public:
		::System::String* Desc; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* BuffList; // 0x18
		::HipplenBuilderStatus_StatType CostType; // 0x20
		::System::Int32 CostValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBUFFASSET_BUFFCONFIG_CTOR_OFFSET))(this);
		}

	};
