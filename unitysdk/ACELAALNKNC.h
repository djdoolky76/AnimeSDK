#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FHABPBGINDK;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropPlayGachaMachine; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACELAALNKNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB117760)
#define ACELAALNKNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB117870)
#define ACELAALNKNC_FDEBNBLADPL_OFFSET UNITYSDK_OFFSET(0xB1188D0)
#define ACELAALNKNC_HLEPMFCECBB_OFFSET UNITYSDK_OFFSET(0xB1189C0)
#define ACELAALNKNC_ODAEFADJIMB_OFFSET UNITYSDK_OFFSET(0xB118DD0)
#define ACELAALNKNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB117FC0)
#define ACELAALNKNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB117AA0)
#define ACELAALNKNC_PJAOBOBOLHF_OFFSET UNITYSDK_OFFSET(0xB118400)
#define ACELAALNKNC_TICK_OFFSET UNITYSDK_OFFSET(0xB117C50)

inline static constexpr unsigned int ACELAALNKNC_TypeDefinitionIndex = 58334;

	class ACELAALNKNC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropPlayGachaMachine* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
		::KFELGAIGHAP* LHMPCJDHGMM; // 0x28
		::FHABPBGINDK* DHIELKLGADN; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::KFELGAIGHAP* OCFKLGFHKAC; // 0x40
		::System::Boolean BPODLAOIOPK; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 IOPMAPJHDNK; // 0x4C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPlayGachaMachine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPlayGachaMachine*))((::PBYTE)hIl2Cpp + ACELAALNKNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACELAALNKNC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACELAALNKNC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACELAALNKNC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACELAALNKNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HLEPMFCECBB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACELAALNKNC_HLEPMFCECBB_OFFSET))(this, a1);
		}

		::System::Void ODAEFADJIMB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACELAALNKNC_ODAEFADJIMB_OFFSET))(this, a1);
		}

		static ::System::Void FDEBNBLADPL(::RPG::GameCore::PropComponent* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::PropComponent*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ACELAALNKNC_FDEBNBLADPL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PJAOBOBOLHF(::RPG::GameCore::PropComponent* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::PropComponent*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ACELAALNKNC_PJAOBOBOLHF_OFFSET))(a1, a2, a3);
		}

	};
