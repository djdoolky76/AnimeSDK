#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class ANCNMAMAFNN;
class EAGPPDDBBIM;
class FKFGNAHIOPO;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BBPBANMMLMF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x170967F0)
#define BBPBANMMLMF_CTOR_OFFSET UNITYSDK_OFFSET(0x17096760)
#define BBPBANMMLMF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17096830)
#define BBPBANMMLMF_INVOKE_OFFSET UNITYSDK_OFFSET(0x170967E0)

inline static constexpr unsigned int BBPBANMMLMF_TypeDefinitionIndex = 80038;

	class BBPBANMMLMF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BBPBANMMLMF_CTOR_OFFSET))(this, a1, a2);
		}

		::ANCNMAMAFNN* Invoke(::EAGPPDDBBIM* a1, ::FKFGNAHIOPO* a2)
		{
			return ((::ANCNMAMAFNN*(*)(::PVOID, ::EAGPPDDBBIM*, ::FKFGNAHIOPO*))((::PBYTE)hIl2Cpp + BBPBANMMLMF_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::EAGPPDDBBIM* a1, ::FKFGNAHIOPO* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::EAGPPDDBBIM*, ::FKFGNAHIOPO*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BBPBANMMLMF_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ANCNMAMAFNN* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ANCNMAMAFNN*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BBPBANMMLMF_ENDINVOKE_OFFSET))(this, a1);
		}

	};
