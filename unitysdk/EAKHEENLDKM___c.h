#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDKHADGLIPJ;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define EAKHEENLDKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA039C0)
#define EAKHEENLDKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA03A00)
#define EAKHEENLDKM___C__GETSORTEDCHIMERATEAM_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CA03A10)
#define EAKHEENLDKM___C___CTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1CA03A70)
#define EAKHEENLDKM___C___CTOR_B__45_1_OFFSET UNITYSDK_OFFSET(0x1CA03AA0)

inline static constexpr unsigned int EAKHEENLDKM___c_TypeDefinitionIndex = 41981;

	class EAKHEENLDKM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32450);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32458);
		}

		static ::System::Comparison_1<::KDKHADGLIPJ*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::KDKHADGLIPJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32460);
		}

		static ::System::Func_1<::KDKHADGLIPJ*>** StaticGet___9__45_1()
		{
			return (::System::Func_1<::KDKHADGLIPJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAKHEENLDKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHEENLDKM___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedChimeraTeam_b__1_0(::KDKHADGLIPJ* a1, ::KDKHADGLIPJ* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KDKHADGLIPJ*, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + EAKHEENLDKM___C__GETSORTEDCHIMERATEAM_B__1_0_OFFSET))(this, a1, a2);
		}

		::Entitas::IAERC* __ctor_b__45_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + EAKHEENLDKM___C___CTOR_B__45_0_OFFSET))(this, a1);
		}

		::KDKHADGLIPJ* __ctor_b__45_1()
		{
			return ((::KDKHADGLIPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHEENLDKM___C___CTOR_B__45_1_OFFSET))(this);
		}

	};
