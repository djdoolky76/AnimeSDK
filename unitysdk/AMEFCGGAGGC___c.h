#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEFCGGAGGC;
namespace System { class Object; }

#define AMEFCGGAGGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51DCC0)
#define AMEFCGGAGGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E51DD00)
#define AMEFCGGAGGC___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E51DD10)

inline static constexpr unsigned int AMEFCGGAGGC___c_TypeDefinitionIndex = 28301;

	class AMEFCGGAGGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEFCGGAGGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEFCGGAGGC___C_CTOR_OFFSET))(this);
		}

		::AMEFCGGAGGC* __cctor_b__37_0()
		{
			return ((::AMEFCGGAGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEFCGGAGGC___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
