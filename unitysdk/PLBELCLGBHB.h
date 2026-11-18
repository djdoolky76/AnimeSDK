#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDNEMGCDEM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLBELCLGBHB_PNMKJNFEFNO_OFFSET UNITYSDK_OFFSET(0x1F918670)
#define PLBELCLGBHB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F917DC0)

inline static constexpr unsigned int PLBELCLGBHB_TypeDefinitionIndex = 96653;

class PLBELCLGBHB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::JJDNEMGCDEM, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_GFFIHNOIIOO()
	{
		return (::System::Collections::Generic::Dictionary_2<::JJDNEMGCDEM, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(PLBELCLGBHB_TypeDefinitionIndex)->GetStaticField(0x52FE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLBELCLGBHB__CCTOR_OFFSET))();
	}

	static ::System::String* PNMKJNFEFNO(::JJDNEMGCDEM LIJOMOCFAHP, ::System::Int32 BAHGGFMGJEA)
	{
		return ((::System::String*(*)(::JJDNEMGCDEM, ::System::Int32))((::PBYTE)hIl2Cpp + PLBELCLGBHB_PNMKJNFEFNO_OFFSET))(LIJOMOCFAHP, BAHGGFMGJEA);
	}
};
