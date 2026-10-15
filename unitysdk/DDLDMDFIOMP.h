#pragma once
#include "unitysdk/unitysdk.h"
class JNAHFCBAIMM;
class OJHMEHAHDNI;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DDLDMDFIOMP_BPLKCEMEDGH_OFFSET UNITYSDK_OFFSET(0xE4E5F40)
#define DDLDMDFIOMP_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E5B30)
#define DDLDMDFIOMP_NDMFPLOBAMA_OFFSET UNITYSDK_OFFSET(0xE4E6120)
#define DDLDMDFIOMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4E5B60)
#define DDLDMDFIOMP___STARTTUTORIALMATCH_G__ONMATCHFLOWEND_2_0_OFFSET UNITYSDK_OFFSET(0xE4E61B0)

inline static constexpr unsigned int DDLDMDFIOMP_TypeDefinitionIndex = 57939;

	class DDLDMDFIOMP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JNAHFCBAIMM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JNAHFCBAIMM*))((::PBYTE)hIl2Cpp + DDLDMDFIOMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLDMDFIOMP_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void BPLKCEMEDGH(::OJHMEHAHDNI* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::OJHMEHAHDNI*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DDLDMDFIOMP_BPLKCEMEDGH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NDMFPLOBAMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DDLDMDFIOMP_NDMFPLOBAMA_OFFSET))(a1);
		}

		static ::System::Void __StartTutorialMatch_g__OnMatchFlowEnd_2_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DDLDMDFIOMP___STARTTUTORIALMATCH_G__ONMATCHFLOWEND_2_0_OFFSET))(a1);
		}

	};
