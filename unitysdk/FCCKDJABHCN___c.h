#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCCKDJABHCN;
namespace System { class Action; }
namespace System { class Object; }

#define FCCKDJABHCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x156B4010)
#define FCCKDJABHCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x156B4040)
#define FCCKDJABHCN___C__GET__FIXEDUPDATEACTION_B__21_0_OFFSET UNITYSDK_OFFSET(0x156B4050)
#define FCCKDJABHCN___C__GET__LATEFIXEDUPDATEACTION_B__23_0_OFFSET UNITYSDK_OFFSET(0x156B4070)

inline static constexpr unsigned int FCCKDJABHCN___c_TypeDefinitionIndex = 77149;

	class FCCKDJABHCN___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EBF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EBF8);
		}

		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCKDJABHCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN___C_CTOR_OFFSET))(this);
		}

		::System::Void _get__FixedUpdateAction_b__21_0(::FCCKDJABHCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCCKDJABHCN*))((::PBYTE)hIl2Cpp + FCCKDJABHCN___C__GET__FIXEDUPDATEACTION_B__21_0_OFFSET))(this, a1);
		}

		::System::Void _get__LateFixedUpdateAction_b__23_0(::FCCKDJABHCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCCKDJABHCN*))((::PBYTE)hIl2Cpp + FCCKDJABHCN___C__GET__LATEFIXEDUPDATEACTION_B__23_0_OFFSET))(this, a1);
		}

	};
