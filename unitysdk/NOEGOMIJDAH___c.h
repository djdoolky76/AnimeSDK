#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOEGOMIJDAH;
namespace System { class Object; }

#define NOEGOMIJDAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB6C9E0)
#define NOEGOMIJDAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB6CA20)
#define NOEGOMIJDAH___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1FB6CA30)

inline static constexpr unsigned int NOEGOMIJDAH___c_TypeDefinitionIndex = 26536;

	class NOEGOMIJDAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOEGOMIJDAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEGOMIJDAH___C_CTOR_OFFSET))(this);
		}

		::NOEGOMIJDAH* __cctor_b__37_0()
		{
			return ((::NOEGOMIJDAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEGOMIJDAH___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
