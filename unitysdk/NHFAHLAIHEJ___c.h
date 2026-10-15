#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHFAHLAIHEJ;
namespace System { class Object; }

#define NHFAHLAIHEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAED140)
#define NHFAHLAIHEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAED180)
#define NHFAHLAIHEJ___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EAED190)

inline static constexpr unsigned int NHFAHLAIHEJ___c_TypeDefinitionIndex = 27985;

	class NHFAHLAIHEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHFAHLAIHEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFAHLAIHEJ___C_CTOR_OFFSET))(this);
		}

		::NHFAHLAIHEJ* __cctor_b__43_0()
		{
			return ((::NHFAHLAIHEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFAHLAIHEJ___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
