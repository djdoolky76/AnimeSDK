#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNAEBIJFOFF;
namespace System { class Object; }

#define FNAEBIJFOFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EC180)
#define FNAEBIJFOFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EC1C0)
#define FNAEBIJFOFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3EC1D0)

inline static constexpr unsigned int FNAEBIJFOFF___c_TypeDefinitionIndex = 31933;

	class FNAEBIJFOFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x650A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAEBIJFOFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF___C_CTOR_OFFSET))(this);
		}

		::FNAEBIJFOFF* __cctor_b__23_0()
		{
			return ((::FNAEBIJFOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
