#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFKKKGCBANF;
namespace System { class Object; }

#define CFKKKGCBANF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F36D350)
#define CFKKKGCBANF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F36D390)
#define CFKKKGCBANF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F36D3A0)

inline static constexpr unsigned int CFKKKGCBANF___c_TypeDefinitionIndex = 35505;

	class CFKKKGCBANF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFKKKGCBANF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF___C_CTOR_OFFSET))(this);
		}

		::CFKKKGCBANF* __cctor_b__23_0()
		{
			return ((::CFKKKGCBANF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
