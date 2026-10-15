#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILBLJAFMBBK;
namespace System { class Object; }

#define ILBLJAFMBBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7CA0)
#define ILBLJAFMBBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7CE0)
#define ILBLJAFMBBK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6A7CF0)

inline static constexpr unsigned int ILBLJAFMBBK___c_TypeDefinitionIndex = 26624;

	class ILBLJAFMBBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILBLJAFMBBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK___C_CTOR_OFFSET))(this);
		}

		::ILBLJAFMBBK* __cctor_b__23_0()
		{
			return ((::ILBLJAFMBBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
