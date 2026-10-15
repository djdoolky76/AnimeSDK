#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOMDFDFEGDN;
namespace System { class Object; }

#define KOMDFDFEGDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E887050)
#define KOMDFDFEGDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E887090)
#define KOMDFDFEGDN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8870A0)

inline static constexpr unsigned int KOMDFDFEGDN___c_TypeDefinitionIndex = 32141;

	class KOMDFDFEGDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOMDFDFEGDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN___C_CTOR_OFFSET))(this);
		}

		::KOMDFDFEGDN* __cctor_b__23_0()
		{
			return ((::KOMDFDFEGDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMDFDFEGDN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
