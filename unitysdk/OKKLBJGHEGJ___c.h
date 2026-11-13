#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKKLBJGHEGJ;
namespace System { class Object; }

#define OKKLBJGHEGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD5D7F0)
#define OKKLBJGHEGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD5D830)
#define OKKLBJGHEGJ___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1FD5D840)

inline static constexpr unsigned int OKKLBJGHEGJ___c_TypeDefinitionIndex = 28054;

	class OKKLBJGHEGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKKLBJGHEGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKLBJGHEGJ___C_CTOR_OFFSET))(this);
		}

		::OKKLBJGHEGJ* __cctor_b__83_0()
		{
			return ((::OKKLBJGHEGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKLBJGHEGJ___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
