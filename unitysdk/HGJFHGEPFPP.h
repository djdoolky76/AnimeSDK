#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define HGJFHGEPFPP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C970B0)
#define HGJFHGEPFPP_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15C970C0)
#define HGJFHGEPFPP_GET_VALUEPAYLOADS_OFFSET UNITYSDK_OFFSET(0x15C970D0)

inline static constexpr unsigned int HGJFHGEPFPP_TypeDefinitionIndex = 77301;

	class HGJFHGEPFPP : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _ValuePayloads_k__BackingField; // 0x10
		::System::Int32 _SenderRuntimeID_k__BackingField; // 0x18
		::RPG::GameCore::PixAirEventType LAOACNPDOLD; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::PixAirEventType a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + HGJFHGEPFPP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_SenderRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJFHGEPFPP_GET_SENDERRUNTIMEID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* get_ValuePayloads()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJFHGEPFPP_GET_VALUEPAYLOADS_OFFSET))(this);
		}

	};
