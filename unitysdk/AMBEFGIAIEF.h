#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"
class EFODGECFLLC;
class HIOEAKHGILF;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimEntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMBEFGIAIEF_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0x15574F40)
#define AMBEFGIAIEF_BIDDMADPNJB_OFFSET UNITYSDK_OFFSET(0x15575BE0)
#define AMBEFGIAIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15574860)
#define AMBEFGIAIEF_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x155749E0)
#define AMBEFGIAIEF_EIPHEPNLNGA_OFFSET UNITYSDK_OFFSET(0x15575550)
#define AMBEFGIAIEF_JPAOABICEFP_OFFSET UNITYSDK_OFFSET(0x155759D0)
#define AMBEFGIAIEF_LMJEFLLOHLP_OFFSET UNITYSDK_OFFSET(0x15575170)
#define AMBEFGIAIEF_NPONPKJEJAO_OFFSET UNITYSDK_OFFSET(0x15575A50)
#define AMBEFGIAIEF_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x15574B80)

inline static constexpr unsigned int AMBEFGIAIEF_TypeDefinitionIndex = 76868;

	class AMBEFGIAIEF : public ::Entitas::VisualDebugging::Unity::ContextObserver
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* HIHDEEBFGIL; // 0x38
		::EFODGECFLLC* EEFMDEHLLFI; // 0x40
		::System::Void _ctor(::Entitas::IContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_DEACTIVATE_OFFSET))(this);
		}

		::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_ONENTITYCREATED_OFFSET))(this, a1, a2);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

		::System::Void LMJEFLLOHLP(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_LMJEFLLOHLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EIPHEPNLNGA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_EIPHEPNLNGA_OFFSET))(this, a1);
		}

		::System::Void JPAOABICEFP(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_JPAOABICEFP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPONPKJEJAO(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_NPONPKJEJAO_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour* BIDDMADPNJB(::Entitas::IEntity* a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + AMBEFGIAIEF_BIDDMADPNJB_OFFSET))(this, a1);
		}

	};
