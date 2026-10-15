#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEFBKAKNAH;
namespace System { class Object; }

#define FJEFBKAKNAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0CE0)
#define FJEFBKAKNAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0D10)
#define FJEFBKAKNAH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3A0D20)

inline static constexpr unsigned int FJEFBKAKNAH___c_TypeDefinitionIndex = 30933;

	class FJEFBKAKNAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60840);
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
