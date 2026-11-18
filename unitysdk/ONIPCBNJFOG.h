#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPCBDDPHHJB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONIPCBNJFOG_ANBLKDOFKKC_OFFSET UNITYSDK_OFFSET(0x178A29A0)
#define ONIPCBNJFOG_CKFBBFFFGCK_OFFSET UNITYSDK_OFFSET(0x178A2F40)
#define ONIPCBNJFOG_ENNMFJAABJP_OFFSET UNITYSDK_OFFSET(0x178A29F0)
#define ONIPCBNJFOG_GLDHGBBEFNF_OFFSET UNITYSDK_OFFSET(0x178A2950)
#define ONIPCBNJFOG_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x178A28E0)
#define ONIPCBNJFOG_OFCCDMJDPLI_OFFSET UNITYSDK_OFFSET(0x178A2DE0)

inline static constexpr unsigned int ONIPCBNJFOG_TypeDefinitionIndex = 64592;

class ONIPCBNJFOG : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FPCBDDPHHJB*>*>** StaticGet_FMDJDHGNNOO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FPCBDDPHHJB*>*>**)Il2CppClass::FromTypeDefinitionIndex(ONIPCBNJFOG_TypeDefinitionIndex)->GetStaticField(0x47860);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONIPCBNJFOG_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Void ANBLKDOFKKC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONIPCBNJFOG_ANBLKDOFKKC_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::FPCBDDPHHJB*>* OFCCDMJDPLI(::System::Int32 GDKOPIDKDHC)
	{
		return ((::System::Collections::Generic::List_1<::FPCBDDPHHJB*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ONIPCBNJFOG_OFCCDMJDPLI_OFFSET))(GDKOPIDKDHC);
	}

	static ::System::Void ENNMFJAABJP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONIPCBNJFOG_ENNMFJAABJP_OFFSET))();
	}

	static ::System::Void GLDHGBBEFNF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONIPCBNJFOG_GLDHGBBEFNF_OFFSET))();
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::FPCBDDPHHJB*>* CKFBBFFFGCK()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FPCBDDPHHJB*>*(*)())((::PBYTE)hIl2Cpp + ONIPCBNJFOG_CKFBBFFFGCK_OFFSET))();
	}
};
