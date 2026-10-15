#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAEIIKKNAON;
namespace System { class Object; }

#define HAEIIKKNAON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D5820)
#define HAEIIKKNAON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D5860)
#define HAEIIKKNAON___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4D5870)

inline static constexpr unsigned int HAEIIKKNAON___c_TypeDefinitionIndex = 27702;

	class HAEIIKKNAON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x248C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAEIIKKNAON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON___C_CTOR_OFFSET))(this);
		}

		::HAEIIKKNAON* __cctor_b__23_0()
		{
			return ((::HAEIIKKNAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEIIKKNAON___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
