#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define MAIMLDEGAMF_BGGPOBJLIMI_OFFSET UNITYSDK_OFFSET(0x1B6E2820)
#define MAIMLDEGAMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E2660)
#define MAIMLDEGAMF_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0x1B6E29C0)
#define MAIMLDEGAMF_GET_ISQUIZ_OFFSET UNITYSDK_OFFSET(0x1B6E2A10)
#define MAIMLDEGAMF_MBLKJMFPIEO_OFFSET UNITYSDK_OFFSET(0x1B6E2780)
#define MAIMLDEGAMF_SET_ISQUIZ_OFFSET UNITYSDK_OFFSET(0x1B6E2A20)
#define MAIMLDEGAMF_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1B6E2860)

inline static constexpr unsigned int MAIMLDEGAMF_TypeDefinitionIndex = 68163;

	class MAIMLDEGAMF : public ::System::Object
	{
	public:
		::System::UInt32 IHHNMMBAAGN; // 0x10
		::System::UInt32 JEGBJPHEHOI; // 0x14
		::System::UInt32 HKAHFHHICEN; // 0x18
		::System::Boolean _IsQuiz_k__BackingField; // 0x1C
		::System::Boolean AEFMIFNNOEK; // 0x1D
		::System::Byte _padding0[0x2];
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x20
		// static const ::System::String* NNKPLACOBCD; // 0x0
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + MAIMLDEGAMF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean BGGPOBJLIMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIMLDEGAMF_BGGPOBJLIMI_OFFSET))(this);
		}

		::System::Void MBLKJMFPIEO(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + MAIMLDEGAMF_MBLKJMFPIEO_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIMLDEGAMF_TRIGGER_OFFSET))(this);
		}

		::System::Void EIMIIHEDKFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAIMLDEGAMF_EIMIIHEDKFM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsQuiz()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIMLDEGAMF_GET_ISQUIZ_OFFSET))(this);
		}

		::System::Void set_IsQuiz(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAIMLDEGAMF_SET_ISQUIZ_OFFSET))(this, a1);
		}

	};
