#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIMNPPNNHEL;
namespace System { class Object; }

#define JIMNPPNNHEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7250A0)
#define JIMNPPNNHEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7250E0)
#define JIMNPPNNHEL___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E7250F0)

inline static constexpr unsigned int JIMNPPNNHEL___c_TypeDefinitionIndex = 28286;

	class JIMNPPNNHEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIMNPPNNHEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMNPPNNHEL___C_CTOR_OFFSET))(this);
		}

		::JIMNPPNNHEL* __cctor_b__53_0()
		{
			return ((::JIMNPPNNHEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMNPPNNHEL___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
