#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }

#define KODHAHDHIKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB592BD0)
#define KODHAHDHIKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB592C10)
#define KODHAHDHIKJ___C__CONFIRM_B__15_1_OFFSET UNITYSDK_OFFSET(0xB592C20)

inline static constexpr unsigned int KODHAHDHIKJ___c_TypeDefinitionIndex = 74397;

	class KODHAHDHIKJ___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x643C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x643C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KODHAHDHIKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ___C_CTOR_OFFSET))(this);
		}

		::System::Void _Confirm_b__15_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + KODHAHDHIKJ___C__CONFIRM_B__15_1_OFFSET))(this, a1);
		}

	};
