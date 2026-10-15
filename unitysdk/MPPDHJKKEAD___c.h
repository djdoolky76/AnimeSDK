#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPPDHJKKEAD;
namespace System { class Object; }

#define MPPDHJKKEAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8EF10)
#define MPPDHJKKEAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8EF50)
#define MPPDHJKKEAD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA8EF60)

inline static constexpr unsigned int MPPDHJKKEAD___c_TypeDefinitionIndex = 31538;

	class MPPDHJKKEAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPDHJKKEAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD___C_CTOR_OFFSET))(this);
		}

		::MPPDHJKKEAD* __cctor_b__33_0()
		{
			return ((::MPPDHJKKEAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
