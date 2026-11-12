#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNKGDKAIELH;
namespace System { class Object; }

#define MNKGDKAIELH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDD8310)
#define MNKGDKAIELH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD8340)
#define MNKGDKAIELH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FDD8350)

inline static constexpr unsigned int MNKGDKAIELH___c_TypeDefinitionIndex = 35846;

	class MNKGDKAIELH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNKGDKAIELH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKGDKAIELH___C_CTOR_OFFSET))(this);
		}

		::MNKGDKAIELH* __cctor_b__43_0()
		{
			return ((::MNKGDKAIELH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKGDKAIELH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
