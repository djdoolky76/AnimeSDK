#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BODGPACJIDJ;
namespace System { class Object; }

#define BODGPACJIDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6E340)
#define BODGPACJIDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6E380)
#define BODGPACJIDJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF6E390)

inline static constexpr unsigned int BODGPACJIDJ___c_TypeDefinitionIndex = 29791;

	class BODGPACJIDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CCC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BODGPACJIDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ___C_CTOR_OFFSET))(this);
		}

		::BODGPACJIDJ* __cctor_b__23_0()
		{
			return ((::BODGPACJIDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
