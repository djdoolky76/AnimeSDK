#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEOGEDFAELP;
namespace System { class Object; }

#define IEOGEDFAELP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E640BB0)
#define IEOGEDFAELP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E640BF0)
#define IEOGEDFAELP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E640C00)

inline static constexpr unsigned int IEOGEDFAELP___c_TypeDefinitionIndex = 28751;

	class IEOGEDFAELP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEOGEDFAELP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP___C_CTOR_OFFSET))(this);
		}

		::IEOGEDFAELP* __cctor_b__23_0()
		{
			return ((::IEOGEDFAELP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
