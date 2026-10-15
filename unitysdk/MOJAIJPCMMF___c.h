#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOJAIJPCMMF;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOJAIJPCMMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA2CF90)
#define MOJAIJPCMMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2CFD0)
#define MOJAIJPCMMF___C__GET__FIXEDUPDATEACTION_B__29_0_OFFSET UNITYSDK_OFFSET(0xBA2CFE0)
#define MOJAIJPCMMF___C__GET__LATEFIXEDUPDATEACTION_B__31_0_OFFSET UNITYSDK_OFFSET(0xBA2D000)

inline static constexpr unsigned int MOJAIJPCMMF___c_TypeDefinitionIndex = 76931;

	class MOJAIJPCMMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17400);
		}

		static ::System::Action_1<::MOJAIJPCMMF*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::MOJAIJPCMMF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17408);
		}

		static ::System::Action_1<::MOJAIJPCMMF*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MOJAIJPCMMF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOJAIJPCMMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJAIJPCMMF___C_CTOR_OFFSET))(this);
		}

		::System::Void _get__FixedUpdateAction_b__29_0(::MOJAIJPCMMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJAIJPCMMF*))((::PBYTE)hIl2Cpp + MOJAIJPCMMF___C__GET__FIXEDUPDATEACTION_B__29_0_OFFSET))(this, a1);
		}

		::System::Void _get__LateFixedUpdateAction_b__31_0(::MOJAIJPCMMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJAIJPCMMF*))((::PBYTE)hIl2Cpp + MOJAIJPCMMF___C__GET__LATEFIXEDUPDATEACTION_B__31_0_OFFSET))(this, a1);
		}

	};
