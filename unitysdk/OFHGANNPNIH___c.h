#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFHGANNPNIH;
namespace System { class Object; }

#define OFHGANNPNIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1AAC0)
#define OFHGANNPNIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1AB00)
#define OFHGANNPNIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE1AB10)

inline static constexpr unsigned int OFHGANNPNIH___c_TypeDefinitionIndex = 26726;

	class OFHGANNPNIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFHGANNPNIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH___C_CTOR_OFFSET))(this);
		}

		::OFHGANNPNIH* __cctor_b__23_0()
		{
			return ((::OFHGANNPNIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
