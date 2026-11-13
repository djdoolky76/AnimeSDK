#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBIBDLLLCLH;
namespace System { class Object; }

#define NBIBDLLLCLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2015C050)
#define NBIBDLLLCLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2015C090)
#define NBIBDLLLCLH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x2015C0A0)

inline static constexpr unsigned int NBIBDLLLCLH___c_TypeDefinitionIndex = 28340;

	class NBIBDLLLCLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBIBDLLLCLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH___C_CTOR_OFFSET))(this);
		}

		::NBIBDLLLCLH* __cctor_b__38_0()
		{
			return ((::NBIBDLLLCLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
