#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMHMGHEHHCM;
namespace System { class Object; }

#define NMHMGHEHHCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F069C00)
#define NMHMGHEHHCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F069C30)
#define NMHMGHEHHCM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F069C40)

inline static constexpr unsigned int NMHMGHEHHCM___c_TypeDefinitionIndex = 34109;

	class NMHMGHEHHCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x71850);
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
