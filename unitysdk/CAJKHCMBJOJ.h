#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAJKHCMBJOJ_NHPGEAFAIAO_OFFSET UNITYSDK_OFFSET(0x1693CBE0)
#define CAJKHCMBJOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1693C930)
#define CAJKHCMBJOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1693CBD0)

inline static constexpr unsigned int CAJKHCMBJOJ_TypeDefinitionIndex = 67553;

class CAJKHCMBJOJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_DPOOIPOKHHN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CAJKHCMBJOJ_TypeDefinitionIndex)->GetStaticField(0x45D00);
	}
	// static const ::System::String* KLOEPKHMDJG; // 0x0
	// static const ::System::String* BFDHDJJOILB; // 0x0
	// static const ::System::String* KNBBOOLGEOD; // 0x0
	// static const ::System::String* NKEPLLHKLBI; // 0x0
	// static const ::System::String* DDJAHJFKMGP; // 0x0
	// static const ::System::String* LIOCAMPMJAM; // 0x0
	// static const ::System::String* GFCHCENMLND; // 0x0
	// static const ::System::String* CGAAPMCKMDC; // 0x0
	// static const ::System::String* IJNGFGPKJMB; // 0x0
	// static const ::System::String* JGOMNGHINNG; // 0x0
	// static const ::System::String* GFPJBGCGGNG; // 0x0
	// static const ::System::String* AKNLPIBBBOF; // 0x0
	// static const ::System::String* BGFDBDICLJG; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAJKHCMBJOJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKHCMBJOJ__CTOR_OFFSET))(this);
	}

	static ::MoleMole::GameplayTag NHPGEAFAIAO(::System::Int32 PKPFGELKLBF)
	{
		return ((::MoleMole::GameplayTag(*)(::System::Int32))((::PBYTE)hIl2Cpp + CAJKHCMBJOJ_NHPGEAFAIAO_OFFSET))(PKPFGELKLBF);
	}
};
