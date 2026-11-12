#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGILDLDMGEI;
namespace System { class Object; }

#define DGILDLDMGEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F48A000)
#define DGILDLDMGEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F48A040)
#define DGILDLDMGEI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F48A050)

inline static constexpr unsigned int DGILDLDMGEI___c_TypeDefinitionIndex = 30272;

	class DGILDLDMGEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGILDLDMGEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI___C_CTOR_OFFSET))(this);
		}

		::DGILDLDMGEI* __cctor_b__18_0()
		{
			return ((::DGILDLDMGEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
