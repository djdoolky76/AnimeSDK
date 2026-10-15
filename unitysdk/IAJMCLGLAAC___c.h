#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAJMCLGLAAC;
namespace System { class Object; }

#define IAJMCLGLAAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6064D0)
#define IAJMCLGLAAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E606510)
#define IAJMCLGLAAC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E606520)

inline static constexpr unsigned int IAJMCLGLAAC___c_TypeDefinitionIndex = 28551;

	class IAJMCLGLAAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F610);
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
