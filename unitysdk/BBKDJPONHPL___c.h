#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBKDJPONHPL;
namespace System { class Object; }

#define BBKDJPONHPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA73D00)
#define BBKDJPONHPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA73D30)
#define BBKDJPONHPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA73D40)

inline static constexpr unsigned int BBKDJPONHPL___c_TypeDefinitionIndex = 35568;

	class BBKDJPONHPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKDJPONHPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL___C_CTOR_OFFSET))(this);
		}

		::BBKDJPONHPL* __cctor_b__28_0()
		{
			return ((::BBKDJPONHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
