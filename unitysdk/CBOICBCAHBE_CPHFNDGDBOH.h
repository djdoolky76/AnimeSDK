#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class BatchAnimationClipGroup;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CBOICBCAHBE_CPHFNDGDBOH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC4B5D10)
#define CBOICBCAHBE_CPHFNDGDBOH_CTOR_OFFSET UNITYSDK_OFFSET(0xC4B5C20)
#define CBOICBCAHBE_CPHFNDGDBOH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC4B5D40)
#define CBOICBCAHBE_CPHFNDGDBOH_INVOKE_OFFSET UNITYSDK_OFFSET(0xC4B4AF0)

	class CBOICBCAHBE_CPHFNDGDBOH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CBOICBCAHBE_CPHFNDGDBOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::BatchAnimationClipGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_CPHFNDGDBOH_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::BatchAnimationClipGroup* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::BatchAnimationClipGroup*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_CPHFNDGDBOH_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_CPHFNDGDBOH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
