#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIAIMCOFMGH;
namespace System { class Object; }

#define IIAIMCOFMGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E684460)
#define IIAIMCOFMGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6844A0)
#define IIAIMCOFMGH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6844B0)

inline static constexpr unsigned int IIAIMCOFMGH___c_TypeDefinitionIndex = 25949;

	class IIAIMCOFMGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIAIMCOFMGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH___C_CTOR_OFFSET))(this);
		}

		::IIAIMCOFMGH* __cctor_b__28_0()
		{
			return ((::IIAIMCOFMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
