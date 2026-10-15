#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGDLEHEDFB;
namespace System { class Object; }

#define DMGDLEHEDFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C00A0)
#define DMGDLEHEDFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C00D0)
#define DMGDLEHEDFB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1C00E0)

inline static constexpr unsigned int DMGDLEHEDFB___c_TypeDefinitionIndex = 26098;

	class DMGDLEHEDFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMGDLEHEDFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB___C_CTOR_OFFSET))(this);
		}

		::DMGDLEHEDFB* __cctor_b__33_0()
		{
			return ((::DMGDLEHEDFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
