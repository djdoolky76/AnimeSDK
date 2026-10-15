#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CheckLastPhotoGraphResult; }
namespace RPG::GameCore { class PhotoGraphResultContainer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPJKDOHNKMA_AFDBJEHNJKA_OFFSET UNITYSDK_OFFSET(0x12641440)
#define DPJKDOHNKMA_CTOR_OFFSET UNITYSDK_OFFSET(0x12640EE0)
#define DPJKDOHNKMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12640FD0)
#define DPJKDOHNKMA_LMHECDKAEMA_OFFSET UNITYSDK_OFFSET(0x12641570)
#define DPJKDOHNKMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x126412B0)
#define DPJKDOHNKMA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x126414F0)
#define DPJKDOHNKMA_TICK_OFFSET UNITYSDK_OFFSET(0x12641150)

inline static constexpr unsigned int DPJKDOHNKMA_TypeDefinitionIndex = 52643;

	class DPJKDOHNKMA : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HPJPJBLFDGA; // 0x18
		::KFELGAIGHAP* LNMOCNDILJN; // 0x20
		::RPG::GameCore::CheckLastPhotoGraphResult* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckLastPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckLastPhotoGraphResult*))((::PBYTE)hIl2Cpp + DPJKDOHNKMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJKDOHNKMA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPJKDOHNKMA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJKDOHNKMA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJKDOHNKMA_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean AFDBJEHNJKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJKDOHNKMA_AFDBJEHNJKA_OFFSET))(this);
		}

		::System::Boolean LMHECDKAEMA(::System::Collections::Generic::List_1<::System::String*>* a1, ::RPG::GameCore::PhotoGraphResultContainer* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::GameCore::PhotoGraphResultContainer*))((::PBYTE)hIl2Cpp + DPJKDOHNKMA_LMHECDKAEMA_OFFSET))(this, a1, a2);
		}

	};
