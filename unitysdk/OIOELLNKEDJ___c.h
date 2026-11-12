#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIOELLNKEDJ;
namespace System { class Object; }

#define OIOELLNKEDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1237E0)
#define OIOELLNKEDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F123820)
#define OIOELLNKEDJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F123830)

inline static constexpr unsigned int OIOELLNKEDJ___c_TypeDefinitionIndex = 30519;

	class OIOELLNKEDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIOELLNKEDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ___C_CTOR_OFFSET))(this);
		}

		::OIOELLNKEDJ* __cctor_b__23_0()
		{
			return ((::OIOELLNKEDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
