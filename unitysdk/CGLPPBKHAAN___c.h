#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGLPPBKHAAN;
namespace System { class Object; }

#define CGLPPBKHAAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B32E0)
#define CGLPPBKHAAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B3320)
#define CGLPPBKHAAN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0B3330)

inline static constexpr unsigned int CGLPPBKHAAN___c_TypeDefinitionIndex = 26915;

	class CGLPPBKHAAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x149D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGLPPBKHAAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN___C_CTOR_OFFSET))(this);
		}

		::CGLPPBKHAAN* __cctor_b__33_0()
		{
			return ((::CGLPPBKHAAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLPPBKHAAN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
