#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKCJLICDPMD;
namespace System { class Object; }

#define BKCJLICDPMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4F430)
#define BKCJLICDPMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4F460)
#define BKCJLICDPMD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF4F470)

inline static constexpr unsigned int BKCJLICDPMD___c_TypeDefinitionIndex = 27807;

	class BKCJLICDPMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKCJLICDPMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD___C_CTOR_OFFSET))(this);
		}

		::BKCJLICDPMD* __cctor_b__38_0()
		{
			return ((::BKCJLICDPMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
