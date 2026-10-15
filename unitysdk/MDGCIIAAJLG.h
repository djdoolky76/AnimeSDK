#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class GLPPDCIBMIH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MDGCIIAAJLG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C748B00)
#define MDGCIIAAJLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C748A80)
#define MDGCIIAAJLG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C748B60)
#define MDGCIIAAJLG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C748AF0)

inline static constexpr unsigned int MDGCIIAAJLG_TypeDefinitionIndex = 36249;

	class MDGCIIAAJLG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MDGCIIAAJLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::GLPPDCIBMIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + MDGCIIAAJLG_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::GLPPDCIBMIH* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::GLPPDCIBMIH*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MDGCIIAAJLG_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MDGCIIAAJLG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
