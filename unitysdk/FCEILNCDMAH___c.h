#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCEILNCDMAH;
namespace System { class Object; }

#define FCEILNCDMAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E317AC0)
#define FCEILNCDMAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E317AF0)
#define FCEILNCDMAH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E317B00)

inline static constexpr unsigned int FCEILNCDMAH___c_TypeDefinitionIndex = 29666;

	class FCEILNCDMAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEILNCDMAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH___C_CTOR_OFFSET))(this);
		}

		::FCEILNCDMAH* __cctor_b__23_0()
		{
			return ((::FCEILNCDMAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
