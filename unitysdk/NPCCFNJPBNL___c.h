#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPCCFNJPBNL;
namespace System { class Object; }

#define NPCCFNJPBNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F088670)
#define NPCCFNJPBNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0886A0)
#define NPCCFNJPBNL___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1F0886B0)

inline static constexpr unsigned int NPCCFNJPBNL___c_TypeDefinitionIndex = 26840;

	class NPCCFNJPBNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCFNJPBNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCFNJPBNL___C_CTOR_OFFSET))(this);
		}

		::NPCCFNJPBNL* __cctor_b__63_0()
		{
			return ((::NPCCFNJPBNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCFNJPBNL___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
