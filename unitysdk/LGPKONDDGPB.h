#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACPNMANEGEH;
class CHNKGINBJBI;
class IJCMAKLBINJ;
class LFOAAABKKHC;
class LJFMPPNPGAA;
class OKICIAPALHL;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define LGPKONDDGPB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6A2530)
#define LGPKONDDGPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A1500)
#define LGPKONDDGPB_IAJDJGCPDLH_OFFSET UNITYSDK_OFFSET(0xB6A1F60)
#define LGPKONDDGPB_KKHKPOFINPI_OFFSET UNITYSDK_OFFSET(0xB6A1580)
#define LGPKONDDGPB_LGEDOBDMIJC_OFFSET UNITYSDK_OFFSET(0xB6A1990)
#define LGPKONDDGPB_LMAFIOLAGDA_OFFSET UNITYSDK_OFFSET(0xB6A1950)
#define LGPKONDDGPB_MMLFGEIHPML_OFFSET UNITYSDK_OFFSET(0xB6A1910)

inline static constexpr unsigned int LGPKONDDGPB_TypeDefinitionIndex = 73158;

	class LGPKONDDGPB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LJFMPPNPGAA*>* FIDJDAAPECB; // 0x10
		::System::Collections::Generic::List_1<::CHNKGINBJBI*>* NFELKELDAFP; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LFOAAABKKHC*>** StaticGet_LHAGCOCNHNG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::LFOAAABKKHC*>**)UnitySDK::FromName("", "LGPKONDDGPB")->GetStaticField(0x5CC00);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::IJCMAKLBINJ*>** StaticGet_FAOLDNBDFMG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::IJCMAKLBINJ*>**)UnitySDK::FromName("", "LGPKONDDGPB")->GetStaticField(0x5CC08);
		}

		static ::LFOAAABKKHC** StaticGet_EMIIHCPBODC()
		{
			return (::LFOAAABKKHC**)UnitySDK::FromName("", "LGPKONDDGPB")->GetStaticField(0x5CC10);
		}

		static ::IJCMAKLBINJ** StaticGet_BCEKLGDAPCN()
		{
			return (::IJCMAKLBINJ**)UnitySDK::FromName("", "LGPKONDDGPB")->GetStaticField(0x5CC18);
		}

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LGPKONDDGPB_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGPKONDDGPB_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::CHNKGINBJBI*>* MMLFGEIHPML()
		{
			return ((::System::Collections::Generic::List_1<::CHNKGINBJBI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPKONDDGPB_MMLFGEIHPML_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::LJFMPPNPGAA*>* LMAFIOLAGDA()
		{
			return ((::System::Collections::Generic::List_1<::LJFMPPNPGAA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPKONDDGPB_LMAFIOLAGDA_OFFSET))(this);
		}

		::System::Void KKHKPOFINPI(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LGPKONDDGPB_KKHKPOFINPI_OFFSET))(this, a1);
		}

		::CHNKGINBJBI* LGEDOBDMIJC(::System::Reflection::MethodInfo* a1, ::OKICIAPALHL* a2)
		{
			return ((::CHNKGINBJBI*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::OKICIAPALHL*))((::PBYTE)hIl2Cpp + LGPKONDDGPB_LGEDOBDMIJC_OFFSET))(this, a1, a2);
		}

		::LJFMPPNPGAA* IAJDJGCPDLH(::System::Reflection::MethodInfo* a1, ::ACPNMANEGEH* a2)
		{
			return ((::LJFMPPNPGAA*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::ACPNMANEGEH*))((::PBYTE)hIl2Cpp + LGPKONDDGPB_IAJDJGCPDLH_OFFSET))(this, a1, a2);
		}

	};
