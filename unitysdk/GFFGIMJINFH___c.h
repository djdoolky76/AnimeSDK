#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFFGIMJINFH;
namespace System { class Object; }

#define GFFGIMJINFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2007C930)
#define GFFGIMJINFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2007C970)
#define GFFGIMJINFH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2007C980)

inline static constexpr unsigned int GFFGIMJINFH___c_TypeDefinitionIndex = 25611;

	class GFFGIMJINFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFGIMJINFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGIMJINFH___C_CTOR_OFFSET))(this);
		}

		::GFFGIMJINFH* __cctor_b__33_0()
		{
			return ((::GFFGIMJINFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGIMJINFH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
