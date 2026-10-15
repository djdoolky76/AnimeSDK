#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGBFHCLGNCC;
namespace System { class Object; }

#define LGBFHCLGNCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94A150)
#define LGBFHCLGNCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94A190)
#define LGBFHCLGNCC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E94A1A0)

inline static constexpr unsigned int LGBFHCLGNCC___c_TypeDefinitionIndex = 34675;

	class LGBFHCLGNCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGBFHCLGNCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC___C_CTOR_OFFSET))(this);
		}

		::LGBFHCLGNCC* __cctor_b__23_0()
		{
			return ((::LGBFHCLGNCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
