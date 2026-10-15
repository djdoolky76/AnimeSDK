#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class SceneLightManagerConfigDataNew; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOGOAJCNDPO_BEBANEHDCED_OFFSET UNITYSDK_OFFSET(0x158EA1B0)
#define FOGOAJCNDPO_BMBMELBMAAI_OFFSET UNITYSDK_OFFSET(0x158EA730)
#define FOGOAJCNDPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x158EAB00)
#define FOGOAJCNDPO_CTOR_OFFSET UNITYSDK_OFFSET(0x158EAAF0)
#define FOGOAJCNDPO_EGOCJCIHOPL_OFFSET UNITYSDK_OFFSET(0x158EA260)
#define FOGOAJCNDPO_FAKHOCIOGND_OFFSET UNITYSDK_OFFSET(0x158EA360)
#define FOGOAJCNDPO_INEFHMKAPOD_OFFSET UNITYSDK_OFFSET(0x158E9480)
#define FOGOAJCNDPO_JFLEEDBEGIB_OFFSET UNITYSDK_OFFSET(0x158EA860)
#define FOGOAJCNDPO_KFJEEPEBLAB_OFFSET UNITYSDK_OFFSET(0x158EA3F0)
#define FOGOAJCNDPO_KHFLODGGLDG_OFFSET UNITYSDK_OFFSET(0x158EA590)
#define FOGOAJCNDPO_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x158E9400)
#define FOGOAJCNDPO_LINNGFPLHNF_OFFSET UNITYSDK_OFFSET(0x158E9590)
#define FOGOAJCNDPO_NHBIAIGAJBA_OFFSET UNITYSDK_OFFSET(0x158EA0F0)
#define FOGOAJCNDPO_OLNLAGCNGAI_OFFSET UNITYSDK_OFFSET(0x158EA030)

	class FOGOAJCNDPO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_JLPNPPJIJPE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x24750);
		}

		static ::ScenenLightManager::SceneLightManagerConfigDataNew** StaticGet_EABKOHGCHFP()
		{
			return (::ScenenLightManager::SceneLightManagerConfigDataNew**)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x24758);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_MJNHHIAGJBB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x24760);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_JCGBLEAGAAO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x24768);
		}

		static ::System::Boolean* StaticGet_CCAKCJBCOMJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x8020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOGOAJCNDPO_CCTOR_OFFSET))();
		}

		static ::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOGOAJCNDPO_KKKIONIDKFA_OFFSET))();
		}

		static ::System::Void INEFHMKAPOD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOGOAJCNDPO_INEFHMKAPOD_OFFSET))();
		}

		static ::System::Void OLNLAGCNGAI(::ScenenLightManager::SceneLightManagerConfigDataNew* a1)
		{
			return ((::System::Void(*)(::ScenenLightManager::SceneLightManagerConfigDataNew*))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_OLNLAGCNGAI_OFFSET))(a1);
		}

		static ::System::Boolean NHBIAIGAJBA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_NHBIAIGAJBA_OFFSET))(a1);
		}

		static ::System::Boolean BEBANEHDCED()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOGOAJCNDPO_BEBANEHDCED_OFFSET))();
		}

		static ::System::Boolean EGOCJCIHOPL(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_EGOCJCIHOPL_OFFSET))(a1);
		}

		static ::System::Void FAKHOCIOGND(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_FAKHOCIOGND_OFFSET))(a1);
		}

		static ::System::Boolean KFJEEPEBLAB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_KFJEEPEBLAB_OFFSET))(a1);
		}

		static ::System::Boolean KHFLODGGLDG(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_KHFLODGGLDG_OFFSET))(a1);
		}

		static ::System::Void BMBMELBMAAI(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_BMBMELBMAAI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JFLEEDBEGIB(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOGOAJCNDPO_JFLEEDBEGIB_OFFSET))(a1);
		}

		static ::System::Void LINNGFPLHNF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOGOAJCNDPO_LINNGFPLHNF_OFFSET))();
		}

	};
