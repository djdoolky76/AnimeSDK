#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCCKDJABHCN;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FCCKDJABHCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x156A8110)
#define FCCKDJABHCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x156A8140)
#define FCCKDJABHCN___C__GET__FIXEDUPDATEACTION_B__21_0_OFFSET UNITYSDK_OFFSET(0x156A8150)
#define FCCKDJABHCN___C__GET__LATEFIXEDUPDATEACTION_B__23_0_OFFSET UNITYSDK_OFFSET(0x156A8170)

inline static constexpr unsigned int FCCKDJABHCN___c_TypeDefinitionIndex = 77148;

	class FCCKDJABHCN___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCCKDJABHCN*>** StaticGet___9__23_0()
		{
			return (::System::Action_1<::FCCKDJABHCN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54890);
		}

		static ::System::Action_1<::FCCKDJABHCN*>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::FCCKDJABHCN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54898);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x548A0);
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
