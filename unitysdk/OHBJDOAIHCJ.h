#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class GLPPDCIBMIH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OHBJDOAIHCJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7CEB00)
#define OHBJDOAIHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CEA70)
#define OHBJDOAIHCJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7CEB70)
#define OHBJDOAIHCJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7CEAE0)

inline static constexpr unsigned int OHBJDOAIHCJ_TypeDefinitionIndex = 36246;

	class OHBJDOAIHCJ : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OHBJDOAIHCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::GLPPDCIBMIH* a2, ::GLPPDCIBMIH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GLPPDCIBMIH*, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + OHBJDOAIHCJ_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::GLPPDCIBMIH* a2, ::GLPPDCIBMIH* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::GLPPDCIBMIH*, ::GLPPDCIBMIH*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OHBJDOAIHCJ_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OHBJDOAIHCJ_ENDINVOKE_OFFSET))(this, a1);
		}

	};
