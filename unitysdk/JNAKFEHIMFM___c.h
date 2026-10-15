#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNAKFEHIMFM;
namespace System { class Object; }

#define JNAKFEHIMFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7656E0)
#define JNAKFEHIMFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E765710)
#define JNAKFEHIMFM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E765720)

inline static constexpr unsigned int JNAKFEHIMFM___c_TypeDefinitionIndex = 33727;

	class JNAKFEHIMFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNAKFEHIMFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAKFEHIMFM___C_CTOR_OFFSET))(this);
		}

		::JNAKFEHIMFM* __cctor_b__33_0()
		{
			return ((::JNAKFEHIMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAKFEHIMFM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
