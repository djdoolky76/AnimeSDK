#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MonopolyAllMapConfig; }
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AENNHDIEKOE_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFC450)
#define AENNHDIEKOE_GET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xCEFC5A0)
#define AENNHDIEKOE_LBMCEOKMBHH_OFFSET UNITYSDK_OFFSET(0xCEFC4C0)
#define AENNHDIEKOE_LHGEJDDHCAL_OFFSET UNITYSDK_OFFSET(0xCEFC5C0)
#define AENNHDIEKOE_SET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xCEFC5B0)

inline static constexpr unsigned int AENNHDIEKOE_TypeDefinitionIndex = 75808;

	class AENNHDIEKOE : public ::System::Object
	{
	public:
		::RPG::GameCore::MonopolyAllMapConfig* PNBLLHEMDIB; // 0x10
		::System::UInt32 _StartCellID_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AENNHDIEKOE_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyMapConfig* LBMCEOKMBHH(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyMapConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AENNHDIEKOE_LBMCEOKMBHH_OFFSET))(this, a1);
		}

		::System::UInt32 get_StartCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AENNHDIEKOE_GET_STARTCELLID_OFFSET))(this);
		}

		::System::Void set_StartCellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AENNHDIEKOE_SET_STARTCELLID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonopolyMapConfig*>* LHGEJDDHCAL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonopolyMapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AENNHDIEKOE_LHGEJDDHCAL_OFFSET))(this);
		}

	};
