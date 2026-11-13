#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAJMCLGLAAC;
namespace System { class Object; }

#define IAJMCLGLAAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2039F2B0)
#define IAJMCLGLAAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2039F2F0)
#define IAJMCLGLAAC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x2039F300)

inline static constexpr unsigned int IAJMCLGLAAC___c_TypeDefinitionIndex = 29141;

	class IAJMCLGLAAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAJMCLGLAAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJMCLGLAAC___C_CTOR_OFFSET))(this);
		}

		::IAJMCLGLAAC* __cctor_b__38_0()
		{
			return ((::IAJMCLGLAAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJMCLGLAAC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
