#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIAMDCIDHLO;
namespace System { class Object; }

#define LIAMDCIDHLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201C6020)
#define LIAMDCIDHLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201C6060)
#define LIAMDCIDHLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201C6070)

inline static constexpr unsigned int LIAMDCIDHLO___c_TypeDefinitionIndex = 29793;

	class LIAMDCIDHLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIAMDCIDHLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO___C_CTOR_OFFSET))(this);
		}

		::LIAMDCIDHLO* __cctor_b__23_0()
		{
			return ((::LIAMDCIDHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
