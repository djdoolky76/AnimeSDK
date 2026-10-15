#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMGEMNJJACK;
namespace System { class Object; }

#define KMGEMNJJACK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86C7A0)
#define KMGEMNJJACK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86C7E0)
#define KMGEMNJJACK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E86C7F0)

inline static constexpr unsigned int KMGEMNJJACK___c_TypeDefinitionIndex = 31023;

	class KMGEMNJJACK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMGEMNJJACK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK___C_CTOR_OFFSET))(this);
		}

		::KMGEMNJJACK* __cctor_b__28_0()
		{
			return ((::KMGEMNJJACK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGEMNJJACK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
