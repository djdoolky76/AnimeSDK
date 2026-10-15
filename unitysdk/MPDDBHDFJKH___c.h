#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPDDBHDFJKH;
namespace System { class Object; }

#define MPDDBHDFJKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB57A0)
#define MPDDBHDFJKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB57E0)
#define MPDDBHDFJKH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAB57F0)

inline static constexpr unsigned int MPDDBHDFJKH___c_TypeDefinitionIndex = 33001;

	class MPDDBHDFJKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDDBHDFJKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH___C_CTOR_OFFSET))(this);
		}

		::MPDDBHDFJKH* __cctor_b__23_0()
		{
			return ((::MPDDBHDFJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
