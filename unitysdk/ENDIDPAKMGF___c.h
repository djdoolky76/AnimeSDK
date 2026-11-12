#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENDIDPAKMGF;
namespace System { class Object; }

#define ENDIDPAKMGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5CF870)
#define ENDIDPAKMGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5CF8B0)
#define ENDIDPAKMGF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5CF8C0)

inline static constexpr unsigned int ENDIDPAKMGF___c_TypeDefinitionIndex = 28689;

	class ENDIDPAKMGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENDIDPAKMGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF___C_CTOR_OFFSET))(this);
		}

		::ENDIDPAKMGF* __cctor_b__23_0()
		{
			return ((::ENDIDPAKMGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
