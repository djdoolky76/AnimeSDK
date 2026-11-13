#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAAGMMIDHDB;
namespace System { class Object; }

#define BAAGMMIDHDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2056DD60)
#define BAAGMMIDHDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2056DDA0)
#define BAAGMMIDHDB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2056DDB0)

inline static constexpr unsigned int BAAGMMIDHDB___c_TypeDefinitionIndex = 30103;

	class BAAGMMIDHDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAAGMMIDHDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB___C_CTOR_OFFSET))(this);
		}

		::BAAGMMIDHDB* __cctor_b__23_0()
		{
			return ((::BAAGMMIDHDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAGMMIDHDB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
