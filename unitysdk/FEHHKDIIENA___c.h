#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEHHKDIIENA;
namespace System { class Object; }

#define FEHHKDIIENA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3392B0)
#define FEHHKDIIENA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3392E0)
#define FEHHKDIIENA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3392F0)

inline static constexpr unsigned int FEHHKDIIENA___c_TypeDefinitionIndex = 31341;

	class FEHHKDIIENA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEHHKDIIENA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA___C_CTOR_OFFSET))(this);
		}

		::FEHHKDIIENA* __cctor_b__28_0()
		{
			return ((::FEHHKDIIENA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
