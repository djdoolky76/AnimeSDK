#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CustomPropMoveType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EntityTag.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class EFHNDMENDHI;
class HIOEAKHGILF;
class INMMPMDELKE;
class KHPOKIKCOFO;
class NGFHCJIAOLH;
class OCPOIDCNJDA;
namespace Entitas { class IComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define GCHHPCDKEKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA832A0)
#define GCHHPCDKEKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA832D0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_0_OFFSET UNITYSDK_OFFSET(0x1CA832E0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_10_OFFSET UNITYSDK_OFFSET(0x1CA836C0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_11_OFFSET UNITYSDK_OFFSET(0x1CA83770)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_12_OFFSET UNITYSDK_OFFSET(0x1CA837C0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_13_OFFSET UNITYSDK_OFFSET(0x1CA83810)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_14_OFFSET UNITYSDK_OFFSET(0x1CA83860)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_15_OFFSET UNITYSDK_OFFSET(0x1CA838B0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_16_OFFSET UNITYSDK_OFFSET(0x1CA83900)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_1_OFFSET UNITYSDK_OFFSET(0x1CA83330)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_2_OFFSET UNITYSDK_OFFSET(0x1CA833B0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_3_OFFSET UNITYSDK_OFFSET(0x1CA83400)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_4_OFFSET UNITYSDK_OFFSET(0x1CA83450)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_5_OFFSET UNITYSDK_OFFSET(0x1CA834A0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_6_OFFSET UNITYSDK_OFFSET(0x1CA83520)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_7_OFFSET UNITYSDK_OFFSET(0x1CA83570)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_8_OFFSET UNITYSDK_OFFSET(0x1CA835C0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_9_OFFSET UNITYSDK_OFFSET(0x1CA83640)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CA83970)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_1_OFFSET UNITYSDK_OFFSET(0x1CA839F0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_2_OFFSET UNITYSDK_OFFSET(0x1CA83A40)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_3_OFFSET UNITYSDK_OFFSET(0x1CA83A90)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CA83AE0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_1_OFFSET UNITYSDK_OFFSET(0x1CA83B50)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_2_OFFSET UNITYSDK_OFFSET(0x1CA83BC0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_3_OFFSET UNITYSDK_OFFSET(0x1CA83C30)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_4_OFFSET UNITYSDK_OFFSET(0x1CA83CA0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_5_OFFSET UNITYSDK_OFFSET(0x1CA83D10)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_6_OFFSET UNITYSDK_OFFSET(0x1CA83D80)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_7_OFFSET UNITYSDK_OFFSET(0x1CA83DF0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1CA83E60)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CA83EB0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_1_OFFSET UNITYSDK_OFFSET(0x1CA83F00)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_2_OFFSET UNITYSDK_OFFSET(0x1CA83F70)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_0_OFFSET UNITYSDK_OFFSET(0x1CA83FC0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_1_OFFSET UNITYSDK_OFFSET(0x1CA84060)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_2_OFFSET UNITYSDK_OFFSET(0x1CA840D0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_3_OFFSET UNITYSDK_OFFSET(0x1CA84140)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_4_OFFSET UNITYSDK_OFFSET(0x1CA841B0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_5_OFFSET UNITYSDK_OFFSET(0x1CA84220)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_6_OFFSET UNITYSDK_OFFSET(0x1CA84290)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_7_OFFSET UNITYSDK_OFFSET(0x1CA84300)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_8_OFFSET UNITYSDK_OFFSET(0x1CA84370)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_9_OFFSET UNITYSDK_OFFSET(0x1CA843E0)

