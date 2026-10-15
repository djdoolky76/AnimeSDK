#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
class GHHFHKBJFIL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define GHHFHKBJFIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE467C0)
#define GHHFHKBJFIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE467D0)
#define GHHFHKBJFIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE46780)

inline static constexpr unsigned int GHHFHKBJFIL_TypeDefinitionIndex = 22324;

	class GHHFHKBJFIL : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* LJPOEMIKGKB; // 0x20
		::RPG::GameCore::DynamicFloat* AMHGLPIJMBN; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* JEEACGDIOCE; // 0x30
		::System::Boolean KHCFEEHLEFH; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHFHKBJFIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHHFHKBJFIL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHHFHKBJFIL*))((::PBYTE)hIl2Cpp + GHHFHKBJFIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GHHFHKBJFIL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHHFHKBJFIL*))((::PBYTE)hIl2Cpp + GHHFHKBJFIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
