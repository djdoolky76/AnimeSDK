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

#define GIJLOICALKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A40530)
#define GIJLOICALKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A40570)
#define GIJLOICALKG___C___NOTIFYBUFFAFFECTEDCELLSMAYBECHANGED_B__27_0_OFFSET UNITYSDK_OFFSET(0x15A405E0)
#define GIJLOICALKG___C___NOTIFYBUFFAFFECTEDLINESMAYBECHANGED_B__15_0_OFFSET UNITYSDK_OFFSET(0x15A405B0)
#define GIJLOICALKG___C___NOTIFYBUFFAFFECTINGCELLSMAYBECHANGED_B__14_0_OFFSET UNITYSDK_OFFSET(0x15A40580)
#define GIJLOICALKG___C___TRYFORCEHINTBUFFAFFECTED_B__28_0_OFFSET UNITYSDK_OFFSET(0x15A40610)

	class GIJLOICALKG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DIGCDGKOBMK*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::DIGCDGKOBMK*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E600);
		}

		static ::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::ONPKMMDCDAN>*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::ONPKMMDCDAN>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E608);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E610);
		}

		static ::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E618);
		}

		static ::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::IAJGGEMFOMB*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E620);
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
