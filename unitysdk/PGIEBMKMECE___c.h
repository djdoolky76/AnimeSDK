#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGIEBMKMECE;
namespace System { class Object; }

#define PGIEBMKMECE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF31CD0)
#define PGIEBMKMECE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF31D10)
#define PGIEBMKMECE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DF31D20)

inline static constexpr unsigned int PGIEBMKMECE___c_TypeDefinitionIndex = 27213;

	class PGIEBMKMECE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DCA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGIEBMKMECE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIEBMKMECE___C_CTOR_OFFSET))(this);
		}

		::PGIEBMKMECE* __cctor_b__43_0()
		{
			return ((::PGIEBMKMECE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIEBMKMECE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
