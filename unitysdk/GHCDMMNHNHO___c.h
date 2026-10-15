#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCDMMNHNHO;
namespace System { class Object; }

#define GHCDMMNHNHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4851A0)
#define GHCDMMNHNHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4851D0)
#define GHCDMMNHNHO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4851E0)

inline static constexpr unsigned int GHCDMMNHNHO___c_TypeDefinitionIndex = 25476;

	class GHCDMMNHNHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16AF0);
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
