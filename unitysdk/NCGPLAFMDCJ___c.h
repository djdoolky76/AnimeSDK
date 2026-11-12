#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGPLAFMDCJ;
namespace System { class Object; }

#define NCGPLAFMDCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE1D260)
#define NCGPLAFMDCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE1D2A0)
#define NCGPLAFMDCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE1D2B0)

inline static constexpr unsigned int NCGPLAFMDCJ___c_TypeDefinitionIndex = 29163;

	class NCGPLAFMDCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGPLAFMDCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ___C_CTOR_OFFSET))(this);
		}

		::NCGPLAFMDCJ* __cctor_b__23_0()
		{
			return ((::NCGPLAFMDCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
