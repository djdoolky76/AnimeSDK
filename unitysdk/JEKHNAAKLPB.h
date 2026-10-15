#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define JEKHNAAKLPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1663DDF0)
#define JEKHNAAKLPB_DDAILAIHLHL_OFFSET UNITYSDK_OFFSET(0x1663DAC0)
#define JEKHNAAKLPB_EDCGGICEKPN_OFFSET UNITYSDK_OFFSET(0x1663DCD0)
#define JEKHNAAKLPB_EHLBFHGDKHO_OFFSET UNITYSDK_OFFSET(0x1663DBE0)
#define JEKHNAAKLPB_IFAEFDEIABL_OFFSET UNITYSDK_OFFSET(0x1663DB10)
#define JEKHNAAKLPB_LGKPIEPOPNN_OFFSET UNITYSDK_OFFSET(0x1663DC80)
#define JEKHNAAKLPB_PJPFIHFAHGO_1_OFFSET UNITYSDK_OFFSET(0x1663DBA0)
#define JEKHNAAKLPB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1663DB60)

	class JEKHNAAKLPB : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DOEBHLLAPIA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JEKHNAAKLPB")->GetStaticField(0x25E0);
		}

		static ::System::Double* StaticGet_EIPDJGHCKMB()
		{
			return (::System::Double*)UnitySDK::FromName("", "JEKHNAAKLPB")->GetStaticField(0x25E8);
		}

		static ::System::Double* StaticGet_HKHFAFCBHEL()
		{
			return (::System::Double*)UnitySDK::FromName("", "JEKHNAAKLPB")->GetStaticField(0x25F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEKHNAAKLPB_CCTOR_OFFSET))();
		}

		static ::System::Void DDAILAIHLHL(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + JEKHNAAKLPB_DDAILAIHLHL_OFFSET))(a1, a2);
		}

		static ::System::Void IFAEFDEIABL(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + JEKHNAAKLPB_IFAEFDEIABL_OFFSET))(a1, a2);
		}

		static ::System::Void PJPFIHFAHGO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JEKHNAAKLPB_PJPFIHFAHGO_OFFSET))(a1);
		}

		static ::System::Void PJPFIHFAHGO_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEKHNAAKLPB_PJPFIHFAHGO_1_OFFSET))();
		}

		static ::System::Double EHLBFHGDKHO(::System::Object* a1)
		{
			return ((::System::Double(*)(::System::Object*))((::PBYTE)hIl2Cpp + JEKHNAAKLPB_EHLBFHGDKHO_OFFSET))(a1);
		}

		static ::System::Double LGKPIEPOPNN(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + JEKHNAAKLPB_LGKPIEPOPNN_OFFSET))(a1, a2);
		}

		static ::System::Double EDCGGICEKPN(::System::Object* a1, ::System::Double a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Double(*)(::System::Object*, ::System::Double, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEKHNAAKLPB_EDCGGICEKPN_OFFSET))(a1, a2, a3, a4);
		}

	};
