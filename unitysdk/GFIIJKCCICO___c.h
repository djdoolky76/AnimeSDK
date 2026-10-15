#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFIIJKCCICO;
namespace System { class Object; }

#define GFIIJKCCICO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E442880)
#define GFIIJKCCICO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4428B0)
#define GFIIJKCCICO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E4428C0)

inline static constexpr unsigned int GFIIJKCCICO___c_TypeDefinitionIndex = 27867;

	class GFIIJKCCICO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFIIJKCCICO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJKCCICO___C_CTOR_OFFSET))(this);
		}

		::GFIIJKCCICO* __cctor_b__18_0()
		{
			return ((::GFIIJKCCICO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJKCCICO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
