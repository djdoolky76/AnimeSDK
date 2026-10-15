#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBLONDAEJMC;
namespace System { class Object; }

#define FBLONDAEJMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30C200)
#define FBLONDAEJMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30C240)
#define FBLONDAEJMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E30C250)

inline static constexpr unsigned int FBLONDAEJMC___c_TypeDefinitionIndex = 33155;

	class FBLONDAEJMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ED50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBLONDAEJMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC___C_CTOR_OFFSET))(this);
		}

		::FBLONDAEJMC* __cctor_b__23_0()
		{
			return ((::FBLONDAEJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
