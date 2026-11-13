#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNGADDFICJF;
class NKIJFPHFJCO;

#define OGLFNLOLODL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18E008F0)
#define OGLFNLOLODL_CTOR_OFFSET UNITYSDK_OFFSET(0x18E00B10)

inline static constexpr unsigned int OGLFNLOLODL_TypeDefinitionIndex = 82939;

	class OGLFNLOLODL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLFNLOLODL_CTOR_OFFSET))(this);
		}

		::MNGADDFICJF* BPLPBPMEODA(::NKIJFPHFJCO* a1)
		{
			return ((::MNGADDFICJF*(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + OGLFNLOLODL_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
