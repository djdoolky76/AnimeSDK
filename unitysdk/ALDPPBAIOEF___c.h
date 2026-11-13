#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALDPPBAIOEF;
namespace System { class Object; }

#define ALDPPBAIOEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200187D0)
#define ALDPPBAIOEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20018800)
#define ALDPPBAIOEF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20018810)

inline static constexpr unsigned int ALDPPBAIOEF___c_TypeDefinitionIndex = 28124;

	class ALDPPBAIOEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALDPPBAIOEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDPPBAIOEF___C_CTOR_OFFSET))(this);
		}

		::ALDPPBAIOEF* __cctor_b__33_0()
		{
			return ((::ALDPPBAIOEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDPPBAIOEF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
