#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFIJFCEAKHA;
namespace System { class Object; }

#define MFIJFCEAKHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9ECC60)
#define MFIJFCEAKHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9ECCA0)
#define MFIJFCEAKHA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9ECCB0)

inline static constexpr unsigned int MFIJFCEAKHA___c_TypeDefinitionIndex = 28101;

	class MFIJFCEAKHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4EE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFIJFCEAKHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA___C_CTOR_OFFSET))(this);
		}

		::MFIJFCEAKHA* __cctor_b__23_0()
		{
			return ((::MFIJFCEAKHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
