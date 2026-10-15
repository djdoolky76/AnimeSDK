#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class OIJOKMHJKLJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OIJOKMHJKLJ_JBDAAKLCKMD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EC53910)
#define OIJOKMHJKLJ_JBDAAKLCKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC53820)
#define OIJOKMHJKLJ_JBDAAKLCKMD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EC53970)
#define OIJOKMHJKLJ_JBDAAKLCKMD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EC53070)

inline static constexpr unsigned int OIJOKMHJKLJ_JBDAAKLCKMD_TypeDefinitionIndex = 44040;

	class OIJOKMHJKLJ_JBDAAKLCKMD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_JBDAAKLCKMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::OIJOKMHJKLJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_JBDAAKLCKMD_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::OIJOKMHJKLJ* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_JBDAAKLCKMD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_JBDAAKLCKMD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
