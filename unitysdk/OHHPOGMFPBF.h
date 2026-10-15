#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }

#define OHHPOGMFPBF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6BD20)

inline static constexpr unsigned int OHHPOGMFPBF_TypeDefinitionIndex = 54755;

	class OHHPOGMFPBF : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* CGDCONMACEN; // 0x10
		::System::UInt32 GIIMOAOFKOM; // 0x18
		::System::Int32 KBAPBCNJHDB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHPOGMFPBF_CTOR_OFFSET))(this);
		}

	};
