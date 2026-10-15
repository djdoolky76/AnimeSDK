#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define EJOKHBOJHNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x154EA2C0)
#define EJOKHBOJHNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x154EA300)
#define EJOKHBOJHNA___C___ENDMATCHANDADVANCE_B__19_1_OFFSET UNITYSDK_OFFSET(0x154EA310)

inline static constexpr unsigned int EJOKHBOJHNA___c_TypeDefinitionIndex = 81847;

	class EJOKHBOJHNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x348C0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__19_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x348C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJOKHBOJHNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKHBOJHNA___C_CTOR_OFFSET))(this);
		}

		::System::Void __EndMatchAndAdvance_b__19_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA___C___ENDMATCHANDADVANCE_B__19_1_OFFSET))(this, a1);
		}

	};
