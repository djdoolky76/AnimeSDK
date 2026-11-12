#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGHDHELLBBC;
class FPIKMMDHEDE;
class NKIJFPHFJCO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MCKHEFFODHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC132620)
#define MCKHEFFODHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC132660)
#define MCKHEFFODHO___C__GET_TUTORIALDRAGTARGET_B__66_0_OFFSET UNITYSDK_OFFSET(0xC132670)
#define MCKHEFFODHO___C__RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITVIEWMODEL_GET_ISTUTORIALGUIDING_B__68_0_OFFSET UNITYSDK_OFFSET(0xC132680)
#define MCKHEFFODHO___C___REFRESHCANCLEAR_B__157_0_OFFSET UNITYSDK_OFFSET(0xC132690)

inline static constexpr unsigned int MCKHEFFODHO___c_TypeDefinitionIndex = 82279;

	class MCKHEFFODHO___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NKIJFPHFJCO*, ::System::Boolean>** StaticGet___9__157_0()
		{
			return (::System::Func_2<::NKIJFPHFJCO*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70E30);
		}

		static ::System::Func_2<::FPIKMMDHEDE*, ::DGHDHELLBBC*>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::FPIKMMDHEDE*, ::DGHDHELLBBC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70E38);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70E40);
		}

		static ::System::Func_2<::FPIKMMDHEDE*, ::System::Boolean>** StaticGet___9__68_0()
		{
			return (::System::Func_2<::FPIKMMDHEDE*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70E48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCKHEFFODHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKHEFFODHO___C_CTOR_OFFSET))(this);
		}

		::DGHDHELLBBC* _get_TutorialDragTarget_b__66_0(::FPIKMMDHEDE* a1)
		{
			return ((::DGHDHELLBBC*(*)(::PVOID, ::FPIKMMDHEDE*))((::PBYTE)hIl2Cpp + MCKHEFFODHO___C__GET_TUTORIALDRAGTARGET_B__66_0_OFFSET))(this, a1);
		}

		::System::Boolean _RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditViewModel_get_IsTutorialGuiding_b__68_0(::FPIKMMDHEDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPIKMMDHEDE*))((::PBYTE)hIl2Cpp + MCKHEFFODHO___C__RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITVIEWMODEL_GET_ISTUTORIALGUIDING_B__68_0_OFFSET))(this, a1);
		}

		::System::Boolean __RefreshCanClear_b__157_0(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + MCKHEFFODHO___C___REFRESHCANCLEAR_B__157_0_OFFSET))(this, a1);
		}

	};
