#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_BehaviorSerializeRequestHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define EIMHGJELHGN_BGOICKPIHPM_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x6ADA00)
#define EIMHGJELHGN_BGOICKPIHPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A89230)
#define EIMHGJELHGN_BGOICKPIHPM__CTOR_OFFSET UNITYSDK_OFFSET(0x6AD960)

inline static constexpr unsigned int EIMHGJELHGN_BGOICKPIHPM_TypeDefinitionIndex = 73411;

struct alignas(8) EIMHGJELHGN_BGOICKPIHPM
{
	static ::System::UInt32* StaticGet_LLLCCHGDBDH()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EIMHGJELHGN_BGOICKPIHPM_TypeDefinitionIndex)->GetStaticField(0x133B0);
	}
	::System::UInt32 HGDOGOHGDNJ; // 0x10
	::System::UInt32 NJNCGJLHLKC; // 0x14
	::System::Boolean MKHNBIEDOGK; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 PKAMBANFGBC; // 0x1C
	::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle ONBNNFGOMHI; // 0x20
	::System::String* OMDLEHMGELO; // 0x28
	::System::Action_2<::System::UInt32, ::System::Boolean>* DLLFPNJDJJP; // 0x30

	::System::Void _ctor(::System::UInt32 NJNCGJLHLKC, ::System::String* OMDLEHMGELO, ::System::Boolean EAGMODDNHLN, ::System::Action_2<::System::UInt32, ::System::Boolean>* DLLFPNJDJJP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + EIMHGJELHGN_BGOICKPIHPM__CTOR_OFFSET))(this, NJNCGJLHLKC, OMDLEHMGELO, EAGMODDNHLN, DLLFPNJDJJP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMHGJELHGN_BGOICKPIHPM__CCTOR_OFFSET))();
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_BGOICKPIHPM_FFCPIEDHBDP_OFFSET))(this);
	}
};
