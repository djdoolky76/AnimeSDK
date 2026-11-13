#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GAJCCEPJLJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B86DC70)
#define GAJCCEPJLJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B86DCA0)
#define GAJCCEPJLJE___C___EXECUTESEQUENCE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B86DCB0)

inline static constexpr unsigned int GAJCCEPJLJE___c_TypeDefinitionIndex = 54035;

	class GAJCCEPJLJE___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::KFELGAIGHAP*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::KFELGAIGHAP*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x593F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x593F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJCCEPJLJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJCCEPJLJE___C_CTOR_OFFSET))(this);
		}

		::System::Void __ExecuteSequence_b__2_0(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + GAJCCEPJLJE___C___EXECUTESEQUENCE_B__2_0_OFFSET))(this, a1);
		}

	};
