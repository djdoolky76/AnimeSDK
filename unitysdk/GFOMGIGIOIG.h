#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimatorLayerEmotion; }
namespace System { class String; }

#define GFOMGIGIOIG_CJIDMHMOEEF_OFFSET UNITYSDK_OFFSET(0x159FFB10)
#define GFOMGIGIOIG_CTOR_OFFSET UNITYSDK_OFFSET(0x159FF440)
#define GFOMGIGIOIG_FNOCLPAMAHJ_OFFSET UNITYSDK_OFFSET(0x159FF6E0)
#define GFOMGIGIOIG_LKPOADAAPIN_OFFSET UNITYSDK_OFFSET(0x159FFC80)
#define GFOMGIGIOIG_NLEBJIOAOFH_OFFSET UNITYSDK_OFFSET(0x159FFE20)
#define GFOMGIGIOIG_OIJBEAHJPKC_OFFSET UNITYSDK_OFFSET(0x159FFB90)
#define GFOMGIGIOIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159FF470)
#define GFOMGIGIOIG_OPGPNPLNNHA_OFFSET UNITYSDK_OFFSET(0x159FF4F0)

inline static constexpr unsigned int GFOMGIGIOIG_TypeDefinitionIndex = 55903;

	class GFOMGIGIOIG
	{
	public:
		// static const ::System::String* FJMGFLIOIBK; // 0x0
		// static const ::System::String* HHAECCGHFLK; // 0x0
		// static const ::System::String* GKKNLNONEEO; // 0x0
		// static const ::System::String* FBEHNNODHOI; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAnimatorLayerEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + GFOMGIGIOIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMGIGIOIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OPGPNPLNNHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMGIGIOIG_OPGPNPLNNHA_OFFSET))(this);
		}

		::System::Void FNOCLPAMAHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMGIGIOIG_FNOCLPAMAHJ_OFFSET))(this);
		}

		::System::Boolean LKPOADAAPIN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GFOMGIGIOIG_LKPOADAAPIN_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CJIDMHMOEEF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMGIGIOIG_CJIDMHMOEEF_OFFSET))(this);
		}

		::System::String* OIJBEAHJPKC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GFOMGIGIOIG_OIJBEAHJPKC_OFFSET))(this, a1);
		}

		::System::String* NLEBJIOAOFH(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFOMGIGIOIG_NLEBJIOAOFH_OFFSET))(this, a1);
		}

	};
