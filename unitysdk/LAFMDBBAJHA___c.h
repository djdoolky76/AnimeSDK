#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAFMDBBAJHA;
namespace System { class Object; }

#define LAFMDBBAJHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89EF10)
#define LAFMDBBAJHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89EF50)
#define LAFMDBBAJHA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E89EF60)

inline static constexpr unsigned int LAFMDBBAJHA___c_TypeDefinitionIndex = 27432;

	class LAFMDBBAJHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAFMDBBAJHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA___C_CTOR_OFFSET))(this);
		}

		::LAFMDBBAJHA* __cctor_b__28_0()
		{
			return ((::LAFMDBBAJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
