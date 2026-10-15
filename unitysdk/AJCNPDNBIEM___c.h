#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJCNPDNBIEM;
namespace System { class Object; }

#define AJCNPDNBIEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3912F0)
#define AJCNPDNBIEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E391330)
#define AJCNPDNBIEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E391340)

inline static constexpr unsigned int AJCNPDNBIEM___c_TypeDefinitionIndex = 31148;

	class AJCNPDNBIEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJCNPDNBIEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM___C_CTOR_OFFSET))(this);
		}

		::AJCNPDNBIEM* __cctor_b__28_0()
		{
			return ((::AJCNPDNBIEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCNPDNBIEM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
