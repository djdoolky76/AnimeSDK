#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMCGEGIPAKJ;
namespace System { class Object; }

#define AMCGEGIPAKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200261B0)
#define AMCGEGIPAKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200261F0)
#define AMCGEGIPAKJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20026200)

inline static constexpr unsigned int AMCGEGIPAKJ___c_TypeDefinitionIndex = 29572;

	class AMCGEGIPAKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x391C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMCGEGIPAKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ___C_CTOR_OFFSET))(this);
		}

		::AMCGEGIPAKJ* __cctor_b__28_0()
		{
			return ((::AMCGEGIPAKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
