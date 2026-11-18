#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DHHLHIEPGCH.h"

class CFGFEGMLJJB;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFBKGCAILGF_IFJFBAIHLDB_OFFSET UNITYSDK_OFFSET(0x15DA4F40)
#define HFBKGCAILGF_KKHBFDFIOKO_OFFSET UNITYSDK_OFFSET(0x15DA4BC0)
#define HFBKGCAILGF_OJCMEJFHDME_OFFSET UNITYSDK_OFFSET(0x15DA4A40)
#define HFBKGCAILGF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA4A30)

inline static constexpr unsigned int HFBKGCAILGF_TypeDefinitionIndex = 89989;

class HFBKGCAILGF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKGCAILGF__CTOR_OFFSET))(this);
	}

	static ::System::String* OJCMEJFHDME(::System::String* FMEKFDKKEDH, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>* MCFMIKKFGBP, ::CFGFEGMLJJB* AAOCANGHBDG)
	{
		return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>*, ::CFGFEGMLJJB*))((::PBYTE)hIl2Cpp + HFBKGCAILGF_OJCMEJFHDME_OFFSET))(FMEKFDKKEDH, MCFMIKKFGBP, AAOCANGHBDG);
	}

	static ::System::String* KKHBFDFIOKO(::System::String* HJKPKODELAE, ::System::Func_4<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>*, ::CFGFEGMLJJB*, ::System::String*>* GGAJPACIONO, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>* MCFMIKKFGBP, ::CFGFEGMLJJB* AAOCANGHBDG)
	{
		return ((::System::String*(*)(::System::String*, ::System::Func_4<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>*, ::CFGFEGMLJJB*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>*, ::CFGFEGMLJJB*))((::PBYTE)hIl2Cpp + HFBKGCAILGF_KKHBFDFIOKO_OFFSET))(HJKPKODELAE, GGAJPACIONO, MCFMIKKFGBP, AAOCANGHBDG);
	}

	static ::DHHLHIEPGCH IFJFBAIHLDB(::System::String* HJKPKODELAE, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>* MCFMIKKFGBP, ::CFGFEGMLJJB* AAOCANGHBDG)
	{
		return ((::DHHLHIEPGCH(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>*, ::CFGFEGMLJJB*))((::PBYTE)hIl2Cpp + HFBKGCAILGF_IFJFBAIHLDB_OFFSET))(HJKPKODELAE, MCFMIKKFGBP, AAOCANGHBDG);
	}
};
