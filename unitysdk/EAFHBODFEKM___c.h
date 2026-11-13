#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAFHBODFEKM;
namespace System { class Object; }

#define EAFHBODFEKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203E8870)
#define EAFHBODFEKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203E88B0)
#define EAFHBODFEKM___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x203E88C0)

inline static constexpr unsigned int EAFHBODFEKM___c_TypeDefinitionIndex = 33076;

	class EAFHBODFEKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAFHBODFEKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFHBODFEKM___C_CTOR_OFFSET))(this);
		}

		::EAFHBODFEKM* __cctor_b__36_0()
		{
			return ((::EAFHBODFEKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFHBODFEKM___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
