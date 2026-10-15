#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMGDNEIALG;
namespace System { class Object; }

#define JDMGDNEIALG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E1080)
#define JDMGDNEIALG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E10C0)
#define JDMGDNEIALG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6E10D0)

inline static constexpr unsigned int JDMGDNEIALG___c_TypeDefinitionIndex = 31200;

	class JDMGDNEIALG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDMGDNEIALG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG___C_CTOR_OFFSET))(this);
		}

		::JDMGDNEIALG* __cctor_b__33_0()
		{
			return ((::JDMGDNEIALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
