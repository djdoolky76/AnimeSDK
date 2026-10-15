#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KBOGKMCJGAO;
namespace System { class String; }

#define LHEBCLLKDFB_BFNIAGIOOAI_OFFSET UNITYSDK_OFFSET(0x1D0F0D50)
#define LHEBCLLKDFB_EJDOLLILIMM_OFFSET UNITYSDK_OFFSET(0x1D0F0D20)
#define LHEBCLLKDFB_LFANOJFAEDL_OFFSET UNITYSDK_OFFSET(0x1D0F0DD0)

	class LHEBCLLKDFB : public ::System::Object
	{
	public:
		static ::KBOGKMCJGAO** StaticGet_CEOMOMFGGNF()
		{
			return (::KBOGKMCJGAO**)UnitySDK::FromName("", "LHEBCLLKDFB")->GetStaticField(0xD1A0);
		}

		static ::System::String* EJDOLLILIMM()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + LHEBCLLKDFB_EJDOLLILIMM_OFFSET))();
		}

		static ::System::String* BFNIAGIOOAI(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LHEBCLLKDFB_BFNIAGIOOAI_OFFSET))(a1);
		}

		static ::FCOEMCEDLNL* LFANOJFAEDL(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::FCOEMCEDLNL*(*)(::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + LHEBCLLKDFB_LFANOJFAEDL_OFFSET))(a1, a2, a3);
		}

	};
