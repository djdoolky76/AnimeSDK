#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNDBILOGFAF;
namespace System { class Object; }

#define JNDBILOGFAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E766CD0)
#define JNDBILOGFAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E766D10)
#define JNDBILOGFAF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E766D20)

inline static constexpr unsigned int JNDBILOGFAF___c_TypeDefinitionIndex = 30707;

	class JNDBILOGFAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNDBILOGFAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF___C_CTOR_OFFSET))(this);
		}

		::JNDBILOGFAF* __cctor_b__28_0()
		{
			return ((::JNDBILOGFAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
