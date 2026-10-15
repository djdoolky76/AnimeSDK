#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIPBHLBFDAH;
namespace System { class Object; }

#define GIPBHLBFDAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E477070)
#define GIPBHLBFDAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4770B0)
#define GIPBHLBFDAH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E4770C0)

inline static constexpr unsigned int GIPBHLBFDAH___c_TypeDefinitionIndex = 27758;

	class GIPBHLBFDAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPBHLBFDAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH___C_CTOR_OFFSET))(this);
		}

		::GIPBHLBFDAH* __cctor_b__53_0()
		{
			return ((::GIPBHLBFDAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
