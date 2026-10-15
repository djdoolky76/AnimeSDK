#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class Assembly; }

#define RPG_CUSTOMRP_RPUTILITY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC3D2F0)
#define RPG_CUSTOMRP_RPUTILITY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3D330)
#define RPG_CUSTOMRP_RPUTILITY___C__GETALLASSEMBLYTYPES_B__128_0_OFFSET UNITYSDK_OFFSET(0x1CC3D340)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPUtility___c_TypeDefinitionIndex = 37899;

	class RPUtility___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>** StaticGet___9__128_0()
		{
			return (::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>**)UnitySDK::FromName("RPG.CustomRP", "<>c")->GetStaticField(0x2F770);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.CustomRP", "<>c")->GetStaticField(0x2F778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GetAllAssemblyTypes_b__128_0(::System::Reflection::Assembly* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY___C__GETALLASSEMBLYTYPES_B__128_0_OFFSET))(this, a1);
		}

	};
}
