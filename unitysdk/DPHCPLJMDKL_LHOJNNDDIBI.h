#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DPHCPLJMDKL_LHOJNNDDIBI_AJEKEKFKOEI_OFFSET UNITYSDK_OFFSET(0x12638EF0)
#define DPHCPLJMDKL_LHOJNNDDIBI_CTOR_OFFSET UNITYSDK_OFFSET(0x12638FF0)

inline static constexpr unsigned int DPHCPLJMDKL_LHOJNNDDIBI_TypeDefinitionIndex = 60029;

	class DPHCPLJMDKL_LHOJNNDDIBI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_LHOJNNDDIBI_CTOR_OFFSET))(this);
		}

		::System::Void AJEKEKFKOEI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_LHOJNNDDIBI_AJEKEKFKOEI_OFFSET))(this, a1);
		}

	};
