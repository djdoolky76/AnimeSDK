#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCDADKLNKO;
namespace System { class Object; }

#define ALCDADKLNKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20015310)
#define ALCDADKLNKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20015350)
#define ALCDADKLNKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20015360)

inline static constexpr unsigned int ALCDADKLNKO___c_TypeDefinitionIndex = 28316;

	class ALCDADKLNKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x364E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALCDADKLNKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO___C_CTOR_OFFSET))(this);
		}

		::ALCDADKLNKO* __cctor_b__28_0()
		{
			return ((::ALCDADKLNKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
