#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDKNIMHHNPA;
namespace System { class Object; }

#define DDKNIMHHNPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F45A830)
#define DDKNIMHHNPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F45A870)
#define DDKNIMHHNPA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F45A880)

inline static constexpr unsigned int DDKNIMHHNPA___c_TypeDefinitionIndex = 28515;

	class DDKNIMHHNPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDKNIMHHNPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA___C_CTOR_OFFSET))(this);
		}

		::DDKNIMHHNPA* __cctor_b__43_0()
		{
			return ((::DDKNIMHHNPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
