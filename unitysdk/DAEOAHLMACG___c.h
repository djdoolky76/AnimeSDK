#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAEOAHLMACG;
namespace System { class Object; }

#define DAEOAHLMACG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14F3F0)
#define DAEOAHLMACG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14F430)
#define DAEOAHLMACG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E14F440)

inline static constexpr unsigned int DAEOAHLMACG___c_TypeDefinitionIndex = 32711;

	class DAEOAHLMACG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x244F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAEOAHLMACG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEOAHLMACG___C_CTOR_OFFSET))(this);
		}

		::DAEOAHLMACG* __cctor_b__38_0()
		{
			return ((::DAEOAHLMACG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEOAHLMACG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
