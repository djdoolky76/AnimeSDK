#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAIKGBIIFIH;
namespace System { class Object; }

#define LAIKGBIIFIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC0A1A0)
#define LAIKGBIIFIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0A1E0)
#define LAIKGBIIFIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC0A1F0)

inline static constexpr unsigned int LAIKGBIIFIH___c_TypeDefinitionIndex = 30105;

	class LAIKGBIIFIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25E70);
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
