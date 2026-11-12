#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMKALFJHFJP;
namespace System { class Object; }

#define AMKALFJHFJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E02E0)
#define AMKALFJHFJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E0310)
#define AMKALFJHFJP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F7E0320)

inline static constexpr unsigned int AMKALFJHFJP___c_TypeDefinitionIndex = 33790;

	class AMKALFJHFJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x407B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMKALFJHFJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKALFJHFJP___C_CTOR_OFFSET))(this);
		}

		::AMKALFJHFJP* __cctor_b__38_0()
		{
			return ((::AMKALFJHFJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKALFJHFJP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
