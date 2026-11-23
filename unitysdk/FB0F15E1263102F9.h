#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define FB0F15E1263102F9__CCTOR_OFFSET UNITYSDK_OFFSET(0x4427250)
#define FB0F15E1263102F9__CTOR_OFFSET UNITYSDK_OFFSET(0x44272E0)

inline static constexpr unsigned int FB0F15E1263102F9_TypeDefinitionIndex = 18924;

class FB0F15E1263102F9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_A90407DF1EB752D5()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FB0F15E1263102F9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<::System::Int32>* BA0F2AC82C3269D4; // 0x10
	::System::Text::StringBuilder* FFA0F075F741CDDB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB0F15E1263102F9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FB0F15E1263102F9__CCTOR_OFFSET))();
	}
};
