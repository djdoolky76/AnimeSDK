#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIAMONOAIJA;
namespace System { class Object; }

#define FIAMONOAIJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F69A500)
#define FIAMONOAIJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F69A540)
#define FIAMONOAIJA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F69A550)

inline static constexpr unsigned int FIAMONOAIJA___c_TypeDefinitionIndex = 30400;

	class FIAMONOAIJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x443F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIAMONOAIJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA___C_CTOR_OFFSET))(this);
		}

		::FIAMONOAIJA* __cctor_b__23_0()
		{
			return ((::FIAMONOAIJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
