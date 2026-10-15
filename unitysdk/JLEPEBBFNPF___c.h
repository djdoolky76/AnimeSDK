#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEBMBGBIHHH.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define JLEPEBBFNPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB23EF90)
#define JLEPEBBFNPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB23EFD0)
#define JLEPEBBFNPF___C__GET_REQUIREDATTRIBUTELEVELS_B__7_0_OFFSET UNITYSDK_OFFSET(0xB23EFE0)

inline static constexpr unsigned int JLEPEBBFNPF___c_TypeDefinitionIndex = 80147;

	class JLEPEBBFNPF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BC10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLEPEBBFNPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPEBBFNPF___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* _get_RequiredAttributeLevels_b__7_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + JLEPEBBFNPF___C__GET_REQUIREDATTRIBUTELEVELS_B__7_0_OFFSET))(this, a1);
		}

	};
