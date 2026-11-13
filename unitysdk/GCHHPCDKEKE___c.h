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

#define GCHHPCDKEKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C21F5D0)
#define GCHHPCDKEKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C21F600)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C21F610)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_10_OFFSET UNITYSDK_OFFSET(0x1C21F9F0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_11_OFFSET UNITYSDK_OFFSET(0x1C21FAA0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_12_OFFSET UNITYSDK_OFFSET(0x1C21FAF0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_13_OFFSET UNITYSDK_OFFSET(0x1C21FB40)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_14_OFFSET UNITYSDK_OFFSET(0x1C21FB90)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_15_OFFSET UNITYSDK_OFFSET(0x1C21FBE0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_16_OFFSET UNITYSDK_OFFSET(0x1C21FC30)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_1_OFFSET UNITYSDK_OFFSET(0x1C21F660)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_2_OFFSET UNITYSDK_OFFSET(0x1C21F6E0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_3_OFFSET UNITYSDK_OFFSET(0x1C21F730)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_4_OFFSET UNITYSDK_OFFSET(0x1C21F780)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_5_OFFSET UNITYSDK_OFFSET(0x1C21F7D0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_6_OFFSET UNITYSDK_OFFSET(0x1C21F850)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_7_OFFSET UNITYSDK_OFFSET(0x1C21F8A0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_8_OFFSET UNITYSDK_OFFSET(0x1C21F8F0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_9_OFFSET UNITYSDK_OFFSET(0x1C21F970)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C21FC80)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_1_OFFSET UNITYSDK_OFFSET(0x1C21FD00)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_2_OFFSET UNITYSDK_OFFSET(0x1C21FD50)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_3_OFFSET UNITYSDK_OFFSET(0x1C21FDA0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C21FDF0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_1_OFFSET UNITYSDK_OFFSET(0x1C21FE60)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_2_OFFSET UNITYSDK_OFFSET(0x1C21FED0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_3_OFFSET UNITYSDK_OFFSET(0x1C21FF40)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_4_OFFSET UNITYSDK_OFFSET(0x1C21FFB0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_5_OFFSET UNITYSDK_OFFSET(0x1C220020)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_6_OFFSET UNITYSDK_OFFSET(0x1C220090)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_7_OFFSET UNITYSDK_OFFSET(0x1C220100)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C220170)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C2201C0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_1_OFFSET UNITYSDK_OFFSET(0x1C220210)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_2_OFFSET UNITYSDK_OFFSET(0x1C220280)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C2202D0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C220370)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_2_OFFSET UNITYSDK_OFFSET(0x1C2203E0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_3_OFFSET UNITYSDK_OFFSET(0x1C220450)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_4_OFFSET UNITYSDK_OFFSET(0x1C2204C0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_5_OFFSET UNITYSDK_OFFSET(0x1C220530)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_6_OFFSET UNITYSDK_OFFSET(0x1C2205A0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_7_OFFSET UNITYSDK_OFFSET(0x1C220610)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_8_OFFSET UNITYSDK_OFFSET(0x1C220680)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_9_OFFSET UNITYSDK_OFFSET(0x1C2206F0)

inline static constexpr unsigned int GCHHPCDKEKE___c_TypeDefinitionIndex = 43812;

	class GCHHPCDKEKE___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_10()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ACD0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_14()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ACD8);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_15()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ACE0);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_9()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ACE8);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ACF0);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_5()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ACF8);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_9()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD00);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_0()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD08);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD10);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Boolean>** StaticGet___9__0_16()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD18);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD20);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_4()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD28);
		}

		static ::System::Func_3<::NGFHCJIAOLH*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_3<::NGFHCJIAOLH*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD30);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_0()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD38);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_7()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD40);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD48);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_3()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD50);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__1_2()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD58);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__0_7()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD60);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_8()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD68);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_6()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD78);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD80);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD88);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_5()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD90);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_7()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD98);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADA0);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_5()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADA8);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_3()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADB0);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADB8);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt16>** StaticGet___9__4_1()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt16>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADC0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_3()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADC8);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_3()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADD0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>** StaticGet___9__0_2()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADD8);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_8()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADE0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_11()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADE8);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_6()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADF0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_12()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ADF8);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>** StaticGet___9__0_4()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AE00);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_13()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AE08);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_2()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AE10);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_4()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AE18);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_6()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AE20);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__0_1()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AE28);
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
