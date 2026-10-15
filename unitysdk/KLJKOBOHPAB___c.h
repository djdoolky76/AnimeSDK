#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJKOBOHPAB;
namespace System { class Object; }

#define KLJKOBOHPAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E861AF0)
#define KLJKOBOHPAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E861B20)
#define KLJKOBOHPAB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E861B30)

inline static constexpr unsigned int KLJKOBOHPAB___c_TypeDefinitionIndex = 26869;

	class KLJKOBOHPAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJKOBOHPAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB___C_CTOR_OFFSET))(this);
		}

		::KLJKOBOHPAB* __cctor_b__38_0()
		{
			return ((::KLJKOBOHPAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
