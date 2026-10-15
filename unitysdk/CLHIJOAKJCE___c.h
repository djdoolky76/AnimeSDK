#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
namespace System { class Object; }

#define CLHIJOAKJCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC240)
#define CLHIJOAKJCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC270)
#define CLHIJOAKJCE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0CC280)

inline static constexpr unsigned int CLHIJOAKJCE___c_TypeDefinitionIndex = 26429;

	class CLHIJOAKJCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLHIJOAKJCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE___C_CTOR_OFFSET))(this);
		}

		::CLHIJOAKJCE* __cctor_b__33_0()
		{
			return ((::CLHIJOAKJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
