#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class UIDragSource; }
namespace System { class Action; }

#define AOCLBFALMAP_CFILENMJKCL_OFFSET UNITYSDK_OFFSET(0x1589B0B0)
#define AOCLBFALMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1589AFE0)
#define AOCLBFALMAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1589B2F0)

inline static constexpr unsigned int AOCLBFALMAP_TypeDefinitionIndex = 49856;

	class AOCLBFALMAP : public ::System::Object
	{
	public:
		::RPG::Client::UIDragSource* BPKKKMOCFIP; // 0x10
		::System::Action* MBOEDFCNCJF; // 0x18
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::RPG::Client::UIDragSource* a1, ::CEEGMMCFCBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::CEEGMMCFCBG*))((::PBYTE)hIl2Cpp + AOCLBFALMAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CFILENMJKCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCLBFALMAP_CFILENMJKCL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCLBFALMAP_DISPOSE_OFFSET))(this);
		}

	};
