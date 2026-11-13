#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
class JJGCEENBHPJ;
class KLJANPDNDBJ;
class NMHELBLGPEC;
class PLLPNJOEDHF;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Object; }

#define NMHELBLGPEC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A4429A0)
#define NMHELBLGPEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A442810)
#define NMHELBLGPEC_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x1A442BA0)
#define NMHELBLGPEC_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A442C00)

inline static constexpr unsigned int NMHELBLGPEC_TypeDefinitionIndex = 78468;

	class NMHELBLGPEC : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::JJGCEENBHPJ* KHKJHLDABDK; // 0x20
		::PLLPNJOEDHF* HEMMHLHDGBO; // 0x28
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + NMHELBLGPEC_CTOR_OFFSET))(this, a1);
		}

		static ::NMHELBLGPEC* BPLPBPMEODA(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::NMHELBLGPEC*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + NMHELBLGPEC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void ReceiveEvent(::KLJANPDNDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJANPDNDBJ*))((::PBYTE)hIl2Cpp + NMHELBLGPEC_RECEIVEEVENT_OFFSET))(this, a1);
		}

		::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NMHELBLGPEC_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

	};
