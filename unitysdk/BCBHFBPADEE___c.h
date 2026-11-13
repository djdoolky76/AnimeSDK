#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBHFBPADEE;
namespace System { class Object; }

#define BCBHFBPADEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA78D90)
#define BCBHFBPADEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA78DC0)
#define BCBHFBPADEE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA78DD0)

inline static constexpr unsigned int BCBHFBPADEE___c_TypeDefinitionIndex = 31715;

	class BCBHFBPADEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCBHFBPADEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE___C_CTOR_OFFSET))(this);
		}

		::BCBHFBPADEE* __cctor_b__28_0()
		{
			return ((::BCBHFBPADEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