inline static constexpr unsigned int GCHHPCDKEKE___c_TypeDefinitionIndex = 42831;

	class GCHHPCDKEKE___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_4()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A40);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>** StaticGet___9__0_2()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A48);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A50);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A58);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_15()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A60);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_5()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A68);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A70);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_13()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A78);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_0()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A80);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_3()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A88);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_8()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A98);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__0_7()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AA0);
		}

		static ::System::Func_3<::NGFHCJIAOLH*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_3<::NGFHCJIAOLH*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AA8);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_14()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AB0);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AB8);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Boolean>** StaticGet___9__0_16()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AC0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_9()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AC8);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AD0);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_5()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AD8);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AE0);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_6()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AE8);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_2()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AF0);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt16>** StaticGet___9__4_1()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt16>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AF8);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_3()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B00);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>** StaticGet___9__0_4()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B08);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__1_2()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B10);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_6()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B18);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_4()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B20);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B28);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_3()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B30);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_12()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B38);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_6()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B40);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_0()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B48);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__0_1()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B50);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_10()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B58);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_7()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B60);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B68);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_5()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B70);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_8()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B78);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_9()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B80);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_3()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B88);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_7()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B90);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_11()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _AddEntityIndices_b__0_0(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_0_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FiveDimCameraPriority _AddEntityIndices_b__0_1(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::FiveDim::CustomPropMoveType _AddEntityIndices_b__0_2(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::RPG::Client::LittleGame::FiveDim::CustomPropMoveType(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_2_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__0_3(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_3_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::FiveDim::EntityTag _AddEntityIndices_b__0_4(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::RPG::Client::LittleGame::FiveDim::EntityTag(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_4_OFFSET))(this, a1, a2);
		}

		::System::String* _AddEntityIndices_b__0_5(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::String*(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_5_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__0_6(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_6_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__0_7(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_7_OFFSET))(this, a1, a2);
		}

		::System::Int32 _AddEntityIndices_b__0_8(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_8_OFFSET))(this, a1, a2);
		}

		::System::Int32 _AddEntityIndices_b__0_9(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_9_OFFSET))(this, a1, a2);
		}

		::System::String* _AddEntityIndices_b__0_10(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::String*(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_10_OFFSET))(this, a1, a2);
		}

		::System::Int32 _AddEntityIndices_b__0_11(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_11_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__0_12(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_12_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__0_13(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_13_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__0_14(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_14_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__0_15(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_15_OFFSET))(this, a1, a2);
		}

		::System::Boolean _AddEntityIndices_b__0_16(::HIOEAKHGILF* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_16_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FiveDimCameraPriority _AddEntityIndices_b__1_0(::INMMPMDELKE* a1, ::Entitas::IComponent* a2)
		{
			return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID, ::INMMPMDELKE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__1_1(::INMMPMDELKE* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::INMMPMDELKE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _AddEntityIndices_b__1_2(::INMMPMDELKE* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::INMMPMDELKE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_2_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__1_3(::INMMPMDELKE* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::INMMPMDELKE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_3_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__2_0(::OCPOIDCNJDA* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::OCPOIDCNJDA*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__2_1(::OCPOIDCNJDA* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::OCPOIDCNJDA*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__2_2(::OCPOIDCNJDA* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::OCPOIDCNJDA*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_2_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__2_3(::OCPOIDCNJDA* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::OCPOIDCNJDA*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_3_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__2_4(::OCPOIDCNJDA* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::OCPOIDCNJDA*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_4_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__2_5(::OCPOIDCNJDA* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::OCPOIDCNJDA*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_5_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__2_6(::OCPOIDCNJDA* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::OCPOIDCNJDA*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_6_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__2_7(::OCPOIDCNJDA* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::OCPOIDCNJDA*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_7_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__3_0(::NGFHCJIAOLH* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::NGFHCJIAOLH*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__3_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__4_0(::KHPOKIKCOFO* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::KHPOKIKCOFO*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_0_OFFSET))(this, a1, a2);
		}

		::System::UInt16 _AddEntityIndices_b__4_1(::KHPOKIKCOFO* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt16(*)(::PVOID, ::KHPOKIKCOFO*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_1_OFFSET))(this, a1, a2);
		}

		::System::String* _AddEntityIndices_b__4_2(::KHPOKIKCOFO* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::String*(*)(::PVOID, ::KHPOKIKCOFO*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_2_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_0(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__5_1(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__5_2(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_2_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_3(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_3_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_4(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_4_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_5(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_5_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_6(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_6_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AddEntityIndices_b__5_7(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_7_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_8(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_8_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_9(::EFHNDMENDHI* a1, ::Entitas::IComponent* a2)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::EFHNDMENDHI*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_9_OFFSET))(this, a1, a2);
		}

	};
