#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMELHLBNKAM;
namespace System { class Object; }

#define AMELHLBNKAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7D9CE0)
#define AMELHLBNKAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D9D20)
#define AMELHLBNKAM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F7D9D30)

inline static constexpr unsigned int AMELHLBNKAM___c_TypeDefinitionIndex = 30466;

	class AMELHLBNKAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMELHLBNKAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM___C_CTOR_OFFSET))(this);
		}

		::AMELHLBNKAM* __cctor_b__23_0()
		{
			return ((::AMELHLBNKAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
