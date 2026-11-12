#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGBFNLJFCAA;
namespace System { class Object; }

#define MGBFNLJFCAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD69690)
#define MGBFNLJFCAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD696D0)
#define MGBFNLJFCAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD696E0)

inline static constexpr unsigned int MGBFNLJFCAA___c_TypeDefinitionIndex = 33620;

	class MGBFNLJFCAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBFNLJFCAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA___C_CTOR_OFFSET))(this);
		}

		::MGBFNLJFCAA* __cctor_b__23_0()
		{
			return ((::MGBFNLJFCAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBFNLJFCAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
