#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGPEHMLFJBN;
namespace System { class Object; }

#define AGPEHMLFJBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204F71E0)
#define AGPEHMLFJBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204F7220)
#define AGPEHMLFJBN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x204F7230)

inline static constexpr unsigned int AGPEHMLFJBN___c_TypeDefinitionIndex = 35574;

	class AGPEHMLFJBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPEHMLFJBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN___C_CTOR_OFFSET))(this);
		}

		::AGPEHMLFJBN* __cctor_b__38_0()
		{
			return ((::AGPEHMLFJBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPEHMLFJBN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
