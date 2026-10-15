#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPOGHBMIPFF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define DPOGHBMIPFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1265C8A0)
#define DPOGHBMIPFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1265C8D0)
#define DPOGHBMIPFF___C__INITIALIZE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1265C8E0)
#define DPOGHBMIPFF___C__INITIALIZE_B__2_1_OFFSET UNITYSDK_OFFSET(0x1265C940)
#define DPOGHBMIPFF___C___INITTIMESCALEENTITY_B__5_0_OFFSET UNITYSDK_OFFSET(0x1265C9A0)

inline static constexpr unsigned int DPOGHBMIPFF___c_TypeDefinitionIndex = 77166;

	class DPOGHBMIPFF___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::DPOGHBMIPFF*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::DPOGHBMIPFF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F930);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F938);
		}

		static ::System::Action_2<::DPOGHBMIPFF*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Action_2<::DPOGHBMIPFF*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F940);
		}

		static ::System::Action_1<::DPOGHBMIPFF*>** StaticGet___9__2_1()
		{
			return (::System::Action_1<::DPOGHBMIPFF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPOGHBMIPFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGHBMIPFF___C_CTOR_OFFSET))(this);
		}

		::System::Void _Initialize_b__2_0(::DPOGHBMIPFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPOGHBMIPFF*))((::PBYTE)hIl2Cpp + DPOGHBMIPFF___C__INITIALIZE_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _Initialize_b__2_1(::DPOGHBMIPFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPOGHBMIPFF*))((::PBYTE)hIl2Cpp + DPOGHBMIPFF___C__INITIALIZE_B__2_1_OFFSET))(this, a1);
		}

		::System::Void __InitTimeScaleEntity_b__5_0(::DPOGHBMIPFF* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DPOGHBMIPFF*, ::System::Int32))((::PBYTE)hIl2Cpp + DPOGHBMIPFF___C___INITTIMESCALEENTITY_B__5_0_OFFSET))(this, a1, a2);
		}

	};
