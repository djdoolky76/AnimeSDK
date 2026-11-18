#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class PFEOJDIJIBM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OMBPPHMDPFI_JEDEJHJDPFK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B7AAA90)
#define OMBPPHMDPFI_JEDEJHJDPFK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B7AAB10)
#define OMBPPHMDPFI_JEDEJHJDPFK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7AA510)
#define OMBPPHMDPFI_JEDEJHJDPFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AA500)

inline static constexpr unsigned int OMBPPHMDPFI_JEDEJHJDPFK_TypeDefinitionIndex = 85043;

class OMBPPHMDPFI_JEDEJHJDPFK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OMBPPHMDPFI_JEDEJHJDPFK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::PFEOJDIJIBM* DACDAPIGBCB, ::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::PFEOJDIJIBM*, ::System::Int32))((::PBYTE)hIl2Cpp + OMBPPHMDPFI_JEDEJHJDPFK_INVOKE_OFFSET))(this, DACDAPIGBCB, BNLHPGHLKDK);
	}

	::System::IAsyncResult* BeginInvoke(::PFEOJDIJIBM* DACDAPIGBCB, ::System::Int32 BNLHPGHLKDK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::PFEOJDIJIBM*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OMBPPHMDPFI_JEDEJHJDPFK_BEGININVOKE_OFFSET))(this, DACDAPIGBCB, BNLHPGHLKDK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OMBPPHMDPFI_JEDEJHJDPFK_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
