#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEILAINOLPO;
namespace System { class Object; }

#define EEILAINOLPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2048C990)
#define EEILAINOLPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2048C9D0)
#define EEILAINOLPO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2048C9E0)

inline static constexpr unsigned int EEILAINOLPO___c_TypeDefinitionIndex = 34395;

	class EEILAINOLPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEILAINOLPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEILAINOLPO___C_CTOR_OFFSET))(this);
		}

		::EEILAINOLPO* __cctor_b__33_0()
		{
			return ((::EEILAINOLPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEILAINOLPO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
