#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDCJIIKHHHB;
namespace System { class Object; }

#define FDCJIIKHHHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F63A220)
#define FDCJIIKHHHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F63A260)
#define FDCJIIKHHHB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F63A270)

inline static constexpr unsigned int FDCJIIKHHHB___c_TypeDefinitionIndex = 31653;

	class FDCJIIKHHHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDCJIIKHHHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB___C_CTOR_OFFSET))(this);
		}

		::FDCJIIKHHHB* __cctor_b__23_0()
		{
			return ((::FDCJIIKHHHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
