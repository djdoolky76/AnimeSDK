#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class KFAIFLHPEIE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KJGPHJPPFHI_PDBHMNOCKMF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB44C900)
#define KJGPHJPPFHI_PDBHMNOCKMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB44C890)
#define KJGPHJPPFHI_PDBHMNOCKMF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB44C930)
#define KJGPHJPPFHI_PDBHMNOCKMF_INVOKE_OFFSET UNITYSDK_OFFSET(0xB44AC20)

inline static constexpr unsigned int KJGPHJPPFHI_PDBHMNOCKMF_TypeDefinitionIndex = 64019;

	class KJGPHJPPFHI_PDBHMNOCKMF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_PDBHMNOCKMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::KFAIFLHPEIE* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::KFAIFLHPEIE*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_PDBHMNOCKMF_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::KFAIFLHPEIE* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::KFAIFLHPEIE*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_PDBHMNOCKMF_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_PDBHMNOCKMF_ENDINVOKE_OFFSET))(this, a1);
		}

	};
