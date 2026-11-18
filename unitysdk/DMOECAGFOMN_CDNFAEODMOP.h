#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_CDNFAEODMOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FC7CB0)

inline static constexpr unsigned int DMOECAGFOMN_CDNFAEODMOP_TypeDefinitionIndex = 38260;

class DMOECAGFOMN_CDNFAEODMOP : public ::System::Object
{
public:
	static ::System::String** StaticGet_DLOMPAGFBGE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_CDNFAEODMOP_TypeDefinitionIndex)->GetStaticField(0x508C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_CDNFAEODMOP__CCTOR_OFFSET))();
	}
};
