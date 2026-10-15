#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCBIEJNJDIF;
namespace System { class Object; }

#define LCBIEJNJDIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E2D70)
#define LCBIEJNJDIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E2DB0)
#define LCBIEJNJDIF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8E2DC0)

inline static constexpr unsigned int LCBIEJNJDIF___c_TypeDefinitionIndex = 30902;

	class LCBIEJNJDIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x316E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCBIEJNJDIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF___C_CTOR_OFFSET))(this);
		}

		::LCBIEJNJDIF* __cctor_b__23_0()
		{
			return ((::LCBIEJNJDIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
