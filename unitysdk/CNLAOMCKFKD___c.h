#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNLAOMCKFKD;
namespace System { class Object; }

#define CNLAOMCKFKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10A8D0)
#define CNLAOMCKFKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10A910)
#define CNLAOMCKFKD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E10A920)

inline static constexpr unsigned int CNLAOMCKFKD___c_TypeDefinitionIndex = 34709;

	class CNLAOMCKFKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLAOMCKFKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD___C_CTOR_OFFSET))(this);
		}

		::CNLAOMCKFKD* __cctor_b__38_0()
		{
			return ((::CNLAOMCKFKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
