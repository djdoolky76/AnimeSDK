#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBCPCBGHOO;
namespace System { class Object; }

#define JLBCPCBGHOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7457D0)
#define JLBCPCBGHOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E745800)
#define JLBCPCBGHOO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E745810)

inline static constexpr unsigned int JLBCPCBGHOO___c_TypeDefinitionIndex = 34036;

	class JLBCPCBGHOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBCPCBGHOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO___C_CTOR_OFFSET))(this);
		}

		::JLBCPCBGHOO* __cctor_b__23_0()
		{
			return ((::JLBCPCBGHOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
