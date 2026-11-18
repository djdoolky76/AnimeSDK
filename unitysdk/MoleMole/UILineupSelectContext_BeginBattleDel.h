#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class ALDOKCCIFNB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19614AD0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19614B00)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x196145B0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x196145A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_BeginBattleDel_TypeDefinitionIndex = 81296;

	class UILineupSelectContext_BeginBattleDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::ALDOKCCIFNB* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ALDOKCCIFNB*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
