#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEPHMALKDK;
namespace System { class Object; }

#define DFEPHMALKDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A11B0)
#define DFEPHMALKDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A11F0)
#define DFEPHMALKDK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E1A1200)

inline static constexpr unsigned int DFEPHMALKDK___c_TypeDefinitionIndex = 31965;

	class DFEPHMALKDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFEPHMALKDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK___C_CTOR_OFFSET))(this);
		}

		::DFEPHMALKDK* __cctor_b__43_0()
		{
			return ((::DFEPHMALKDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
