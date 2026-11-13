#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEAMNAAJJHI;
namespace System { class Object; }

#define OEAMNAAJJHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB54520)
#define OEAMNAAJJHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB54560)
#define OEAMNAAJJHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB54570)

inline static constexpr unsigned int OEAMNAAJJHI___c_TypeDefinitionIndex = 29087;

	class OEAMNAAJJHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEAMNAAJJHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMNAAJJHI___C_CTOR_OFFSET))(this);
		}

		::OEAMNAAJJHI* __cctor_b__23_0()
		{
			return ((::OEAMNAAJJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMNAAJJHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
