#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMOPLIGAKGM;
namespace System { class Object; }

#define NMOPLIGAKGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4F0B0)
#define NMOPLIGAKGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4F0F0)
#define NMOPLIGAKGM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EB4F100)

inline static constexpr unsigned int NMOPLIGAKGM___c_TypeDefinitionIndex = 28703;

	class NMOPLIGAKGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMOPLIGAKGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOPLIGAKGM___C_CTOR_OFFSET))(this);
		}

		::NMOPLIGAKGM* __cctor_b__48_0()
		{
			return ((::NMOPLIGAKGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOPLIGAKGM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
