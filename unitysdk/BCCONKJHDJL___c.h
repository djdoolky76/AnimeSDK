#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCONKJHDJL;
namespace System { class Object; }

#define BCCONKJHDJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9068D0)
#define BCCONKJHDJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E906910)
#define BCCONKJHDJL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E906920)

inline static constexpr unsigned int BCCONKJHDJL___c_TypeDefinitionIndex = 25351;

	class BCCONKJHDJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCCONKJHDJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCONKJHDJL___C_CTOR_OFFSET))(this);
		}

		::BCCONKJHDJL* __cctor_b__38_0()
		{
			return ((::BCCONKJHDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCONKJHDJL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
