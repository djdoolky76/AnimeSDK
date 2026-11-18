#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGFDOCJLGAC_LHKCECGEBGN_OFFSET UNITYSDK_OFFSET(0x177BACF0)
#define MGFDOCJLGAC_OKEHFFJNDAG_OFFSET UNITYSDK_OFFSET(0x177BAA70)
#define MGFDOCJLGAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x177BA9D0)
#define MGFDOCJLGAC__CTOR_OFFSET UNITYSDK_OFFSET(0x177BA9C0)

inline static constexpr unsigned int MGFDOCJLGAC_TypeDefinitionIndex = 86452;

class MGFDOCJLGAC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_GIHEKLEDMBF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MGFDOCJLGAC_TypeDefinitionIndex)->GetStaticField(0x41800);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFDOCJLGAC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGFDOCJLGAC__CCTOR_OFFSET))();
	}

	static ::System::Int32 OKEHFFJNDAG(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> OGKEBCPEPED, ::System::Boolean DDHJLIANCPF)
	{
		return ((::System::Int32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::Boolean))((::PBYTE)hIl2Cpp + MGFDOCJLGAC_OKEHFFJNDAG_OFFSET))(OGKEBCPEPED, DDHJLIANCPF);
	}

	static ::System::String* LHKCECGEBGN(::System::Int32 CBIEJMBPAIC)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MGFDOCJLGAC_LHKCECGEBGN_OFFSET))(CBIEJMBPAIC);
	}
};
