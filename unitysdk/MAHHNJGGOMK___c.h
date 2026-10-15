#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIAFEKODHJ;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }

#define MAHHNJGGOMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB84E790)
#define MAHHNJGGOMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB84E7D0)
#define MAHHNJGGOMK___C__SWITCHACIVEPATHES_B__4_0_OFFSET UNITYSDK_OFFSET(0xB84E8C0)
#define MAHHNJGGOMK___C__SWITCHACIVEPATHES_B__4_1_OFFSET UNITYSDK_OFFSET(0xB84E8D0)
#define MAHHNJGGOMK___C__SWITCHACTIVEPATH_B__2_0_OFFSET UNITYSDK_OFFSET(0xB84E7E0)
#define MAHHNJGGOMK___C__UNLOCKAVATARPATH_B__3_1_OFFSET UNITYSDK_OFFSET(0xB84E850)

	class MAHHNJGGOMK___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E270);
		}

		static ::System::Action** StaticGet___9__3_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E278);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E280);
		}

		static ::System::Action** StaticGet___9__4_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E288);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAHHNJGGOMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAHHNJGGOMK___C_CTOR_OFFSET))(this);
		}

		::System::Void _SwitchActivePath_b__2_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MAHHNJGGOMK___C__SWITCHACTIVEPATH_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _UnlockAvatarPath_b__3_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MAHHNJGGOMK___C__UNLOCKAVATARPATH_B__3_1_OFFSET))(this, a1);
		}

		::System::Void _SwitchAcivePathes_b__4_0(::HIIAFEKODHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIAFEKODHJ*))((::PBYTE)hIl2Cpp + MAHHNJGGOMK___C__SWITCHACIVEPATHES_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _SwitchAcivePathes_b__4_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MAHHNJGGOMK___C__SWITCHACIVEPATHES_B__4_1_OFFSET))(this, a1);
		}

	};
