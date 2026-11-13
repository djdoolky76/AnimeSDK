#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPJIDIACCKN;
namespace System { class Object; }

#define KPJIDIACCKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20379670)
#define KPJIDIACCKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203796B0)
#define KPJIDIACCKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203796C0)

inline static constexpr unsigned int KPJIDIACCKN___c_TypeDefinitionIndex = 33118;

	class KPJIDIACCKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJIDIACCKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN___C_CTOR_OFFSET))(this);
		}

		::KPJIDIACCKN* __cctor_b__28_0()
		{
			return ((::KPJIDIACCKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
