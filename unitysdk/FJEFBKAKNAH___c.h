#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEFBKAKNAH;
namespace System { class Object; }

#define FJEFBKAKNAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A6530)
#define FJEFBKAKNAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A6560)
#define FJEFBKAKNAH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6A6570)

inline static constexpr unsigned int FJEFBKAKNAH___c_TypeDefinitionIndex = 31846;

	class FJEFBKAKNAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEFBKAKNAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH___C_CTOR_OFFSET))(this);
		}

		::FJEFBKAKNAH* __cctor_b__28_0()
		{
			return ((::FJEFBKAKNAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
