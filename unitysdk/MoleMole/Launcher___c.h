#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LAUNCHER___C_DMBPBDJOFMM_OFFSET UNITYSDK_OFFSET(0x119266C0)
#define MOLEMOLE_LAUNCHER___C_FJACCIAMNEH_OFFSET UNITYSDK_OFFSET(0x11926740)
#define MOLEMOLE_LAUNCHER___C_IOAEDFLHFBC_OFFSET UNITYSDK_OFFSET(0x119265E0)
#define MOLEMOLE_LAUNCHER___C_MNMEFKHCIFB_OFFSET UNITYSDK_OFFSET(0x119261F0)
#define MOLEMOLE_LAUNCHER___C_MPKGKNHEILE_OFFSET UNITYSDK_OFFSET(0x119267C0)
#define MOLEMOLE_LAUNCHER___C_NBKPHHPPPOI_OFFSET UNITYSDK_OFFSET(0x11926270)
#define MOLEMOLE_LAUNCHER___C_PHFCAKNDLNO_OFFSET UNITYSDK_OFFSET(0x11926650)
#define MOLEMOLE_LAUNCHER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119261A0)
#define MOLEMOLE_LAUNCHER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119261E0)

namespace MoleMole
{
	inline static constexpr unsigned int Launcher___c_TypeDefinitionIndex = 40908;

	class Launcher___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3EA80);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>** StaticGet___9__44_3()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3EA88);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>** StaticGet___9__44_2()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3EA90);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>** StaticGet___9__44_5()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3EA98);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>** StaticGet___9__44_0()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3EAA0);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>** StaticGet___9__44_1()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3EAA8);
		}
		static ::System::Action** StaticGet___9__54_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3EAB0);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>** StaticGet___9__44_4()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3EAB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C__CTOR_OFFSET))(this);
		}

		::System::Void MNMEFKHCIFB(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* DJLOKMMLFJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_MNMEFKHCIFB_OFFSET))(this, DJLOKMMLFJC);
		}

		::System::Void NBKPHHPPPOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_NBKPHHPPPOI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* IOAEDFLHFBC()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_IOAEDFLHFBC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* PHFCAKNDLNO()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_PHFCAKNDLNO_OFFSET))(this);
		}

		::System::Void DMBPBDJOFMM(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* DJLOKMMLFJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_DMBPBDJOFMM_OFFSET))(this, DJLOKMMLFJC);
		}

		::System::Void FJACCIAMNEH(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* DJLOKMMLFJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_FJACCIAMNEH_OFFSET))(this, DJLOKMMLFJC);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* MPKGKNHEILE()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_MPKGKNHEILE_OFFSET))(this);
		}
	};
}
