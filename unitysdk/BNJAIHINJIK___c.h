#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNJAIHINJIK;
namespace System { class Object; }

#define BNJAIHINJIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E035770)
#define BNJAIHINJIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0357B0)
#define BNJAIHINJIK___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E0357C0)

inline static constexpr unsigned int BNJAIHINJIK___c_TypeDefinitionIndex = 29836;

	class BNJAIHINJIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x529A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNJAIHINJIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK___C_CTOR_OFFSET))(this);
		}

		::BNJAIHINJIK* __cctor_b__48_0()
		{
			return ((::BNJAIHINJIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
