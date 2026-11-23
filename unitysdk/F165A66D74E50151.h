#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F165A66D74E50151_E83C262FF040076F_OFFSET UNITYSDK_OFFSET(0x23A6300)
#define F165A66D74E50151_FD9A6B1F0CFC2097_OFFSET UNITYSDK_OFFSET(0x23A5F70)
#define F165A66D74E50151__CCTOR_OFFSET UNITYSDK_OFFSET(0x23A64E0)

inline static constexpr unsigned int F165A66D74E50151_TypeDefinitionIndex = 3517;

class F165A66D74E50151 : public ::System::Object
{
public:
	static ::System::String** StaticGet_E292953577635756()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F165A66D74E50151_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_A98BAF894891F359()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F165A66D74E50151_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Boolean E83C262FF040076F(::Il2CppArray<::System::Byte>* E83E519C5C42896F, ::Il2CppArray<::System::Byte>* F966037CFDD4E6C2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F165A66D74E50151_E83C262FF040076F_OFFSET))(E83E519C5C42896F, F966037CFDD4E6C2);
	}

	static ::Il2CppArray<::System::Byte>* FD9A6B1F0CFC2097(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F165A66D74E50151_FD9A6B1F0CFC2097_OFFSET))(E83E519C5C42896F);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F165A66D74E50151__CCTOR_OFFSET))();
	}
};
