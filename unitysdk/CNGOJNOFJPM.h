#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNGOJNOFJPM;
class JOMBGMMOHDE;
namespace RPG::GameCore { class GameComponentBase; }

#define CNGOJNOFJPM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4FAE0)
#define CNGOJNOFJPM_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xDA4F790)
#define CNGOJNOFJPM_LDANNEMCBNM_OFFSET UNITYSDK_OFFSET(0xDA4F9C0)
#define CNGOJNOFJPM_OGMCPFLMHJF_OFFSET UNITYSDK_OFFSET(0xDA4F890)
#define CNGOJNOFJPM_PIHFOPFDEAF_OFFSET UNITYSDK_OFFSET(0xDA4F7B0)
#define CNGOJNOFJPM_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xDA4F7A0)

inline static constexpr unsigned int CNGOJNOFJPM_TypeDefinitionIndex = 57569;

	class CNGOJNOFJPM : public ::System::Object
	{
	public:
		::JOMBGMMOHDE* FOKAJKPGOEP; // 0x10
		::JOMBGMMOHDE* EPEPKMKDOEN; // 0x18
		::System::Int32 _Count_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGOJNOFJPM_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGOJNOFJPM_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNGOJNOFJPM_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Void PIHFOPFDEAF(::RPG::GameCore::GameComponentBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameComponentBase*))((::PBYTE)hIl2Cpp + CNGOJNOFJPM_PIHFOPFDEAF_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameComponentBase* OGMCPFLMHJF()
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGOJNOFJPM_OGMCPFLMHJF_OFFSET))(this);
		}

		::System::Int32 LDANNEMCBNM(::CNGOJNOFJPM* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CNGOJNOFJPM*, ::System::Int32))((::PBYTE)hIl2Cpp + CNGOJNOFJPM_LDANNEMCBNM_OFFSET))(this, a1, a2);
		}

	};
