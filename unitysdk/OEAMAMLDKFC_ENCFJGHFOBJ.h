#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OEAMAMLDKFC_ENCFJGHFOBJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBE25F10)
#define OEAMAMLDKFC_ENCFJGHFOBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE25E90)
#define OEAMAMLDKFC_ENCFJGHFOBJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBE25FE0)
#define OEAMAMLDKFC_ENCFJGHFOBJ_INVOKE_OFFSET UNITYSDK_OFFSET(0xBE14BD0)

	class OEAMAMLDKFC_ENCFJGHFOBJ : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ENCFJGHFOBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ENCFJGHFOBJ_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ENCFJGHFOBJ_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::IAsyncResult* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ENCFJGHFOBJ_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
