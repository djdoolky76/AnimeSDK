#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IOHBHDJGCPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A605D40)
#define IOHBHDJGCPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A605D80)
#define IOHBHDJGCPK___C__STARTCURRENTLEVEL_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A605E60)
#define IOHBHDJGCPK___C__STARTLONGTAILLEVEL_B__3_1_OFFSET UNITYSDK_OFFSET(0x1A605D90)

inline static constexpr unsigned int IOHBHDJGCPK___c_TypeDefinitionIndex = 77126;

	class IOHBHDJGCPK___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x577D0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x577D8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x577E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C_CTOR_OFFSET))(this);
		}

		::System::Void _StartLongTailLevel_b__3_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__STARTLONGTAILLEVEL_B__3_1_OFFSET))(this, a1);
		}

		::System::Void _StartCurrentLevel_b__4_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__STARTCURRENTLEVEL_B__4_1_OFFSET))(this, a1);
		}

	};
