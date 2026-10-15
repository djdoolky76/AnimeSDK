#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ONPKMMDCDAN.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define BIKFPBGFCHP_DBCNMFLPFCK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB4B11F0)
#define BIKFPBGFCHP_DBCNMFLPFCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B1100)
#define BIKFPBGFCHP_DBCNMFLPFCK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB4B1230)
#define BIKFPBGFCHP_DBCNMFLPFCK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB4AFC90)

inline static constexpr unsigned int BIKFPBGFCHP_DBCNMFLPFCK_TypeDefinitionIndex = 79458;

	class BIKFPBGFCHP_DBCNMFLPFCK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_DBCNMFLPFCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a1, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_DBCNMFLPFCK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a1, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_DBCNMFLPFCK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BIKFPBGFCHP_DBCNMFLPFCK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
