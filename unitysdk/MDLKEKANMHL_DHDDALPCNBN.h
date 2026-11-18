#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class PFEOJDIJIBM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MDLKEKANMHL_DHDDALPCNBN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x156A3880)
#define MDLKEKANMHL_DHDDALPCNBN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x156A3920)
#define MDLKEKANMHL_DHDDALPCNBN_INVOKE_OFFSET UNITYSDK_OFFSET(0x156A3550)
#define MDLKEKANMHL_DHDDALPCNBN__CTOR_OFFSET UNITYSDK_OFFSET(0x156A3540)

inline static constexpr unsigned int MDLKEKANMHL_DHDDALPCNBN_TypeDefinitionIndex = 80666;

class MDLKEKANMHL_DHDDALPCNBN : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MDLKEKANMHL_DHDDALPCNBN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Int32 BNLHPGHLKDK, ::System::Int32 DABCKBIAKHA, ::PFEOJDIJIBM* DKALOJNFEEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::PFEOJDIJIBM*))((::PBYTE)hIl2Cpp + MDLKEKANMHL_DHDDALPCNBN_INVOKE_OFFSET))(this, BNLHPGHLKDK, DABCKBIAKHA, DKALOJNFEEF);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 BNLHPGHLKDK, ::System::Int32 DABCKBIAKHA, ::PFEOJDIJIBM* DKALOJNFEEF, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::PFEOJDIJIBM*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MDLKEKANMHL_DHDDALPCNBN_BEGININVOKE_OFFSET))(this, BNLHPGHLKDK, DABCKBIAKHA, DKALOJNFEEF, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MDLKEKANMHL_DHDDALPCNBN_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
