#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEHLFNHAMLA.h"
#include "unitysdk/System/Object.h"
class CMFAIIHOFPL;
class HIOEAKHGILF;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define CMFAIIHOFPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA2F1B0)
#define CMFAIIHOFPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA2F1E0)
#define CMFAIIHOFPL___C___INITPOINTCONTROLCONTEXT_B__7_0_OFFSET UNITYSDK_OFFSET(0xDA2F1F0)
#define CMFAIIHOFPL___C___PROCESSLINETRACEONVISIBLECHANGEDCLOSURE_B__27_0_OFFSET UNITYSDK_OFFSET(0xDA2F250)

inline static constexpr unsigned int CMFAIIHOFPL___c_TypeDefinitionIndex = 77163;

	class CMFAIIHOFPL___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KEHLFNHAMLA>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::KEHLFNHAMLA>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50E30);
		}

		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50E38);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMFAIIHOFPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFAIIHOFPL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitPointControlContext_b__7_0(::KEHLFNHAMLA a1, ::KEHLFNHAMLA a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KEHLFNHAMLA, ::KEHLFNHAMLA))((::PBYTE)hIl2Cpp + CMFAIIHOFPL___C___INITPOINTCONTROLCONTEXT_B__7_0_OFFSET))(this, a1, a2);
		}

		::System::Void __ProcessLineTraceOnVisibleChangedClosure_b__27_0(::CMFAIIHOFPL* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CMFAIIHOFPL*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL___C___PROCESSLINETRACEONVISIBLECHANGEDCLOSURE_B__27_0_OFFSET))(this, a1, a2);
		}

	};
