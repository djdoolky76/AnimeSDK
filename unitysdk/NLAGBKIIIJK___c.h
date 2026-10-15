#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLAGBKIIIJK;
namespace System { class Object; }

#define NLAGBKIIIJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB32DA0)
#define NLAGBKIIIJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB32DE0)
#define NLAGBKIIIJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB32DF0)

inline static constexpr unsigned int NLAGBKIIIJK___c_TypeDefinitionIndex = 32798;

	class NLAGBKIIIJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAGBKIIIJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK___C_CTOR_OFFSET))(this);
		}

		::NLAGBKIIIJK* __cctor_b__28_0()
		{
			return ((::NLAGBKIIIJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
