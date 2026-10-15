#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIFADCJKKFE;
namespace System { class Object; }

#define GIFADCJKKFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E468AB0)
#define GIFADCJKKFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E468AF0)
#define GIFADCJKKFE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E468B00)

inline static constexpr unsigned int GIFADCJKKFE___c_TypeDefinitionIndex = 26247;

	class GIFADCJKKFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIFADCJKKFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE___C_CTOR_OFFSET))(this);
		}

		::GIFADCJKKFE* __cctor_b__23_0()
		{
			return ((::GIFADCJKKFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
