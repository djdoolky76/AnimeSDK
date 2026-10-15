#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEKLHPINHL;
namespace System { class Object; }

#define HIEKLHPINHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5932A0)
#define HIEKLHPINHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5932D0)
#define HIEKLHPINHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5932E0)

inline static constexpr unsigned int HIEKLHPINHL___c_TypeDefinitionIndex = 33949;

	class HIEKLHPINHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEKLHPINHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL___C_CTOR_OFFSET))(this);
		}

		::HIEKLHPINHL* __cctor_b__28_0()
		{
			return ((::HIEKLHPINHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
