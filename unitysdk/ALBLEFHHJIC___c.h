#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALBLEFHHJIC;
namespace System { class Object; }

#define ALBLEFHHJIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5570)
#define ALBLEFHHJIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A55B0)
#define ALBLEFHHJIC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3A55C0)

inline static constexpr unsigned int ALBLEFHHJIC___c_TypeDefinitionIndex = 32683;

	class ALBLEFHHJIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBLEFHHJIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBLEFHHJIC___C_CTOR_OFFSET))(this);
		}

		::ALBLEFHHJIC* __cctor_b__38_0()
		{
			return ((::ALBLEFHHJIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBLEFHHJIC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
