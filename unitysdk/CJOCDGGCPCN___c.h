#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJOCDGGCPCN;
namespace System { class Object; }

#define CJOCDGGCPCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E6300)
#define CJOCDGGCPCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E6330)
#define CJOCDGGCPCN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0E6340)

inline static constexpr unsigned int CJOCDGGCPCN___c_TypeDefinitionIndex = 33711;

	class CJOCDGGCPCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJOCDGGCPCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN___C_CTOR_OFFSET))(this);
		}

		::CJOCDGGCPCN* __cctor_b__38_0()
		{
			return ((::CJOCDGGCPCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
