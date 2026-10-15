#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class HEJLOAOKDGE;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BBKMLDGICCH_BMHLJEEOLKF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15E83140)
#define BBKMLDGICCH_BMHLJEEOLKF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E83050)
#define BBKMLDGICCH_BMHLJEEOLKF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15E83180)
#define BBKMLDGICCH_BMHLJEEOLKF_INVOKE_OFFSET UNITYSDK_OFFSET(0x15E81F30)

inline static constexpr unsigned int BBKMLDGICCH_BMHLJEEOLKF_TypeDefinitionIndex = 80516;

	class BBKMLDGICCH_BMHLJEEOLKF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BBKMLDGICCH_BMHLJEEOLKF_CTOR_OFFSET))(this, a1, a2);
		}

		::Sofa::BaseSofaUI3DWindow* Invoke(::HEJLOAOKDGE* a1, ::System::Object* a2)
		{
			return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::HEJLOAOKDGE*, ::System::Object*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_BMHLJEEOLKF_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::HEJLOAOKDGE* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HEJLOAOKDGE*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_BMHLJEEOLKF_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Sofa::BaseSofaUI3DWindow* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_BMHLJEEOLKF_ENDINVOKE_OFFSET))(this, a1);
		}

	};
