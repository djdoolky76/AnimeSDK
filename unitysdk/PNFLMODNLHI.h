#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNFLMODNLHI_BEJLHALMHDL_OFFSET UNITYSDK_OFFSET(0x1BF2E750)
#define PNFLMODNLHI_EMCLBMIHJCO_OFFSET UNITYSDK_OFFSET(0x1BF2DF10)
#define PNFLMODNLHI_ENMJIHGAICG_OFFSET UNITYSDK_OFFSET(0x1BF2E010)
#define PNFLMODNLHI_HMMOGDJIDLO_OFFSET UNITYSDK_OFFSET(0x1BF2DB20)
#define PNFLMODNLHI_LBOOBCBALHP_OFFSET UNITYSDK_OFFSET(0x1BF2E650)
#define PNFLMODNLHI_OLFMLANCJND_OFFSET UNITYSDK_OFFSET(0x1BF2E930)
#define PNFLMODNLHI_OOMEFCDMNFP_OFFSET UNITYSDK_OFFSET(0x1BF2E1F0)
#define PNFLMODNLHI_PFOFJHIMEGB_OFFSET UNITYSDK_OFFSET(0x1BF2E100)

inline static constexpr unsigned int PNFLMODNLHI_TypeDefinitionIndex = 64352;

class PNFLMODNLHI : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_JCAPHLCHMGL()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(PNFLMODNLHI_TypeDefinitionIndex)->GetStaticField(0x510F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_AOHIPPDACOO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PNFLMODNLHI_TypeDefinitionIndex)->GetStaticField(0x510F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_GJEFFGGDELH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PNFLMODNLHI_TypeDefinitionIndex)->GetStaticField(0x51100);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_DMGDDNHGEKJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PNFLMODNLHI_TypeDefinitionIndex)->GetStaticField(0x51108);
	}
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_MDOFKBDFIOF()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(PNFLMODNLHI_TypeDefinitionIndex)->GetStaticField(0x51110);
	}

	static ::System::String* HMMOGDJIDLO(::System::String* AELLPLBJELA, ::System::UInt32 ILBDDBLKCOO)
	{
		return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + PNFLMODNLHI_HMMOGDJIDLO_OFFSET))(AELLPLBJELA, ILBDDBLKCOO);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* ENMJIHGAICG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PNFLMODNLHI_ENMJIHGAICG_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PFOFJHIMEGB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PNFLMODNLHI_PFOFJHIMEGB_OFFSET))();
	}

	static ::System::String* OOMEFCDMNFP(::System::String* IPEMKEAPJHI, ::System::UInt32 ILBDDBLKCOO)
	{
		return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + PNFLMODNLHI_OOMEFCDMNFP_OFFSET))(IPEMKEAPJHI, ILBDDBLKCOO);
	}

	static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* EMCLBMIHJCO()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + PNFLMODNLHI_EMCLBMIHJCO_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* LBOOBCBALHP()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + PNFLMODNLHI_LBOOBCBALHP_OFFSET))();
	}

	static ::System::Void BEJLHALMHDL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNFLMODNLHI_BEJLHALMHDL_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* OLFMLANCJND()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PNFLMODNLHI_OLFMLANCJND_OFFSET))();
	}
};
