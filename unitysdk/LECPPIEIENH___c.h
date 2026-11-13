#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LECPPIEIENH;
namespace System { class Object; }

#define LECPPIEIENH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F814C00)
#define LECPPIEIENH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F814C40)
#define LECPPIEIENH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F814C50)

inline static constexpr unsigned int LECPPIEIENH___c_TypeDefinitionIndex = 27776;

	class LECPPIEIENH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LECPPIEIENH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH___C_CTOR_OFFSET))(this);
		}

		::LECPPIEIENH* __cctor_b__38_0()
		{
			return ((::LECPPIEIENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
