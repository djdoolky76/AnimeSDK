#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POBGLPDKGMC;
namespace System { class Object; }

#define POBGLPDKGMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC32E0)
#define POBGLPDKGMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC3320)
#define POBGLPDKGMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFC3330)

inline static constexpr unsigned int POBGLPDKGMC___c_TypeDefinitionIndex = 26469;

	class POBGLPDKGMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x527A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POBGLPDKGMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC___C_CTOR_OFFSET))(this);
		}

		::POBGLPDKGMC* __cctor_b__23_0()
		{
			return ((::POBGLPDKGMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
