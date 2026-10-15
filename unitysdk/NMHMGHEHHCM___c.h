#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMHMGHEHHCM;
namespace System { class Object; }

#define NMHMGHEHHCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4A150)
#define NMHMGHEHHCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4A180)
#define NMHMGHEHHCM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB4A190)

inline static constexpr unsigned int NMHMGHEHHCM___c_TypeDefinitionIndex = 33194;

	class NMHMGHEHHCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6AAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMHMGHEHHCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM___C_CTOR_OFFSET))(this);
		}

		::NMHMGHEHHCM* __cctor_b__28_0()
		{
			return ((::NMHMGHEHHCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
