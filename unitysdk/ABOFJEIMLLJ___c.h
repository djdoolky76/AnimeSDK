#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOFJEIMLLJ;
namespace System { class Object; }

#define ABOFJEIMLLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1D50)
#define ABOFJEIMLLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1D90)
#define ABOFJEIMLLJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDD1DA0)

inline static constexpr unsigned int ABOFJEIMLLJ___c_TypeDefinitionIndex = 32637;

	class ABOFJEIMLLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABOFJEIMLLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ___C_CTOR_OFFSET))(this);
		}

		::ABOFJEIMLLJ* __cctor_b__28_0()
		{
			return ((::ABOFJEIMLLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
