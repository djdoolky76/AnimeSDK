#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHOHCEGIHGF;
namespace System { class Object; }

#define KHOHCEGIHGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8211F0)
#define KHOHCEGIHGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E821230)
#define KHOHCEGIHGF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E821240)

inline static constexpr unsigned int KHOHCEGIHGF___c_TypeDefinitionIndex = 30937;

	class KHOHCEGIHGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHOHCEGIHGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF___C_CTOR_OFFSET))(this);
		}

		::KHOHCEGIHGF* __cctor_b__23_0()
		{
			return ((::KHOHCEGIHGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCEGIHGF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
