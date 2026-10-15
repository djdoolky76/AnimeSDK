#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAIHLAKPABN;
namespace System { class Object; }

#define FAIHLAKPABN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9240)
#define FAIHLAKPABN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9280)
#define FAIHLAKPABN___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E2F9290)

inline static constexpr unsigned int FAIHLAKPABN___c_TypeDefinitionIndex = 29691;

	class FAIHLAKPABN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAIHLAKPABN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN___C_CTOR_OFFSET))(this);
		}

		::FAIHLAKPABN* __cctor_b__53_0()
		{
			return ((::FAIHLAKPABN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIHLAKPABN___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
