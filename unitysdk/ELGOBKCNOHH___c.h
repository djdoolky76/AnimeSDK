#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELGOBKCNOHH;
namespace System { class Object; }

#define ELGOBKCNOHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206C8F30)
#define ELGOBKCNOHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206C8F70)
#define ELGOBKCNOHH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x206C8F80)

inline static constexpr unsigned int ELGOBKCNOHH___c_TypeDefinitionIndex = 33876;

	class ELGOBKCNOHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGOBKCNOHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGOBKCNOHH___C_CTOR_OFFSET))(this);
		}

		::ELGOBKCNOHH* __cctor_b__43_0()
		{
			return ((::ELGOBKCNOHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGOBKCNOHH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
