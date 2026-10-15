#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLCBONEAMNL;
namespace System { class Object; }

#define PLCBONEAMNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF71230)
#define PLCBONEAMNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF71260)
#define PLCBONEAMNL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF71270)

inline static constexpr unsigned int PLCBONEAMNL___c_TypeDefinitionIndex = 30185;

	class PLCBONEAMNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCBONEAMNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL___C_CTOR_OFFSET))(this);
		}

		::PLCBONEAMNL* __cctor_b__28_0()
		{
			return ((::PLCBONEAMNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
