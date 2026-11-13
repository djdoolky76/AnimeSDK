#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKFKPPNGCOD;
namespace System { class Object; }

#define OKFKPPNGCOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B1980)
#define OKFKPPNGCOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B19C0)
#define OKFKPPNGCOD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F6B19D0)

inline static constexpr unsigned int OKFKPPNGCOD___c_TypeDefinitionIndex = 29636;

	class OKFKPPNGCOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKFKPPNGCOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD___C_CTOR_OFFSET))(this);
		}

		::OKFKPPNGCOD* __cctor_b__33_0()
		{
			return ((::OKFKPPNGCOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
