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

#define GCHHPCDKEKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC46C50)
#define GCHHPCDKEKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC46C80)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_0_OFFSET UNITYSDK_OFFSET(0x1DC46C90)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_10_OFFSET UNITYSDK_OFFSET(0x1DC47070)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_11_OFFSET UNITYSDK_OFFSET(0x1DC47120)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_12_OFFSET UNITYSDK_OFFSET(0x1DC47170)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_13_OFFSET UNITYSDK_OFFSET(0x1DC471C0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_14_OFFSET UNITYSDK_OFFSET(0x1DC47210)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_15_OFFSET UNITYSDK_OFFSET(0x1DC47260)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_16_OFFSET UNITYSDK_OFFSET(0x1DC472B0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_1_OFFSET UNITYSDK_OFFSET(0x1DC46CE0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_2_OFFSET UNITYSDK_OFFSET(0x1DC46D60)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_3_OFFSET UNITYSDK_OFFSET(0x1DC46DB0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_4_OFFSET UNITYSDK_OFFSET(0x1DC46E00)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_5_OFFSET UNITYSDK_OFFSET(0x1DC46E50)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_6_OFFSET UNITYSDK_OFFSET(0x1DC46ED0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_7_OFFSET UNITYSDK_OFFSET(0x1DC46F20)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_8_OFFSET UNITYSDK_OFFSET(0x1DC46F70)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__0_9_OFFSET UNITYSDK_OFFSET(0x1DC46FF0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_0_OFFSET UNITYSDK_OFFSET(0x1DC47300)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_1_OFFSET UNITYSDK_OFFSET(0x1DC47380)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_2_OFFSET UNITYSDK_OFFSET(0x1DC473D0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__1_3_OFFSET UNITYSDK_OFFSET(0x1DC47420)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_0_OFFSET UNITYSDK_OFFSET(0x1DC47470)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_1_OFFSET UNITYSDK_OFFSET(0x1DC474E0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_2_OFFSET UNITYSDK_OFFSET(0x1DC47550)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_3_OFFSET UNITYSDK_OFFSET(0x1DC475C0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_4_OFFSET UNITYSDK_OFFSET(0x1DC47630)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_5_OFFSET UNITYSDK_OFFSET(0x1DC476A0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_6_OFFSET UNITYSDK_OFFSET(0x1DC47710)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__2_7_OFFSET UNITYSDK_OFFSET(0x1DC47780)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1DC477F0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_0_OFFSET UNITYSDK_OFFSET(0x1DC47840)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_1_OFFSET UNITYSDK_OFFSET(0x1DC47890)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__4_2_OFFSET UNITYSDK_OFFSET(0x1DC47900)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_0_OFFSET UNITYSDK_OFFSET(0x1DC47950)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_1_OFFSET UNITYSDK_OFFSET(0x1DC479F0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_2_OFFSET UNITYSDK_OFFSET(0x1DC47A60)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_3_OFFSET UNITYSDK_OFFSET(0x1DC47AD0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_4_OFFSET UNITYSDK_OFFSET(0x1DC47B40)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_5_OFFSET UNITYSDK_OFFSET(0x1DC47BB0)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_6_OFFSET UNITYSDK_OFFSET(0x1DC47C20)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_7_OFFSET UNITYSDK_OFFSET(0x1DC47C90)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_8_OFFSET UNITYSDK_OFFSET(0x1DC47D00)
#define GCHHPCDKEKE___C__ADDENTITYINDICES_B__5_9_OFFSET UNITYSDK_OFFSET(0x1DC47D70)

inline static constexpr unsigned int GCHHPCDKEKE___c_TypeDefinitionIndex = 43812;

	class GCHHPCDKEKE___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E20);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_4()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E28);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_6()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E30);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E38);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt16>** StaticGet___9__4_1()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt16>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E40);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_12()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E48);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_13()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E50);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E58);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E68);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_5()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E70);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__0_7()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E78);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_3()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E80);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E88);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_6()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E90);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_5()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26E98);
		}

		static ::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Func_3<::KHPOKIKCOFO*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EA0);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EA8);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_2()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EB0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_9()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EB8);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_7()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EC0);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_4()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EC8);
		}

		static ::System::Func_3<::NGFHCJIAOLH*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_3<::NGFHCJIAOLH*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26ED0);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_8()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26ED8);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_3()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EE0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>** StaticGet___9__0_2()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EE8);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_0()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EF0);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_10()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26EF8);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_15()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F00);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_5()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F08);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_11()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F10);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_0()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F18);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__0_1()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F20);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>** StaticGet___9__0_4()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F28);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__1_2()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F30);
		}

		static ::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_3<::OCPOIDCNJDA*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F38);
		}

		static ::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_3()
		{
			return (::System::Func_3<::INMMPMDELKE*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F40);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Boolean>** StaticGet___9__0_16()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F48);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_3()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F50);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_9()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F58);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_14()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F60);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_8()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F68);
		}

		static ::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_7()
		{
			return (::System::Func_3<::EFHNDMENDHI*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F70);
		}

		static ::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_6()
		{
			return (::System::Func_3<::HIOEAKHGILF*, ::Entitas::IComponent*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F78);
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
