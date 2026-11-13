#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace System { class String; }

#define ONNFKOHKGPO_CTOR_OFFSET UNITYSDK_OFFSET(0x17D880A0)
#define ONNFKOHKGPO_PARSE_OFFSET UNITYSDK_OFFSET(0x17D88030)

inline static constexpr unsigned int ONNFKOHKGPO_TypeDefinitionIndex = 61217;

	class ONNFKOHKGPO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNFKOHKGPO_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* Parse(::System::String* a1)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ONNFKOHKGPO_PARSE_OFFSET))(this, a1);
		}

	};
