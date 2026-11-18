#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class EHGPNGPADCB;
class FJNNCIKHPCH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OLAMIEEIDPC_PMPKEAEMGEM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFB96860)
#define OLAMIEEIDPC_PMPKEAEMGEM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFB968F0)
#define OLAMIEEIDPC_PMPKEAEMGEM_INVOKE_OFFSET UNITYSDK_OFFSET(0xFB96290)
#define OLAMIEEIDPC_PMPKEAEMGEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFB96280)

inline static constexpr unsigned int OLAMIEEIDPC_PMPKEAEMGEM_TypeDefinitionIndex = 75218;

class OLAMIEEIDPC_PMPKEAEMGEM : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_PMPKEAEMGEM__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Int32 Invoke(::EHGPNGPADCB* LJBPECKCCEA, ::FJNNCIKHPCH* HMMMOCJAEOA, ::System::Int32 LBPIPEAKPDG)
	{
		return ((::System::Int32(*)(::PVOID, ::EHGPNGPADCB*, ::FJNNCIKHPCH*, ::System::Int32))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_PMPKEAEMGEM_INVOKE_OFFSET))(this, LJBPECKCCEA, HMMMOCJAEOA, LBPIPEAKPDG);
	}

	::System::IAsyncResult* BeginInvoke(::EHGPNGPADCB* LJBPECKCCEA, ::FJNNCIKHPCH* HMMMOCJAEOA, ::System::Int32 LBPIPEAKPDG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::EHGPNGPADCB*, ::FJNNCIKHPCH*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_PMPKEAEMGEM_BEGININVOKE_OFFSET))(this, LJBPECKCCEA, HMMMOCJAEOA, LBPIPEAKPDG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Int32 EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_PMPKEAEMGEM_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
