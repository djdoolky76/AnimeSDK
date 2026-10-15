#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPLFEKKNLDO;
namespace System { class Object; }

#define CPLFEKKNLDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E115860)
#define CPLFEKKNLDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1158A0)
#define CPLFEKKNLDO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1158B0)

inline static constexpr unsigned int CPLFEKKNLDO___c_TypeDefinitionIndex = 31935;

	class CPLFEKKNLDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPLFEKKNLDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO___C_CTOR_OFFSET))(this);
		}

		::CPLFEKKNLDO* __cctor_b__38_0()
		{
			return ((::CPLFEKKNLDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
