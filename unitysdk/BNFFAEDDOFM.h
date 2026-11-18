#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODGHIIDBNJB.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNFFAEDDOFM_HFCOKPBMGGA_OFFSET UNITYSDK_OFFSET(0x1E5E0380)
#define BNFFAEDDOFM_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1E5E0000)
#define BNFFAEDDOFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DFF60)

inline static constexpr unsigned int BNFFAEDDOFM_TypeDefinitionIndex = 34043;

class BNFFAEDDOFM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action_2<::ODGHIIDBNJB, ::System::Object*>*>*>** StaticGet_KKHOIBKGGFO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action_2<::ODGHIIDBNJB, ::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(BNFFAEDDOFM_TypeDefinitionIndex)->GetStaticField(0x2A050);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFFAEDDOFM__CCTOR_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM(::System::Int64 DKCLIOPFHGA, ::System::Action_2<::ODGHIIDBNJB, ::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Action_2<::ODGHIIDBNJB, ::System::Object*>*))((::PBYTE)hIl2Cpp + BNFFAEDDOFM_KKFNPONHGEM_OFFSET))(DKCLIOPFHGA, EJGDHCIBCJH);
	}

	static ::System::Void HFCOKPBMGGA(::System::Int64 DKCLIOPFHGA, ::ODGHIIDBNJB JBNBMFNNELP, ::System::Object* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::System::Int64, ::ODGHIIDBNJB, ::System::Object*))((::PBYTE)hIl2Cpp + BNFFAEDDOFM_HFCOKPBMGGA_OFFSET))(DKCLIOPFHGA, JBNBMFNNELP, EIFONLCJOPG);
	}
};
