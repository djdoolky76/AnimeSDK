#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAIKGBIIFIH;
namespace System { class Object; }

#define LAIKGBIIFIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203885E0)
#define LAIKGBIIFIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20388620)
#define LAIKGBIIFIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20388630)

inline static constexpr unsigned int LAIKGBIIFIH___c_TypeDefinitionIndex = 30105;

	class LAIKGBIIFIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAIKGBIIFIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH___C_CTOR_OFFSET))(this);
		}

		::LAIKGBIIFIH* __cctor_b__23_0()
		{
			return ((::LAIKGBIIFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
