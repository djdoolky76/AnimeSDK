#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMADMOMNBMO;
namespace System { class Object; }

#define NMADMOMNBMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F05DB30)
#define NMADMOMNBMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F05DB70)
#define NMADMOMNBMO___C___CCTOR_B__54_0_OFFSET UNITYSDK_OFFSET(0x1F05DB80)

inline static constexpr unsigned int NMADMOMNBMO___c_TypeDefinitionIndex = 27277;

	class NMADMOMNBMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x71330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMADMOMNBMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMADMOMNBMO___C_CTOR_OFFSET))(this);
		}

		::NMADMOMNBMO* __cctor_b__54_0()
		{
			return ((::NMADMOMNBMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMADMOMNBMO___C___CCTOR_B__54_0_OFFSET))(this);
		}

	};
