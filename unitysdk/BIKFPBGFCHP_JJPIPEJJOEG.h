#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BIKFPBGFCHP_JJPIPEJJOEG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB4B1470)
#define BIKFPBGFCHP_JJPIPEJJOEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B1380)
#define BIKFPBGFCHP_JJPIPEJJOEG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB4B14B0)
#define BIKFPBGFCHP_JJPIPEJJOEG_INVOKE_OFFSET UNITYSDK_OFFSET(0xB4AF9A0)

	class BIKFPBGFCHP_JJPIPEJJOEG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_JJPIPEJJOEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_JJPIPEJJOEG_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_JJPIPEJJOEG_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_JJPIPEJJOEG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
