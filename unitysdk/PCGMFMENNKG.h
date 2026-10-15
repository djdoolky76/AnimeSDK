#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class IBPGDJEBPFN;
class OEGDBPLMIAE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCGMFMENNKG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7EB530)
#define PCGMFMENNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EB490)
#define PCGMFMENNKG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7EB5C0)
#define PCGMFMENNKG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7EB500)

inline static constexpr unsigned int PCGMFMENNKG_TypeDefinitionIndex = 36244;

	class PCGMFMENNKG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PCGMFMENNKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::OEGDBPLMIAE* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::IBPGDJEBPFN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OEGDBPLMIAE*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + PCGMFMENNKG_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::OEGDBPLMIAE* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::IBPGDJEBPFN* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::OEGDBPLMIAE*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::IBPGDJEBPFN*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PCGMFMENNKG_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PCGMFMENNKG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
