#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONPKMMDCDAN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class DIGCDGKOBMK;
class IAJGGEMFOMB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GIJLOICALKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A34B50)
#define GIJLOICALKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A34B90)
#define GIJLOICALKG___C___NOTIFYBUFFAFFECTEDCELLSMAYBECHANGED_B__27_0_OFFSET UNITYSDK_OFFSET(0x15A34C00)
#define GIJLOICALKG___C___NOTIFYBUFFAFFECTEDLINESMAYBECHANGED_B__15_0_OFFSET UNITYSDK_OFFSET(0x15A34BD0)
#define GIJLOICALKG___C___NOTIFYBUFFAFFECTINGCELLSMAYBECHANGED_B__14_0_OFFSET UNITYSDK_OFFSET(0x15A34BA0)
#define GIJLOICALKG___C___TRYFORCEHINTBUFFAFFECTED_B__28_0_OFFSET UNITYSDK_OFFSET(0x15A34C30)

inline static constexpr unsigned int GIJLOICALKG___c_TypeDefinitionIndex = 79452;

	class GIJLOICALKG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DIGCDGKOBMK*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::DIGCDGKOBMK*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x656D0);
		}

		static ::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::ONPKMMDCDAN>*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::ONPKMMDCDAN>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x656D8);
		}

		static ::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x656E0);
		}

		static ::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x656E8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x656F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIJLOICALKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLOICALKG___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __NotifyBuffAffectingCellsMaybeChanged_b__14_0(::IAJGGEMFOMB* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG___C___NOTIFYBUFFAFFECTINGCELLSMAYBECHANGED_B__14_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::ONPKMMDCDAN>* __NotifyBuffAffectedLinesMaybeChanged_b__15_0(::IAJGGEMFOMB* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ONPKMMDCDAN>*(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG___C___NOTIFYBUFFAFFECTEDLINESMAYBECHANGED_B__15_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __NotifyBuffAffectedCellsMaybeChanged_b__27_0(::IAJGGEMFOMB* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG___C___NOTIFYBUFFAFFECTEDCELLSMAYBECHANGED_B__27_0_OFFSET))(this, a1);
		}

		::System::Boolean __TryForceHintBuffAffected_b__28_0(::DIGCDGKOBMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIGCDGKOBMK*))((::PBYTE)hIl2Cpp + GIJLOICALKG___C___TRYFORCEHINTBUFFAFFECTED_B__28_0_OFFSET))(this, a1);
		}

	};
