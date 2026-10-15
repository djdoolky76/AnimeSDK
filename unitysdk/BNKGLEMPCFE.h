#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class GLPPDCIBMIH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BNKGLEMPCFE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5C8790)
#define BNKGLEMPCFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C8700)
#define BNKGLEMPCFE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5C8810)
#define BNKGLEMPCFE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5C8770)

inline static constexpr unsigned int BNKGLEMPCFE_TypeDefinitionIndex = 36247;

	class BNKGLEMPCFE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BNKGLEMPCFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::System::Boolean a2, ::GLPPDCIBMIH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + BNKGLEMPCFE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Boolean a2, ::GLPPDCIBMIH* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::GLPPDCIBMIH*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BNKGLEMPCFE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BNKGLEMPCFE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
