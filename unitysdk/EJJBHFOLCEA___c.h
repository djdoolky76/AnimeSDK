#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJJBHFOLCEA;
namespace System { class Object; }

#define EJJBHFOLCEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE50770)
#define EJJBHFOLCEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE507B0)
#define EJJBHFOLCEA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE507C0)

inline static constexpr unsigned int EJJBHFOLCEA___c_TypeDefinitionIndex = 30849;

	class EJJBHFOLCEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJJBHFOLCEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA___C_CTOR_OFFSET))(this);
		}

		::EJJBHFOLCEA* __cctor_b__33_0()
		{
			return ((::EJJBHFOLCEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
