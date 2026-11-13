#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLFNCLPCJGO;
namespace System { class Object; }

#define KLFNCLPCJGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB9140)
#define KLFNCLPCJGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB9170)
#define KLFNCLPCJGO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDB9180)

inline static constexpr unsigned int KLFNCLPCJGO___c_TypeDefinitionIndex = 31841;

	class KLFNCLPCJGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLFNCLPCJGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFNCLPCJGO___C_CTOR_OFFSET))(this);
		}

		::KLFNCLPCJGO* __cctor_b__33_0()
		{
			return ((::KLFNCLPCJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFNCLPCJGO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
