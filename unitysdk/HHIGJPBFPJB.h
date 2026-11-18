#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APGOKGEOJJJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHIGJPBFPJB_FDHGDMJNNEG_OFFSET UNITYSDK_OFFSET(0x14A13920)
#define HHIGJPBFPJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A13880)

inline static constexpr unsigned int HHIGJPBFPJB_TypeDefinitionIndex = 66347;

class HHIGJPBFPJB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::APGOKGEOJJJ*>** StaticGet_EACAMFFNPOF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::APGOKGEOJJJ*>**)Il2CppClass::FromTypeDefinitionIndex(HHIGJPBFPJB_TypeDefinitionIndex)->GetStaticField(0x32100);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHIGJPBFPJB__CCTOR_OFFSET))();
	}

	static ::APGOKGEOJJJ* FDHGDMJNNEG(::System::String* CGPIPNBPHPO)
	{
		return ((::APGOKGEOJJJ*(*)(::System::String*))((::PBYTE)hIl2Cpp + HHIGJPBFPJB_FDHGDMJNNEG_OFFSET))(CGPIPNBPHPO);
	}
};
