#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBBDELABEAM.h"
#include "unitysdk/System/Object.h"
class BNGCBENBDPA;

#define NGPDCHNFHKK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C960D30)
#define NGPDCHNFHKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C960DE0)

inline static constexpr unsigned int NGPDCHNFHKK_TypeDefinitionIndex = 42029;

	class NGPDCHNFHKK : public ::System::Object
	{
	public:
		::BNGCBENBDPA* KPJGAIFEMOM; // 0x10
		::HBBDELABEAM HLCIBNIDADC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPDCHNFHKK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPDCHNFHKK_CLEAR_OFFSET))(this);
		}

	};
