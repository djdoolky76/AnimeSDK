#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class AIFHJBBDKDC;
class FACKCCJFLKM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLOAFACIHMN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDA16EE0)
#define CLOAFACIHMN_CTOR_OFFSET UNITYSDK_OFFSET(0xDA16DE0)
#define CLOAFACIHMN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDA16F20)
#define CLOAFACIHMN_INVOKE_OFFSET UNITYSDK_OFFSET(0xDA16ED0)

inline static constexpr unsigned int CLOAFACIHMN_TypeDefinitionIndex = 62028;

	class CLOAFACIHMN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLOAFACIHMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::AIFHJBBDKDC* a1, ::FACKCCJFLKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + CLOAFACIHMN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::AIFHJBBDKDC* a1, ::FACKCCJFLKM* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::AIFHJBBDKDC*, ::FACKCCJFLKM*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLOAFACIHMN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLOAFACIHMN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
