#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNELOGOPCKE;
namespace System { class Object; }

#define FNELOGOPCKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C1CA0)
#define FNELOGOPCKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C1CD0)
#define FNELOGOPCKE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3C1CE0)

inline static constexpr unsigned int FNELOGOPCKE___c_TypeDefinitionIndex = 34725;

	class FNELOGOPCKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNELOGOPCKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE___C_CTOR_OFFSET))(this);
		}

		::FNELOGOPCKE* __cctor_b__28_0()
		{
			return ((::FNELOGOPCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
