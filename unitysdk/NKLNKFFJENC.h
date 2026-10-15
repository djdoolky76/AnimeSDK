#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLayerWeight; }
namespace RPG::GameCore { class TaskContext; }

#define NKLNKFFJENC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC3C190)
#define NKLNKFFJENC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC3C1C0)

inline static constexpr unsigned int NKLNKFFJENC_TypeDefinitionIndex = 55527;

	class NKLNKFFJENC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLayerWeight* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLayerWeight*))((::PBYTE)hIl2Cpp + NKLNKFFJENC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLNKFFJENC_ONTASKBEGIN_OFFSET))(this);
		}

	};
