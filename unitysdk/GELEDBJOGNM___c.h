#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GELEDBJOGNM;
namespace System { class Object; }

#define GELEDBJOGNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45DA70)
#define GELEDBJOGNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45DAB0)
#define GELEDBJOGNM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E45DAC0)

inline static constexpr unsigned int GELEDBJOGNM___c_TypeDefinitionIndex = 27644;

	class GELEDBJOGNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GELEDBJOGNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM___C_CTOR_OFFSET))(this);
		}

		::GELEDBJOGNM* __cctor_b__28_0()
		{
			return ((::GELEDBJOGNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
