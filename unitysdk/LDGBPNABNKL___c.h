#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDGBPNABNKL;
namespace System { class Object; }

#define LDGBPNABNKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F806EC0)
#define LDGBPNABNKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F806F00)
#define LDGBPNABNKL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F806F10)

inline static constexpr unsigned int LDGBPNABNKL___c_TypeDefinitionIndex = 32356;

	class LDGBPNABNKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDGBPNABNKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL___C_CTOR_OFFSET))(this);
		}

		::LDGBPNABNKL* __cctor_b__28_0()
		{
			return ((::LDGBPNABNKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGBPNABNKL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
