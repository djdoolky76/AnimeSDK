#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDGEIAHNDAD;
namespace System { class Object; }

#define GDGEIAHNDAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F737370)
#define GDGEIAHNDAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7373A0)
#define GDGEIAHNDAD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F7373B0)

inline static constexpr unsigned int GDGEIAHNDAD___c_TypeDefinitionIndex = 26734;

	class GDGEIAHNDAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x571C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGEIAHNDAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD___C_CTOR_OFFSET))(this);
		}

		::GDGEIAHNDAD* __cctor_b__38_0()
		{
			return ((::GDGEIAHNDAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGEIAHNDAD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
