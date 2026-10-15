#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLLAEFNBCIM;
namespace System { class Object; }

#define OLLAEFNBCIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA88E0)
#define OLLAEFNBCIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA8920)
#define OLLAEFNBCIM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEA8930)

inline static constexpr unsigned int OLLAEFNBCIM___c_TypeDefinitionIndex = 26716;

	class OLLAEFNBCIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x239E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLAEFNBCIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM___C_CTOR_OFFSET))(this);
		}

		::OLLAEFNBCIM* __cctor_b__23_0()
		{
			return ((::OLLAEFNBCIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
