#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCEAEOGFAAA;
namespace System { class Object; }

#define JCEAEOGFAAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2F50)
#define JCEAEOGFAAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2F90)
#define JCEAEOGFAAA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E6D2FA0)

inline static constexpr unsigned int JCEAEOGFAAA___c_TypeDefinitionIndex = 27350;

	class JCEAEOGFAAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCEAEOGFAAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEAEOGFAAA___C_CTOR_OFFSET))(this);
		}

		::JCEAEOGFAAA* __cctor_b__43_0()
		{
			return ((::JCEAEOGFAAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEAEOGFAAA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
