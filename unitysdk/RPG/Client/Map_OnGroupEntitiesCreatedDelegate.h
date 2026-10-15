#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class BIDDFDEAEGB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD51FDD0)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD51FCD0)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD51FE30)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xD51FDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_OnGroupEntitiesCreatedDelegate_TypeDefinitionIndex = 60864;

	class Map_OnGroupEntitiesCreatedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::BIDDFDEAEGB* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BIDDFDEAEGB*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::BIDDFDEAEGB* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::BIDDFDEAEGB*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
