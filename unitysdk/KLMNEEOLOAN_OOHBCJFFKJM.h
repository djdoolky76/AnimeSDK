#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLMNEEOLOAN_OOHBCJFFKJM_FAOEGFJBMAJ_OFFSET UNITYSDK_OFFSET(0x1FA66650)
#define KLMNEEOLOAN_OOHBCJFFKJM_HJMEONDEGAF_OFFSET UNITYSDK_OFFSET(0x1FA669E0)
#define KLMNEEOLOAN_OOHBCJFFKJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA665B0)

inline static constexpr unsigned int KLMNEEOLOAN_OOHBCJFFKJM_TypeDefinitionIndex = 18226;

class KLMNEEOLOAN_OOHBCJFFKJM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>** StaticGet_IEKBBCNLDPF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(KLMNEEOLOAN_OOHBCJFFKJM_TypeDefinitionIndex)->GetStaticField(0x7FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMNEEOLOAN_OOHBCJFFKJM__CCTOR_OFFSET))();
	}

	static ::System::String* FAOEGFJBMAJ(::System::Object* EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + KLMNEEOLOAN_OOHBCJFFKJM_FAOEGFJBMAJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* HJMEONDEGAF(::System::Type* ACFDOHPLMEN)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + KLMNEEOLOAN_OOHBCJFFKJM_HJMEONDEGAF_OFFSET))(ACFDOHPLMEN);
	}
};
