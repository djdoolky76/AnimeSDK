#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBNNMKNBLDI;
namespace System { class Object; }

#define CBNNMKNBLDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F333B40)
#define CBNNMKNBLDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F333B80)
#define CBNNMKNBLDI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F333B90)

inline static constexpr unsigned int CBNNMKNBLDI___c_TypeDefinitionIndex = 30823;

	class CBNNMKNBLDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBNNMKNBLDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI___C_CTOR_OFFSET))(this);
		}

		::CBNNMKNBLDI* __cctor_b__43_0()
		{
			return ((::CBNNMKNBLDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
