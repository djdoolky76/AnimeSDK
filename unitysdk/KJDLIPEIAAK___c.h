#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJDLIPEIAAK;
namespace System { class Object; }

#define KJDLIPEIAAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB83A60)
#define KJDLIPEIAAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB83AA0)
#define KJDLIPEIAAK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB83AB0)

inline static constexpr unsigned int KJDLIPEIAAK___c_TypeDefinitionIndex = 31099;

	class KJDLIPEIAAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJDLIPEIAAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK___C_CTOR_OFFSET))(this);
		}

		::KJDLIPEIAAK* __cctor_b__28_0()
		{
			return ((::KJDLIPEIAAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDLIPEIAAK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
