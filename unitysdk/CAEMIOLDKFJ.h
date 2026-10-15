#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CAEMIOLDKFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC47B420)
#define CAEMIOLDKFJ_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC47AB20)
#define CAEMIOLDKFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC47B3E0)
#define CAEMIOLDKFJ_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0xC47AA20)
#define CAEMIOLDKFJ_GFDKNIPGIDO_OFFSET UNITYSDK_OFFSET(0xC47B0E0)
#define CAEMIOLDKFJ_KANBKKBGLFF_OFFSET UNITYSDK_OFFSET(0xC47AEF0)
#define CAEMIOLDKFJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC47A690)
#define CAEMIOLDKFJ_LIMIJBGIEKJ_OFFSET UNITYSDK_OFFSET(0xC47ACE0)
#define CAEMIOLDKFJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC47A9D0)
#define CAEMIOLDKFJ_MIICGLGNBNL_OFFSET UNITYSDK_OFFSET(0xC47A7A0)
#define CAEMIOLDKFJ_OBNMOELFNIG_OFFSET UNITYSDK_OFFSET(0xC47B270)
#define CAEMIOLDKFJ_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xC47A990)
#define CAEMIOLDKFJ_TICK_OFFSET UNITYSDK_OFFSET(0xC47AB70)

	class CAEMIOLDKFJ : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* IGIKHHKHBKD; // 0x38
		::RPG::Client::DynamicFloatingObject::DynamicFloatingObject* DILGJEAEKGL; // 0x40
		::System::Boolean KKCFCJFAAKA; // 0x48
		static ::System::Int32* StaticGet_DCGFLBMJPCA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CAEMIOLDKFJ")->GetStaticField(0x34E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_TICK_OFFSET))(this, a1);
		}

		::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_FMPAOKGPMNG_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* OBNMOELFNIG(::UnityEngine::GameObject* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_OBNMOELFNIG_OFFSET))(this, a1);
		}

		::System::Void LIMIJBGIEKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_LIMIJBGIEKJ_OFFSET))(this);
		}

		::System::Void MIICGLGNBNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_MIICGLGNBNL_OFFSET))(this);
		}

		::System::Void KANBKKBGLFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_KANBKKBGLFF_OFFSET))(this);
		}

		::System::Void GFDKNIPGIDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEMIOLDKFJ_GFDKNIPGIDO_OFFSET))(this);
		}

	};
