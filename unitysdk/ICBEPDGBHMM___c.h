#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICBEPDGBHMM;
namespace System { class Object; }

#define ICBEPDGBHMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F1080)
#define ICBEPDGBHMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F10C0)
#define ICBEPDGBHMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5F10D0)

inline static constexpr unsigned int ICBEPDGBHMM___c_TypeDefinitionIndex = 30510;

	class ICBEPDGBHMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICBEPDGBHMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM___C_CTOR_OFFSET))(this);
		}

		::ICBEPDGBHMM* __cctor_b__23_0()
		{
			return ((::ICBEPDGBHMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
