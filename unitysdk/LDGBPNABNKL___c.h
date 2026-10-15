#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDGBPNABNKL;
namespace System { class Object; }

#define LDGBPNABNKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8CB040)
#define LDGBPNABNKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8CB080)
#define LDGBPNABNKL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8CB090)

inline static constexpr unsigned int LDGBPNABNKL___c_TypeDefinitionIndex = 31443;

	class LDGBPNABNKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DC80);
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
