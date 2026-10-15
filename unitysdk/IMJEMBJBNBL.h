#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"

#define IMJEMBJBNBL_KBNJDPKPIKB_OFFSET UNITYSDK_OFFSET(0x164CE730)

inline static constexpr unsigned int IMJEMBJBNBL_TypeDefinitionIndex = 53733;

	class IMJEMBJBNBL : public ::System::Object
	{
	public:
		static ::System::Boolean KBNJDPKPIKB(::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a1, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + IMJEMBJBNBL_KBNJDPKPIKB_OFFSET))(a1, a2);
		}

	};
