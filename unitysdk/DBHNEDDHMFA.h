#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKCCLPOBNLB.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;

#define DBHNEDDHMFA_BFEIFDGJLMM_OFFSET UNITYSDK_OFFSET(0xEB84B00)
#define DBHNEDDHMFA_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB84580)
#define DBHNEDDHMFA_CEDGEPEJGCP_OFFSET UNITYSDK_OFFSET(0xEB84DD0)
#define DBHNEDDHMFA_FHILHDCIHGO_OFFSET UNITYSDK_OFFSET(0xEB84C50)
#define DBHNEDDHMFA_MGIFJBDCLGL_OFFSET UNITYSDK_OFFSET(0xEB84AB0)
#define DBHNEDDHMFA_MLHGNGOKKNA_OFFSET UNITYSDK_OFFSET(0xEB84FC0)
#define DBHNEDDHMFA_OBAEPPKCMBI_OFFSET UNITYSDK_OFFSET(0xEB84D10)
#define DBHNEDDHMFA_PFNCMLGJGEH_OFFSET UNITYSDK_OFFSET(0xEB84BB0)

inline static constexpr unsigned int DBHNEDDHMFA_TypeDefinitionIndex = 79912;

	class DBHNEDDHMFA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::EKCCLPOBNLB>** StaticGet_LCAPAJEHGAI()
		{
			return (::Il2CppArray<::EKCCLPOBNLB>**)UnitySDK::FromName("", "DBHNEDDHMFA")->GetStaticField(0x4D010);
		}

		static ::System::Int32* StaticGet_COCAOHGFDJC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DBHNEDDHMFA")->GetStaticField(0xF8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBHNEDDHMFA_CCTOR_OFFSET))();
		}

		static ::System::Boolean MGIFJBDCLGL(::LPHINGPIEAJ* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DBHNEDDHMFA_MGIFJBDCLGL_OFFSET))(a1, a2);
		}

		static ::System::Boolean BFEIFDGJLMM(::LPHINGPIEAJ* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DBHNEDDHMFA_BFEIFDGJLMM_OFFSET))(a1, a2);
		}

		static ::System::Boolean PFNCMLGJGEH(::LPHINGPIEAJ* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DBHNEDDHMFA_PFNCMLGJGEH_OFFSET))(a1, a2);
		}

		static ::System::Boolean FHILHDCIHGO(::LPHINGPIEAJ* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DBHNEDDHMFA_FHILHDCIHGO_OFFSET))(a1, a2);
		}

		static ::System::Boolean OBAEPPKCMBI(::LPHINGPIEAJ* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DBHNEDDHMFA_OBAEPPKCMBI_OFFSET))(a1, a2);
		}

		static ::System::Boolean CEDGEPEJGCP(::LPHINGPIEAJ* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DBHNEDDHMFA_CEDGEPEJGCP_OFFSET))(a1, a2);
		}

		static ::System::Boolean MLHGNGOKKNA(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + DBHNEDDHMFA_MLHGNGOKKNA_OFFSET))(a1);
		}

	};
