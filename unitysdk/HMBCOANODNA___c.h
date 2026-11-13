#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMBCOANODNA;
namespace System { class Object; }

#define HMBCOANODNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE183A0)
#define HMBCOANODNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE183D0)
#define HMBCOANODNA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE183E0)

inline static constexpr unsigned int HMBCOANODNA___c_TypeDefinitionIndex = 35055;

	class HMBCOANODNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBCOANODNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA___C_CTOR_OFFSET))(this);
		}

		::HMBCOANODNA* __cctor_b__28_0()
		{
			return ((::HMBCOANODNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
