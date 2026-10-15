#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEIKCHNBAGL;
class EEANCDFECGN;
class KEALONANBJO;
class OLLEOCLINLN;
namespace System { class Action; }
namespace System { class Object; }

#define HLKOBNFAMOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D63E10)
#define HLKOBNFAMOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15D63E50)
#define HLKOBNFAMOI___C__EQUIPLIGHTCONE_B__2_0_OFFSET UNITYSDK_OFFSET(0x15D63E60)
#define HLKOBNFAMOI___C__EQUIPRELICS_B__4_0_OFFSET UNITYSDK_OFFSET(0x15D63E80)
#define HLKOBNFAMOI___C__TAKEOFFLIGHTCONE_B__3_0_OFFSET UNITYSDK_OFFSET(0x15D63E70)
#define HLKOBNFAMOI___C__TAKEOFFRELICS_B__5_0_OFFSET UNITYSDK_OFFSET(0x15D63E90)

	class HLKOBNFAMOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D370);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D378);
		}

		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D380);
		}

		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D388);
		}

		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLKOBNFAMOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKOBNFAMOI___C_CTOR_OFFSET))(this);
		}

		::System::Void _EquipLightCone_b__2_0(::DEIKCHNBAGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEIKCHNBAGL*))((::PBYTE)hIl2Cpp + HLKOBNFAMOI___C__EQUIPLIGHTCONE_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _TakeOffLightCone_b__3_0(::KEALONANBJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEALONANBJO*))((::PBYTE)hIl2Cpp + HLKOBNFAMOI___C__TAKEOFFLIGHTCONE_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _EquipRelics_b__4_0(::OLLEOCLINLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLEOCLINLN*))((::PBYTE)hIl2Cpp + HLKOBNFAMOI___C__EQUIPRELICS_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _TakeOffRelics_b__5_0(::EEANCDFECGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEANCDFECGN*))((::PBYTE)hIl2Cpp + HLKOBNFAMOI___C__TAKEOFFRELICS_B__5_0_OFFSET))(this, a1);
		}

	};
