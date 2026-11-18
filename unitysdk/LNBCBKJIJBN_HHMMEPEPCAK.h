#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LNBCBKJIJBN_HHMMEPEPCAK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12598DE0)
#define LNBCBKJIJBN_HHMMEPEPCAK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12598E90)
#define LNBCBKJIJBN_HHMMEPEPCAK_INVOKE_OFFSET UNITYSDK_OFFSET(0x12598A90)
#define LNBCBKJIJBN_HHMMEPEPCAK__CTOR_OFFSET UNITYSDK_OFFSET(0x12598A80)

inline static constexpr unsigned int LNBCBKJIJBN_HHMMEPEPCAK_TypeDefinitionIndex = 80955;

class LNBCBKJIJBN_HHMMEPEPCAK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HHMMEPEPCAK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::Foundation::Unreal::FGameplayTagContainer& OJFGMIGKFHF, ::Foundation::Unreal::FGameplayTagContainer& OHCEIEHKNJO, ::Foundation::Unreal::FGameplayTagContainer& HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HHMMEPEPCAK_INVOKE_OFFSET))(this, OJFGMIGKFHF, OHCEIEHKNJO, HNOPAJLDCFB);
	}

	::System::IAsyncResult* BeginInvoke(::Foundation::Unreal::FGameplayTagContainer& OJFGMIGKFHF, ::Foundation::Unreal::FGameplayTagContainer& OHCEIEHKNJO, ::Foundation::Unreal::FGameplayTagContainer& HNOPAJLDCFB, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HHMMEPEPCAK_BEGININVOKE_OFFSET))(this, OJFGMIGKFHF, OHCEIEHKNJO, HNOPAJLDCFB, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::Foundation::Unreal::FGameplayTagContainer& OJFGMIGKFHF, ::Foundation::Unreal::FGameplayTagContainer& OHCEIEHKNJO, ::Foundation::Unreal::FGameplayTagContainer& HNOPAJLDCFB, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HHMMEPEPCAK_ENDINVOKE_OFFSET))(this, OJFGMIGKFHF, OHCEIEHKNJO, HNOPAJLDCFB, IGAAKDOIPNN);
	}
};
