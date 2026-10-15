#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCNGFCAMLLN.h"
namespace System { class String; }

inline static constexpr unsigned int KCNGFCAMLLN_SyntaxTokenWithValue_1_TypeDefinitionIndex = 73414;

	template <typename T>
	class KCNGFCAMLLN_SyntaxTokenWithValue_1 : public ::KCNGFCAMLLN
	{
	public:
		::System::String* _Text; // 0x0
		T _Value; // 0x0
	};
