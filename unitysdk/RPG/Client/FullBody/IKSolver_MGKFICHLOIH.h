#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_MGKFICHLOIH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD07D350)
#define RPG_CLIENT_FULLBODY_IKSOLVER_MGKFICHLOIH_CTOR_OFFSET UNITYSDK_OFFSET(0xD07D2D0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_MGKFICHLOIH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD07D3A0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_MGKFICHLOIH_INVOKE_OFFSET UNITYSDK_OFFSET(0xD07D340)

namespace RPG::Client::FullBody
{
	class IKSolver_MGKFICHLOIH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_MGKFICHLOIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_MGKFICHLOIH_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_MGKFICHLOIH_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_MGKFICHLOIH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
