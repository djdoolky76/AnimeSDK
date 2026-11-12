#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAHANHPHGGF;
namespace System { class Object; }

#define NAHANHPHGGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDFF360)
#define NAHANHPHGGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDFF3A0)
#define NAHANHPHGGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDFF3B0)

inline static constexpr unsigned int NAHANHPHGGF___c_TypeDefinitionIndex = 33646;

	class NAHANHPHGGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAHANHPHGGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHANHPHGGF___C_CTOR_OFFSET))(this);
		}

		::NAHANHPHGGF* __cctor_b__33_0()
		{
			return ((::NAHANHPHGGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHANHPHGGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
