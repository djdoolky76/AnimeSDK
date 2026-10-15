#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHKIEHONGB;
namespace System { class Object; }

#define EPHKIEHONGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DF620)
#define EPHKIEHONGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DF660)
#define EPHKIEHONGB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2DF670)

inline static constexpr unsigned int EPHKIEHONGB___c_TypeDefinitionIndex = 34741;

	class EPHKIEHONGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPHKIEHONGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHKIEHONGB___C_CTOR_OFFSET))(this);
		}

		::EPHKIEHONGB* __cctor_b__43_0()
		{
			return ((::EPHKIEHONGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHKIEHONGB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
