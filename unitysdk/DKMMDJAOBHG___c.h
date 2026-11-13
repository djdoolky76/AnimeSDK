#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKMMDJAOBHG;
namespace System { class Object; }

#define DKMMDJAOBHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB412B0)
#define DKMMDJAOBHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB412F0)
#define DKMMDJAOBHG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB41300)

inline static constexpr unsigned int DKMMDJAOBHG___c_TypeDefinitionIndex = 30298;

	class DKMMDJAOBHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKMMDJAOBHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG___C_CTOR_OFFSET))(this);
		}

		::DKMMDJAOBHG* __cctor_b__23_0()
		{
			return ((::DKMMDJAOBHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
