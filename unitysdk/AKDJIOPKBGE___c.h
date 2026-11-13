#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKDJIOPKBGE;
namespace System { class Object; }

#define AKDJIOPKBGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20638E30)
#define AKDJIOPKBGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20638E60)
#define AKDJIOPKBGE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20638E70)

inline static constexpr unsigned int AKDJIOPKBGE___c_TypeDefinitionIndex = 31679;

	class AKDJIOPKBGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDJIOPKBGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE___C_CTOR_OFFSET))(this);
		}

		::AKDJIOPKBGE* __cctor_b__28_0()
		{
			return ((::AKDJIOPKBGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDJIOPKBGE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
