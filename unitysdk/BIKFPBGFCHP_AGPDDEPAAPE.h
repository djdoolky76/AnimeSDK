#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define BIKFPBGFCHP_AGPDDEPAAPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB4ACFE0)
#define BIKFPBGFCHP_AGPDDEPAAPE_CTOR_OFFSET UNITYSDK_OFFSET(0xB4ACEF0)
#define BIKFPBGFCHP_AGPDDEPAAPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB4AD020)
#define BIKFPBGFCHP_AGPDDEPAAPE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB4AB310)

inline static constexpr unsigned int BIKFPBGFCHP_AGPDDEPAAPE_TypeDefinitionIndex = 79456;

	class BIKFPBGFCHP_AGPDDEPAAPE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_AGPDDEPAAPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_AGPDDEPAAPE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_AGPDDEPAAPE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_AGPDDEPAAPE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
