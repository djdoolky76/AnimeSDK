#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGEKHPCNAKF;
namespace System { class Object; }

#define BGEKHPCNAKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA74160)
#define BGEKHPCNAKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA741A0)
#define BGEKHPCNAKF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA741B0)

inline static constexpr unsigned int BGEKHPCNAKF___c_TypeDefinitionIndex = 26714;

	class BGEKHPCNAKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGEKHPCNAKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF___C_CTOR_OFFSET))(this);
		}

		::BGEKHPCNAKF* __cctor_b__28_0()
		{
			return ((::BGEKHPCNAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEKHPCNAKF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
