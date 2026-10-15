#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class OIJOKMHJKLJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MPJFIPNGENE_BINIMIDHMOP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EC50600)
#define MPJFIPNGENE_BINIMIDHMOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC50510)
#define MPJFIPNGENE_BINIMIDHMOP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EC50630)
#define MPJFIPNGENE_BINIMIDHMOP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EC4FFE0)

	class MPJFIPNGENE_BINIMIDHMOP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BINIMIDHMOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BINIMIDHMOP_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::OIJOKMHJKLJ* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BINIMIDHMOP_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BINIMIDHMOP_ENDINVOKE_OFFSET))(this, a1);
		}

	};
