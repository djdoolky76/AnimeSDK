#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_NotifySpecialEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHHPNIOPHCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1549E800)
#define EHHPNIOPHCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1549D5F0)
#define EHHPNIOPHCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1549D850)
#define EHHPNIOPHCE_GJAPGIIBMHB_OFFSET UNITYSDK_OFFSET(0x1549D8E0)
#define EHHPNIOPHCE_LIAMCBLLHLD_OFFSET UNITYSDK_OFFSET(0x1549D7E0)
#define EHHPNIOPHCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1549D620)
#define EHHPNIOPHCE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1549D740)
#define EHHPNIOPHCE_PJCGAIICFAH_OFFSET UNITYSDK_OFFSET(0x1549D690)

inline static constexpr unsigned int EHHPNIOPHCE_TypeDefinitionIndex = 52241;

	class EHHPNIOPHCE
	{
	public:
		::System::Boolean IKOOHIBMNFK; // 0x28
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_IJLNNMPABLK()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "EHHPNIOPHCE")->GetStaticField(0x2EE20);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_NotifySpecialEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_NotifySpecialEvent*))((::PBYTE)hIl2Cpp + EHHPNIOPHCE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHHPNIOPHCE_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHPNIOPHCE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHPNIOPHCE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHPNIOPHCE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void GJAPGIIBMHB(::RPG::GameCore::STSpecialEventType a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::DynamicFloat* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::STSpecialEventType, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + EHHPNIOPHCE_GJAPGIIBMHB_OFFSET))(a1, a2, a3);
		}

		::System::Void LIAMCBLLHLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHPNIOPHCE_LIAMCBLLHLD_OFFSET))(this);
		}

		::System::Void PJCGAIICFAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHPNIOPHCE_PJCGAIICFAH_OFFSET))(this);
		}

	};
