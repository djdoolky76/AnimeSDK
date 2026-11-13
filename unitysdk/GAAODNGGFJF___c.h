#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAAODNGGFJF;
namespace System { class Object; }

#define GAAODNGGFJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB9EA30)
#define GAAODNGGFJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB9EA70)
#define GAAODNGGFJF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FB9EA80)

inline static constexpr unsigned int GAAODNGGFJF___c_TypeDefinitionIndex = 28681;

	class GAAODNGGFJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAAODNGGFJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF___C_CTOR_OFFSET))(this);
		}

		::GAAODNGGFJF* __cctor_b__38_0()
		{
			return ((::GAAODNGGFJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAODNGGFJF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
