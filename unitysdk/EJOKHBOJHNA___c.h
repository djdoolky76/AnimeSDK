#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }

#define EJOKHBOJHNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x154F5F90)
#define EJOKHBOJHNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x154F5FD0)
#define EJOKHBOJHNA___C___ENDMATCHANDADVANCE_B__19_1_OFFSET UNITYSDK_OFFSET(0x154F5FE0)

	class EJOKHBOJHNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EE10);
		}

		static ::System::Action** StaticGet___9__19_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EE18);
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
