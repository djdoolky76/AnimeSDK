#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMGDNEIALG;
namespace System { class Object; }

#define JDMGDNEIALG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1CDE0)
#define JDMGDNEIALG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1CE20)
#define JDMGDNEIALG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA1CE30)

inline static constexpr unsigned int JDMGDNEIALG___c_TypeDefinitionIndex = 32113;

	class JDMGDNEIALG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E960);
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
