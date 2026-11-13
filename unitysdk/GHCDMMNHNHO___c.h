#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCDMMNHNHO;
namespace System { class Object; }

#define GHCDMMNHNHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20272E40)
#define GHCDMMNHNHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20272E70)
#define GHCDMMNHNHO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20272E80)

inline static constexpr unsigned int GHCDMMNHNHO___c_TypeDefinitionIndex = 25955;

	class GHCDMMNHNHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHCDMMNHNHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO___C_CTOR_OFFSET))(this);
		}

		::GHCDMMNHNHO* __cctor_b__33_0()
		{
			return ((::GHCDMMNHNHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
