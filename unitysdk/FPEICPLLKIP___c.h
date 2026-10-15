#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPEICPLLKIP;
class NGFHCJIAOLH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define FPEICPLLKIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15917AC0)
#define FPEICPLLKIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15917B00)
#define FPEICPLLKIP___C__CREATECELLENTITYANDVIEW_B__21_0_OFFSET UNITYSDK_OFFSET(0x15917B50)
#define FPEICPLLKIP___C__CREATECHENLINGENTITYANDVIEW_B__26_0_OFFSET UNITYSDK_OFFSET(0x15917BB0)
#define FPEICPLLKIP___C__CREATEITEMENTITYANDVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x15917B10)
#define FPEICPLLKIP___C__CREATEITEMENTITYANDVIEW_B__18_1_OFFSET UNITYSDK_OFFSET(0x15917B20)
#define FPEICPLLKIP___C__LEVELUPCHENLINGENTITYANDVIEW_B__28_0_OFFSET UNITYSDK_OFFSET(0x15917C10)
#define FPEICPLLKIP___C__TRYCREATESUMMONCHENLINGENTITYANDVIEW_B__27_0_OFFSET UNITYSDK_OFFSET(0x15917BE0)
#define FPEICPLLKIP___C__UNLOCKCELL_B__22_0_OFFSET UNITYSDK_OFFSET(0x15917B80)

inline static constexpr unsigned int FPEICPLLKIP___c_TypeDefinitionIndex = 77765;

	class FPEICPLLKIP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB00);
		}

		static ::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>** StaticGet___9__28_0()
		{
			return (::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB08);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB10);
		}

		static ::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>** StaticGet___9__18_1()
		{
			return (::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB18);
		}

		static ::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>** StaticGet___9__26_0()
		{
			return (::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB20);
		}

		static ::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>** StaticGet___9__27_0()
		{
			return (::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB28);
		}

		static ::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>** StaticGet___9__22_0()
		{
			return (::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB30);
		}

		static ::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>** StaticGet___9__21_0()
		{
			return (::System::Action_3<::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPEICPLLKIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C_CTOR_OFFSET))(this);
		}

		::System::Single _CreateItemEntityAndView_b__18_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__CREATEITEMENTITYANDVIEW_B__18_0_OFFSET))(this, a1);
		}

		::System::Void _CreateItemEntityAndView_b__18_1(::FPEICPLLKIP* a1, ::NGFHCJIAOLH* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__CREATEITEMENTITYANDVIEW_B__18_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateCellEntityAndView_b__21_0(::FPEICPLLKIP* a1, ::NGFHCJIAOLH* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__CREATECELLENTITYANDVIEW_B__21_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UnlockCell_b__22_0(::FPEICPLLKIP* a1, ::NGFHCJIAOLH* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__UNLOCKCELL_B__22_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateChenLingEntityAndView_b__26_0(::FPEICPLLKIP* a1, ::NGFHCJIAOLH* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__CREATECHENLINGENTITYANDVIEW_B__26_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryCreateSummonChenLingEntityAndView_b__27_0(::FPEICPLLKIP* a1, ::NGFHCJIAOLH* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__TRYCREATESUMMONCHENLINGENTITYANDVIEW_B__27_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _LevelUpChenLingEntityAndView_b__28_0(::FPEICPLLKIP* a1, ::NGFHCJIAOLH* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__LEVELUPCHENLINGENTITYANDVIEW_B__28_0_OFFSET))(this, a1, a2, a3);
		}

	};
