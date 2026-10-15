#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEMKFNABGG;
namespace System { class Object; }

#define AMEMKFNABGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51FF70)
#define AMEMKFNABGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E51FFB0)
#define AMEMKFNABGG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E51FFC0)

inline static constexpr unsigned int AMEMKFNABGG___c_TypeDefinitionIndex = 25397;

	class AMEMKFNABGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEMKFNABGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG___C_CTOR_OFFSET))(this);
		}

		::AMEMKFNABGG* __cctor_b__43_0()
		{
			return ((::AMEMKFNABGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
