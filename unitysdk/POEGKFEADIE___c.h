#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKADBDHKBJ;
class EBBBJDPGDFG;
class HBIMGDOPJMI;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define POEGKFEADIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC357670)
#define POEGKFEADIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC3576B0)
#define POEGKFEADIE___C__ONPREINIT_B__35_0_OFFSET UNITYSDK_OFFSET(0xC3576C0)
#define POEGKFEADIE___C__ONPREINIT_B__35_1_OFFSET UNITYSDK_OFFSET(0xC357750)
#define POEGKFEADIE___C__ONPREINIT_B__35_2_OFFSET UNITYSDK_OFFSET(0xC357770)

inline static constexpr unsigned int POEGKFEADIE___c_TypeDefinitionIndex = 54312;

	class POEGKFEADIE___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::AAKADBDHKBJ*>** StaticGet___9__35_2()
		{
			return (::System::Action_1<::AAKADBDHKBJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E38);
		}

		static ::System::Action_1<::HBIMGDOPJMI*>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::HBIMGDOPJMI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E40);
		}

		static ::System::Action_1<::EBBBJDPGDFG*>** StaticGet___9__35_1()
		{
			return (::System::Action_1<::EBBBJDPGDFG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POEGKFEADIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnPreInit_b__35_0(::HBIMGDOPJMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBIMGDOPJMI*))((::PBYTE)hIl2Cpp + POEGKFEADIE___C__ONPREINIT_B__35_0_OFFSET))(this, a1);
		}

		::System::Void _OnPreInit_b__35_1(::EBBBJDPGDFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBBBJDPGDFG*))((::PBYTE)hIl2Cpp + POEGKFEADIE___C__ONPREINIT_B__35_1_OFFSET))(this, a1);
		}

		::System::Void _OnPreInit_b__35_2(::AAKADBDHKBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKADBDHKBJ*))((::PBYTE)hIl2Cpp + POEGKFEADIE___C__ONPREINIT_B__35_2_OFFSET))(this, a1);
		}

	};
