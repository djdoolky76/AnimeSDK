#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKOPPMAKPH.h"
#include "unitysdk/DJBPFFLIECG.h"

class MLNCFCLOPFA;
class NMLCENJBGNF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEMCJAAPJEO_ACNMPBPDAKC_OFFSET UNITYSDK_OFFSET(0xF17E4E0)
#define OEMCJAAPJEO_BBGJHCJNAFO_OFFSET UNITYSDK_OFFSET(0xF17D830)
#define OEMCJAAPJEO_DFLEPOAKAJI_OFFSET UNITYSDK_OFFSET(0xF17EA00)
#define OEMCJAAPJEO_GNKPADHLHPC_OFFSET UNITYSDK_OFFSET(0xF17DFE0)
#define OEMCJAAPJEO_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0xF17C420)
#define OEMCJAAPJEO_MJIAHMHMGEH_OFFSET UNITYSDK_OFFSET(0xF17C470)
#define OEMCJAAPJEO_ONSTART_OFFSET UNITYSDK_OFFSET(0xF17C3E0)
#define OEMCJAAPJEO_PFABDHABBEP_OFFSET UNITYSDK_OFFSET(0xF17E130)
#define OEMCJAAPJEO_PGPNPKAAGNP_OFFSET UNITYSDK_OFFSET(0xF17E6F0)
#define OEMCJAAPJEO__CTOR_OFFSET UNITYSDK_OFFSET(0xF17C460)

inline static constexpr unsigned int OEMCJAAPJEO_TypeDefinitionIndex = 84415;

class OEMCJAAPJEO : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMCJAAPJEO__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void MJIAHMHMGEH(::ABKOPPMAKPH OBNIAHNMHPF, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EAFECKKEAMK)
	{
		return ((::System::Void(*)(::PVOID, ::ABKOPPMAKPH, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_MJIAHMHMGEH_OFFSET))(this, OBNIAHNMHPF, EAFECKKEAMK);
	}

	::System::Void GNKPADHLHPC(::NMLCENJBGNF* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::PVOID, ::NMLCENJBGNF*))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_GNKPADHLHPC_OFFSET))(this, PPGLBDELEBF);
	}

	::System::Void PFABDHABBEP(::ABKOPPMAKPH EHNJCPCLCOJ, ::System::UInt32 CANJKOGCPAF)
	{
		return ((::System::Void(*)(::PVOID, ::ABKOPPMAKPH, ::System::UInt32))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_PFABDHABBEP_OFFSET))(this, EHNJCPCLCOJ, CANJKOGCPAF);
	}

	::System::Void ACNMPBPDAKC(::System::UInt32 PAEEEHKILOC, ::System::Collections::Generic::List_1<::System::UInt32>* KKACEDOIDBF, ::System::Action* EJGDHCIBCJH, ::System::Action* NKGCDDCMBCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_ACNMPBPDAKC_OFFSET))(this, PAEEEHKILOC, KKACEDOIDBF, EJGDHCIBCJH, NKGCDDCMBCF);
	}

	::System::Void PGPNPKAAGNP(::ABKOPPMAKPH EHNJCPCLCOJ, ::System::UInt32 CANJKOGCPAF, ::System::Int32 IGAAKDOIPNN, ::System::Int32 HCKDKJHAOMF, ::System::UInt32 ELDMGEJBCEM)
	{
		return ((::System::Void(*)(::PVOID, ::ABKOPPMAKPH, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_PGPNPKAAGNP_OFFSET))(this, EHNJCPCLCOJ, CANJKOGCPAF, IGAAKDOIPNN, HCKDKJHAOMF, ELDMGEJBCEM);
	}

	::MLNCFCLOPFA* BBGJHCJNAFO(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* IECODBGIDFE, ::ABKOPPMAKPH EHNJCPCLCOJ)
	{
		return ((::MLNCFCLOPFA*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::ABKOPPMAKPH))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_BBGJHCJNAFO_OFFSET))(this, IECODBGIDFE, EHNJCPCLCOJ);
	}

	::System::Void DFLEPOAKAJI(::System::UInt32 CANJKOGCPAF, ::System::Int32 IGAAKDOIPNN, ::System::Int32 HCKDKJHAOMF, ::System::UInt32 ELDMGEJBCEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_DFLEPOAKAJI_OFFSET))(this, CANJKOGCPAF, IGAAKDOIPNN, HCKDKJHAOMF, ELDMGEJBCEM);
	}
};
