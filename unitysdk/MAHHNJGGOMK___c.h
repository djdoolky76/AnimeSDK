#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIAFEKODHJ;
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MAHHNJGGOMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB847F80)
#define MAHHNJGGOMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB847FC0)
#define MAHHNJGGOMK___C__SWITCHACIVEPATHES_B__4_0_OFFSET UNITYSDK_OFFSET(0xB8480B0)
#define MAHHNJGGOMK___C__SWITCHACIVEPATHES_B__4_1_OFFSET UNITYSDK_OFFSET(0xB8480C0)
#define MAHHNJGGOMK___C__SWITCHACTIVEPATH_B__2_0_OFFSET UNITYSDK_OFFSET(0xB847FD0)
#define MAHHNJGGOMK___C__UNLOCKAVATARPATH_B__3_1_OFFSET UNITYSDK_OFFSET(0xB848040)

inline static constexpr unsigned int MAHHNJGGOMK___c_TypeDefinitionIndex = 62770;

	class MAHHNJGGOMK___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B180);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B188);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B190);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B198);
		}

		static ::System::Action_1<::HIIAFEKODHJ*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::HIIAFEKODHJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B1A0);
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
