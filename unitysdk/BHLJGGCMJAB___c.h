#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHLJGGCMJAB;
namespace System { class Object; }

#define BHLJGGCMJAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F007530)
#define BHLJGGCMJAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F007560)
#define BHLJGGCMJAB___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1F007570)

inline static constexpr unsigned int BHLJGGCMJAB___c_TypeDefinitionIndex = 33096;

	class BHLJGGCMJAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHLJGGCMJAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLJGGCMJAB___C_CTOR_OFFSET))(this);
		}

		::BHLJGGCMJAB* __cctor_b__63_0()
		{
			return ((::BHLJGGCMJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLJGGCMJAB___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
