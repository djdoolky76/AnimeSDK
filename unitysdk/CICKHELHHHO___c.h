#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CICKHELHHHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD8D2480)
#define CICKHELHHHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD8D24C0)
#define CICKHELHHHO___C__REQUESTABANDON_B__3_0_OFFSET UNITYSDK_OFFSET(0xD8D24D0)
#define CICKHELHHHO___C__REQUESTABANDON_B__3_1_OFFSET UNITYSDK_OFFSET(0xD8D2600)
#define CICKHELHHHO___C___EXITTOWORLD_B__24_0_OFFSET UNITYSDK_OFFSET(0xD8D2730)

inline static constexpr unsigned int CICKHELHHHO___c_TypeDefinitionIndex = 77136;

	class CICKHELHHHO___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16710);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16718);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16720);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CICKHELHHHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKHELHHHO___C_CTOR_OFFSET))(this);
		}

		::System::Void _RequestAbandon_b__3_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__REQUESTABANDON_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _RequestAbandon_b__3_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__REQUESTABANDON_B__3_1_OFFSET))(this, a1);
		}

		::System::Void __ExitToWorld_b__24_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CICKHELHHHO___C___EXITTOWORLD_B__24_0_OFFSET))(this, a1);
		}

	};
