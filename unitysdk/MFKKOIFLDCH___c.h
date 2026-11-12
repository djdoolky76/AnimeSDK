#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFKKOIFLDCH;
namespace System { class Object; }

#define MFKKOIFLDCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD66020)
#define MFKKOIFLDCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD66060)
#define MFKKOIFLDCH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD66070)

inline static constexpr unsigned int MFKKOIFLDCH___c_TypeDefinitionIndex = 30387;

	class MFKKOIFLDCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKKOIFLDCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH___C_CTOR_OFFSET))(this);
		}

		::MFKKOIFLDCH* __cctor_b__23_0()
		{
			return ((::MFKKOIFLDCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
