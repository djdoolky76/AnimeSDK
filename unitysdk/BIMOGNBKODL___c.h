#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIMOGNBKODL;
namespace System { class Object; }

#define BIMOGNBKODL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD8530)
#define BIMOGNBKODL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD8570)
#define BIMOGNBKODL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDD8580)

inline static constexpr unsigned int BIMOGNBKODL___c_TypeDefinitionIndex = 32313;

	class BIMOGNBKODL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIMOGNBKODL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL___C_CTOR_OFFSET))(this);
		}

		::BIMOGNBKODL* __cctor_b__23_0()
		{
			return ((::BIMOGNBKODL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
