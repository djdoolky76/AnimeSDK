#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFKCKOIFCM;
namespace System { class Object; }

#define AOFKCKOIFCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F928AF0)
#define AOFKCKOIFCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F928B30)
#define AOFKCKOIFCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F928B40)

inline static constexpr unsigned int AOFKCKOIFCM___c_TypeDefinitionIndex = 33999;

	class AOFKCKOIFCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOFKCKOIFCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM___C_CTOR_OFFSET))(this);
		}

		::AOFKCKOIFCM* __cctor_b__23_0()
		{
			return ((::AOFKCKOIFCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
