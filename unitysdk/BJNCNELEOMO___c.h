#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJNCNELEOMO;
namespace System { class Object; }

#define BJNCNELEOMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1DB10)
#define BJNCNELEOMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1DB50)
#define BJNCNELEOMO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF1DB60)

inline static constexpr unsigned int BJNCNELEOMO___c_TypeDefinitionIndex = 25701;

	class BJNCNELEOMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJNCNELEOMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO___C_CTOR_OFFSET))(this);
		}

		::BJNCNELEOMO* __cctor_b__28_0()
		{
			return ((::BJNCNELEOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
