#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHOFEPBAHNK;
namespace Entitas { class IContext; }

#define AFEPOFEOCDI_CBIBKBNLIHN_OFFSET UNITYSDK_OFFSET(0x1D9FAF40)
#define AFEPOFEOCDI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D9FAF90)
#define AFEPOFEOCDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FAE40)
#define AFEPOFEOCDI_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1D9FB0A0)
#define AFEPOFEOCDI_GET_PINGPONGGAME_OFFSET UNITYSDK_OFFSET(0x1D9FB090)

inline static constexpr unsigned int AFEPOFEOCDI_TypeDefinitionIndex = 43374;

	class AFEPOFEOCDI : public ::System::Object
	{
	public:
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
		::EHOFEPBAHNK* _pingPongGame_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEPOFEOCDI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEPOFEOCDI_CLEAR_OFFSET))(this);
		}

		::System::Void CBIBKBNLIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEPOFEOCDI_CBIBKBNLIHN_OFFSET))(this);
		}

		::EHOFEPBAHNK* get_pingPongGame()
		{
			return ((::EHOFEPBAHNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEPOFEOCDI_GET_PINGPONGGAME_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEPOFEOCDI_GET_ALLCONTEXTS_OFFSET))(this);
		}

	};
