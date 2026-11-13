#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KBOGKMCJGAO;
namespace System { class String; }

#define LHEBCLLKDFB_BFNIAGIOOAI_OFFSET UNITYSDK_OFFSET(0x1E95EBF0)
#define LHEBCLLKDFB_EJDOLLILIMM_OFFSET UNITYSDK_OFFSET(0x1E95EBC0)
#define LHEBCLLKDFB_LFANOJFAEDL_OFFSET UNITYSDK_OFFSET(0x1E95EC70)

inline static constexpr unsigned int LHEBCLLKDFB_TypeDefinitionIndex = 10826;

	class LHEBCLLKDFB : public ::System::Object
	{
	public:
		static ::KBOGKMCJGAO** StaticGet_CEOMOMFGGNF()
		{
			return (::KBOGKMCJGAO**)UnitySDK::FromName("", "LHEBCLLKDFB")->GetStaticField(0x13DD0);
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
