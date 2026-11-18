#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGGEFKPJNMC_BLAOHCOJMCH_OFFSET UNITYSDK_OFFSET(0x1515FDB0)
#define KGGEFKPJNMC_CHIGPFGJCCP_OFFSET UNITYSDK_OFFSET(0x1515FF80)
#define KGGEFKPJNMC_ENCFKBNEAOH_OFFSET UNITYSDK_OFFSET(0x15160240)
#define KGGEFKPJNMC_NLPGOOGFJKE_OFFSET UNITYSDK_OFFSET(0x1515FEE0)
#define KGGEFKPJNMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1515FD10)

inline static constexpr unsigned int KGGEFKPJNMC_TypeDefinitionIndex = 42995;

class KGGEFKPJNMC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_MPBDEAKNGDO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KGGEFKPJNMC_TypeDefinitionIndex)->GetStaticField(0x31B50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGGEFKPJNMC__CCTOR_OFFSET))();
	}

	static ::System::Void BLAOHCOJMCH(::System::String* DEJNMAAOCNK)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KGGEFKPJNMC_BLAOHCOJMCH_OFFSET))(DEJNMAAOCNK);
	}

	static ::Il2CppArray<::System::String*>* NLPGOOGFJKE(::System::String* DEJNMAAOCNK)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + KGGEFKPJNMC_NLPGOOGFJKE_OFFSET))(DEJNMAAOCNK);
	}

	static ::System::Void CHIGPFGJCCP(::System::String* DEJNMAAOCNK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HGGAJCGEKBI)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KGGEFKPJNMC_CHIGPFGJCCP_OFFSET))(DEJNMAAOCNK, HGGAJCGEKBI);
	}

	static ::System::Void ENCFKBNEAOH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGGEFKPJNMC_ENCFKBNEAOH_OFFSET))();
	}
};
