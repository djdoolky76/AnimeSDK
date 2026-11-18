#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DCPAKANIHKD_HEBEHEEOELJ_OFFSET UNITYSDK_OFFSET(0x1F79F810)
#define DCPAKANIHKD_MAFBJFIEHKM_1_OFFSET UNITYSDK_OFFSET(0x1F79F6B0)
#define DCPAKANIHKD_MAFBJFIEHKM_OFFSET UNITYSDK_OFFSET(0x1F79F5E0)
#define DCPAKANIHKD_NDOFLBKODPH_OFFSET UNITYSDK_OFFSET(0x1F79F9B0)
#define DCPAKANIHKD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F79F490)

inline static constexpr unsigned int DCPAKANIHKD_TypeDefinitionIndex = 29139;

class DCPAKANIHKD : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_DKJNPDCJKKJ()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DCPAKANIHKD_TypeDefinitionIndex)->GetStaticField(0x25F10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_JCLDCOCKJMD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DCPAKANIHKD_TypeDefinitionIndex)->GetStaticField(0x25F18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCPAKANIHKD__CCTOR_OFFSET))();
	}

	static ::System::Void MAFBJFIEHKM(::System::Object* GMNLMENEPIO)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DCPAKANIHKD_MAFBJFIEHKM_OFFSET))(GMNLMENEPIO);
	}

	static ::System::Void MAFBJFIEHKM_1(::System::String* EOFKCOBCNNI)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DCPAKANIHKD_MAFBJFIEHKM_1_OFFSET))(EOFKCOBCNNI);
	}

	static ::System::Void HEBEHEEOELJ(::System::Object* GMNLMENEPIO, ::System::String* EOFKCOBCNNI)
	{
		return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + DCPAKANIHKD_HEBEHEEOELJ_OFFSET))(GMNLMENEPIO, EOFKCOBCNNI);
	}

	static ::System::Object* NDOFLBKODPH(::System::String* EOFKCOBCNNI)
	{
		return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + DCPAKANIHKD_NDOFLBKODPH_OFFSET))(EOFKCOBCNNI);
	}
};
