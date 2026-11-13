#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGHPBNIKMGI;
namespace System { class Object; }

#define LGHPBNIKMGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC2240)
#define LGHPBNIKMGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC2280)
#define LGHPBNIKMGI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAC2290)

inline static constexpr unsigned int LGHPBNIKMGI___c_TypeDefinitionIndex = 27933;

	class LGHPBNIKMGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGHPBNIKMGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI___C_CTOR_OFFSET))(this);
		}

		::LGHPBNIKMGI* __cctor_b__23_0()
		{
			return ((::LGHPBNIKMGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
