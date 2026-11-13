#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGFEGEBEID;
namespace System { class Object; }

#define DNGFEGEBEID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201E5820)
#define DNGFEGEBEID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201E5860)
#define DNGFEGEBEID___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201E5870)

inline static constexpr unsigned int DNGFEGEBEID___c_TypeDefinitionIndex = 26490;

	class DNGFEGEBEID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNGFEGEBEID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID___C_CTOR_OFFSET))(this);
		}

		::DNGFEGEBEID* __cctor_b__23_0()
		{
			return ((::DNGFEGEBEID*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGFEGEBEID___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
