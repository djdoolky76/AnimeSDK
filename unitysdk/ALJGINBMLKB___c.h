#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALJGINBMLKB;
namespace System { class Object; }

#define ALJGINBMLKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2001CB40)
#define ALJGINBMLKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2001CB80)
#define ALJGINBMLKB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2001CB90)

inline static constexpr unsigned int ALJGINBMLKB___c_TypeDefinitionIndex = 36069;

	class ALJGINBMLKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x379D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALJGINBMLKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB___C_CTOR_OFFSET))(this);
		}

		::ALJGINBMLKB* __cctor_b__28_0()
		{
			return ((::ALJGINBMLKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
