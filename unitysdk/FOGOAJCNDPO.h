#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class SceneLightManagerConfigDataNew; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOGOAJCNDPO_BEBANEHDCED_OFFSET UNITYSDK_OFFSET(0x158DF180)
#define FOGOAJCNDPO_BMBMELBMAAI_OFFSET UNITYSDK_OFFSET(0x158DF700)
#define FOGOAJCNDPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x158DFAD0)
#define FOGOAJCNDPO_CTOR_OFFSET UNITYSDK_OFFSET(0x158DFAC0)
#define FOGOAJCNDPO_EGOCJCIHOPL_OFFSET UNITYSDK_OFFSET(0x158DF230)
#define FOGOAJCNDPO_FAKHOCIOGND_OFFSET UNITYSDK_OFFSET(0x158DF330)
#define FOGOAJCNDPO_INEFHMKAPOD_OFFSET UNITYSDK_OFFSET(0x158DE450)
#define FOGOAJCNDPO_JFLEEDBEGIB_OFFSET UNITYSDK_OFFSET(0x158DF830)
#define FOGOAJCNDPO_KFJEEPEBLAB_OFFSET UNITYSDK_OFFSET(0x158DF3C0)
#define FOGOAJCNDPO_KHFLODGGLDG_OFFSET UNITYSDK_OFFSET(0x158DF560)
#define FOGOAJCNDPO_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x158DE3D0)
#define FOGOAJCNDPO_LINNGFPLHNF_OFFSET UNITYSDK_OFFSET(0x158DE560)
#define FOGOAJCNDPO_NHBIAIGAJBA_OFFSET UNITYSDK_OFFSET(0x158DF0C0)
#define FOGOAJCNDPO_OLNLAGCNGAI_OFFSET UNITYSDK_OFFSET(0x158DF000)

inline static constexpr unsigned int FOGOAJCNDPO_TypeDefinitionIndex = 49092;

	class FOGOAJCNDPO : public ::System::Object
	{
	public:
		static ::ScenenLightManager::SceneLightManagerConfigDataNew** StaticGet_EABKOHGCHFP()
		{
			return (::ScenenLightManager::SceneLightManagerConfigDataNew**)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x24B30);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_JCGBLEAGAAO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x24B38);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_MJNHHIAGJBB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x24B40);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_JLPNPPJIJPE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x24B48);
		}

		static ::System::Boolean* StaticGet_CCAKCJBCOMJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOGOAJCNDPO")->GetStaticField(0x7F10);
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
