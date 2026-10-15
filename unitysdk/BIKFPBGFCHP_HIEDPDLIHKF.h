#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BIKFPBGFCHP_HIEDPDLIHKF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB4B1330)
#define BIKFPBGFCHP_HIEDPDLIHKF_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B1240)
#define BIKFPBGFCHP_HIEDPDLIHKF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB4B1370)
#define BIKFPBGFCHP_HIEDPDLIHKF_INVOKE_OFFSET UNITYSDK_OFFSET(0xB4AF5F0)

inline static constexpr unsigned int BIKFPBGFCHP_HIEDPDLIHKF_TypeDefinitionIndex = 79455;

	class BIKFPBGFCHP_HIEDPDLIHKF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_HIEDPDLIHKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_HIEDPDLIHKF_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_HIEDPDLIHKF_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_HIEDPDLIHKF_ENDINVOKE_OFFSET))(this, a1);
		}

	};
