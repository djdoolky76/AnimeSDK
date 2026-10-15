#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class HEJLOAOKDGE;
namespace Sofa { class BaseSofaWindow; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BBKMLDGICCH_AKEGBIBLNIN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15E8FE50)
#define BBKMLDGICCH_AKEGBIBLNIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8FD60)
#define BBKMLDGICCH_AKEGBIBLNIN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15E8FE90)
#define BBKMLDGICCH_AKEGBIBLNIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x15E8E930)

inline static constexpr unsigned int BBKMLDGICCH_AKEGBIBLNIN_TypeDefinitionIndex = 80516;

	class BBKMLDGICCH_AKEGBIBLNIN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BBKMLDGICCH_AKEGBIBLNIN_CTOR_OFFSET))(this, a1, a2);
		}

		::Sofa::BaseSofaWindow* Invoke(::HEJLOAOKDGE* a1, ::System::Object* a2)
		{
			return ((::Sofa::BaseSofaWindow*(*)(::PVOID, ::HEJLOAOKDGE*, ::System::Object*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_AKEGBIBLNIN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::HEJLOAOKDGE* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HEJLOAOKDGE*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_AKEGBIBLNIN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Sofa::BaseSofaWindow* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Sofa::BaseSofaWindow*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_AKEGBIBLNIN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
