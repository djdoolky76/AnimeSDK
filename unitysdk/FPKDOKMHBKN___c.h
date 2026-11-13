#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPKDOKMHBKN;
namespace System { class Object; }

#define FPKDOKMHBKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB96DD0)
#define FPKDOKMHBKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB96E10)
#define FPKDOKMHBKN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FB96E20)

inline static constexpr unsigned int FPKDOKMHBKN___c_TypeDefinitionIndex = 33165;

	class FPKDOKMHBKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x536D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPKDOKMHBKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN___C_CTOR_OFFSET))(this);
		}

		::FPKDOKMHBKN* __cctor_b__33_0()
		{
			return ((::FPKDOKMHBKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
