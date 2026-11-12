#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BICCMEPJMDO;
namespace System { class Object; }

#define BICCMEPJMDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F00E3A0)
#define BICCMEPJMDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F00E3E0)
#define BICCMEPJMDO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F00E3F0)

inline static constexpr unsigned int BICCMEPJMDO___c_TypeDefinitionIndex = 29135;

	class BICCMEPJMDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x499E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BICCMEPJMDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICCMEPJMDO___C_CTOR_OFFSET))(this);
		}

		::BICCMEPJMDO* __cctor_b__33_0()
		{
			return ((::BICCMEPJMDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICCMEPJMDO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
