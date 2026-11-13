#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFNNCOMFBMD;
namespace System { class Object; }

#define LFNNCOMFBMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAB3AB0)
#define LFNNCOMFBMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB3AF0)
#define LFNNCOMFBMD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAB3B00)

inline static constexpr unsigned int LFNNCOMFBMD___c_TypeDefinitionIndex = 26005;

	class LFNNCOMFBMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x330B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNNCOMFBMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD___C_CTOR_OFFSET))(this);
		}

		::LFNNCOMFBMD* __cctor_b__23_0()
		{
			return ((::LFNNCOMFBMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNNCOMFBMD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
