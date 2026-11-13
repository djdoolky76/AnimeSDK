#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPIHDPGDMKB;
namespace System { class Object; }

#define KPIHDPGDMKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205BB150)
#define KPIHDPGDMKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205BB180)
#define KPIHDPGDMKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x205BB190)

inline static constexpr unsigned int KPIHDPGDMKB___c_TypeDefinitionIndex = 34154;

	class KPIHDPGDMKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPIHDPGDMKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB___C_CTOR_OFFSET))(this);
		}

		::KPIHDPGDMKB* __cctor_b__33_0()
		{
			return ((::KPIHDPGDMKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
