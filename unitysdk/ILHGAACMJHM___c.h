#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILHGAACMJHM;
namespace System { class Object; }

#define ILHGAACMJHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B58A0)
#define ILHGAACMJHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206B58E0)
#define ILHGAACMJHM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x206B58F0)

inline static constexpr unsigned int ILHGAACMJHM___c_TypeDefinitionIndex = 28101;

	class ILHGAACMJHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILHGAACMJHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM___C_CTOR_OFFSET))(this);
		}

		::ILHGAACMJHM* __cctor_b__33_0()
		{
			return ((::ILHGAACMJHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
