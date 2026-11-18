#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }

#define FOUNDATION_ENDOFFRAMESERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x200007E0)
#define FOUNDATION_ENDOFFRAMESERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x20000820)
#define FOUNDATION_ENDOFFRAMESERVICE___C__INVOKESELFDETERMINEDCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x20000830)

namespace Foundation
{
	inline static constexpr unsigned int EndOfFrameService___c_TypeDefinitionIndex = 8759;

	class EndOfFrameService___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::Func_1<::System::Boolean>*>** StaticGet___9__8_0()
		{
			return (::System::Predicate_1<::System::Func_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(EndOfFrameService___c_TypeDefinitionIndex)->GetStaticField(0x75A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EndOfFrameService___c_TypeDefinitionIndex)->GetStaticField(0x75A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InvokeSelfDeterminedCallback_b__8_0(::System::Func_1<::System::Boolean>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE___C__INVOKESELFDETERMINEDCALLBACK_B__8_0_OFFSET))(this, callback);
		}
	};
}
