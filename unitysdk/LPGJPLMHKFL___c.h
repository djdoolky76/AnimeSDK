#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPGJPLMHKFL;
namespace System { class Object; }

#define LPGJPLMHKFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CC8C0)
#define LPGJPLMHKFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CC900)
#define LPGJPLMHKFL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9CC910)

inline static constexpr unsigned int LPGJPLMHKFL___c_TypeDefinitionIndex = 25755;

	class LPGJPLMHKFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPGJPLMHKFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL___C_CTOR_OFFSET))(this);
		}

		::LPGJPLMHKFL* __cctor_b__33_0()
		{
			return ((::LPGJPLMHKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
