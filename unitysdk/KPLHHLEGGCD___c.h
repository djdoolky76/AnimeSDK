#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPLHHLEGGCD;
namespace System { class Object; }

#define KPLHHLEGGCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BFA60)
#define KPLHHLEGGCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BFAA0)
#define KPLHHLEGGCD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8BFAB0)

inline static constexpr unsigned int KPLHHLEGGCD___c_TypeDefinitionIndex = 28035;

	class KPLHHLEGGCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLHHLEGGCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD___C_CTOR_OFFSET))(this);
		}

		::KPLHHLEGGCD* __cctor_b__28_0()
		{
			return ((::KPLHHLEGGCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
