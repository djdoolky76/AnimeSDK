#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBANJNLBDBB;
namespace System { class Object; }

#define CBANJNLBDBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E033F50)
#define CBANJNLBDBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E033F90)
#define CBANJNLBDBB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E033FA0)

inline static constexpr unsigned int CBANJNLBDBB___c_TypeDefinitionIndex = 33222;

	class CBANJNLBDBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBANJNLBDBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB___C_CTOR_OFFSET))(this);
		}

		::CBANJNLBDBB* __cctor_b__23_0()
		{
			return ((::CBANJNLBDBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
