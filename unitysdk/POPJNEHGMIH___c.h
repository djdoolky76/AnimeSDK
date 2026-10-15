#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POPJNEHGMIH;
namespace System { class Object; }

#define POPJNEHGMIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD10F0)
#define POPJNEHGMIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD1120)
#define POPJNEHGMIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFD1130)

inline static constexpr unsigned int POPJNEHGMIH___c_TypeDefinitionIndex = 26092;

	class POPJNEHGMIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x435C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POPJNEHGMIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH___C_CTOR_OFFSET))(this);
		}

		::POPJNEHGMIH* __cctor_b__28_0()
		{
			return ((::POPJNEHGMIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPJNEHGMIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
