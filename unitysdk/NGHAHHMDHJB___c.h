#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGHAHHMDHJB;
namespace System { class Object; }

#define NGHAHHMDHJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE1610)
#define NGHAHHMDHJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE1650)
#define NGHAHHMDHJB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAE1660)

inline static constexpr unsigned int NGHAHHMDHJB___c_TypeDefinitionIndex = 31413;

	class NGHAHHMDHJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGHAHHMDHJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHAHHMDHJB___C_CTOR_OFFSET))(this);
		}

		::NGHAHHMDHJB* __cctor_b__23_0()
		{
			return ((::NGHAHHMDHJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHAHHMDHJB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
