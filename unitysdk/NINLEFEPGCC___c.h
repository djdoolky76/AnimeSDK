#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NINLEFEPGCC;
namespace System { class Object; }

#define NINLEFEPGCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0C200)
#define NINLEFEPGCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0C240)
#define NINLEFEPGCC___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1EB0C250)

inline static constexpr unsigned int NINLEFEPGCC___c_TypeDefinitionIndex = 25093;

	class NINLEFEPGCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINLEFEPGCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINLEFEPGCC___C_CTOR_OFFSET))(this);
		}

		::NINLEFEPGCC* __cctor_b__88_0()
		{
			return ((::NINLEFEPGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINLEFEPGCC___C___CCTOR_B__88_0_OFFSET))(this);
		}

	};
