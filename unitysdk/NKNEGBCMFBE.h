#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MonopolyMapConfig; }

#define NKNEGBCMFBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C93F930)

inline static constexpr unsigned int NKNEGBCMFBE_TypeDefinitionIndex = 42547;

	class NKNEGBCMFBE : public ::System::Object
	{
	public:
		::RPG::GameCore::MonopolyMapConfig* OKNNKBGFCCF; // 0x10
		::System::Single EMNHIJAIMBE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNEGBCMFBE_CTOR_OFFSET))(this);
		}

	};
