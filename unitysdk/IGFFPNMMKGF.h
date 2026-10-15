#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIEvent; }
namespace System { class Object; }

#define IGFFPNMMKGF_CTOR_OFFSET UNITYSDK_OFFSET(0x163FE530)
#define IGFFPNMMKGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163FE540)
#define IGFFPNMMKGF_JEKAOGBGBKC_OFFSET UNITYSDK_OFFSET(0x163FE760)
#define IGFFPNMMKGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163FE600)
#define IGFFPNMMKGF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163FE6B0)
#define IGFFPNMMKGF_TICK_OFFSET UNITYSDK_OFFSET(0x163FE700)

inline static constexpr unsigned int IGFFPNMMKGF_TypeDefinitionIndex = 58942;

	class IGFFPNMMKGF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitUIEvent* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIEvent*))((::PBYTE)hIl2Cpp + IGFFPNMMKGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFFPNMMKGF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFFPNMMKGF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFFPNMMKGF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGFFPNMMKGF_TICK_OFFSET))(this, a1);
		}

		::System::Void JEKAOGBGBKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGFFPNMMKGF_JEKAOGBGBKC_OFFSET))(this, a1);
		}

	};
