#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define IPFEAOONHGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B7720)

inline static constexpr unsigned int IPFEAOONHGI_TypeDefinitionIndex = 36830;

	class IPFEAOONHGI : public ::System::Object
	{
	public:
		::RPG::MVector3 GCJMFBKLGHI; // 0x10
		::System::Int32 OCAJAKNEHAL; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFEAOONHGI_CTOR_OFFSET))(this);
		}

	};
