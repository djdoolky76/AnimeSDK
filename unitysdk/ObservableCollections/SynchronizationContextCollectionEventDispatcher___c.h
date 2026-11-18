#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { class ICollectionEventDispatcher; }

#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE150)
#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE190)
#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1FDBE1A0)

namespace ObservableCollections
{
	inline static constexpr unsigned int SynchronizationContextCollectionEventDispatcher___c_TypeDefinitionIndex = 28161;

	class SynchronizationContextCollectionEventDispatcher___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextCollectionEventDispatcher___c_TypeDefinitionIndex)->GetStaticField(0x25570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C__CTOR_OFFSET))(this);
		}

		::ObservableCollections::ICollectionEventDispatcher* __cctor_b__7_0()
		{
			return ((::ObservableCollections::ICollectionEventDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C___CCTOR_B__7_0_OFFSET))(this);
		}
	};
}
