#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace Entitas { template <typename T> class IGroup_1; }

#define PDOPIEJIBCF_BCMMIDOLGOP_OFFSET UNITYSDK_OFFSET(0xC01B320)
#define PDOPIEJIBCF_CTOR_OFFSET UNITYSDK_OFFSET(0xC01B250)
#define PDOPIEJIBCF_HCGAOLBOIKC_OFFSET UNITYSDK_OFFSET(0xC01BA90)
#define PDOPIEJIBCF_JOKEJDCCNMM_OFFSET UNITYSDK_OFFSET(0xC01B930)
#define PDOPIEJIBCF_KHHBMDMCHIP_OFFSET UNITYSDK_OFFSET(0xC01B7E0)

inline static constexpr unsigned int PDOPIEJIBCF_TypeDefinitionIndex = 76713;

	class PDOPIEJIBCF : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::BABNOKHOBCF* FKINCGODJEP; // 0x18
		::Entitas::IGroup_1<::INMMPMDELKE*>* MIGADKPEGEF; // 0x20
		::System::Void _ctor(::MNCOPNHONHO* a1, ::BABNOKHOBCF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*, ::BABNOKHOBCF*))((::PBYTE)hIl2Cpp + PDOPIEJIBCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BCMMIDOLGOP(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + PDOPIEJIBCF_BCMMIDOLGOP_OFFSET))(this, a1);
		}

		::System::Void KHHBMDMCHIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOPIEJIBCF_KHHBMDMCHIP_OFFSET))(this);
		}

		::INMMPMDELKE* JOKEJDCCNMM(::INMMPMDELKE* a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + PDOPIEJIBCF_JOKEJDCCNMM_OFFSET))(this, a1);
		}

		::INMMPMDELKE* HCGAOLBOIKC(::System::UInt32 a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDOPIEJIBCF_HCGAOLBOIKC_OFFSET))(this, a1);
		}

	};
