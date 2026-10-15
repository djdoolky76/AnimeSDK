#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOMPEEDFPLE;
namespace System { class Object; }

#define LOMPEEDFPLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E998D20)
#define LOMPEEDFPLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E998D60)
#define LOMPEEDFPLE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E998D70)

inline static constexpr unsigned int LOMPEEDFPLE___c_TypeDefinitionIndex = 30023;

	class LOMPEEDFPLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOMPEEDFPLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE___C_CTOR_OFFSET))(this);
		}

		::LOMPEEDFPLE* __cctor_b__23_0()
		{
			return ((::LOMPEEDFPLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
