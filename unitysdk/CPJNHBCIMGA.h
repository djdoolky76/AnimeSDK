#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNJGDLKNIEJ;
class OCHJEBJLIJP;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPJNHBCIMGA_BHLDCIHDBDM_OFFSET UNITYSDK_OFFSET(0xDCD1050)
#define CPJNHBCIMGA_CNKNJKGKPCK_OFFSET UNITYSDK_OFFSET(0xDCD0C10)
#define CPJNHBCIMGA_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD0920)
#define CPJNHBCIMGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD1090)
#define CPJNHBCIMGA_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xDCD0910)
#define CPJNHBCIMGA_KLJJJPECGLI_OFFSET UNITYSDK_OFFSET(0xDCD0A90)
#define CPJNHBCIMGA_LCHAENOFEOC_OFFSET UNITYSDK_OFFSET(0xDCD09D0)
#define CPJNHBCIMGA_MMNOIOHPBGC_OFFSET UNITYSDK_OFFSET(0xDCD1330)

inline static constexpr unsigned int CPJNHBCIMGA_TypeDefinitionIndex = 77724;

	class CPJNHBCIMGA : public ::System::Object
	{
	public:
		::System::Object* DPDKOIMJPCG; // 0x10
		::System::Type* ADGCMDEOPPA; // 0x18
		::System::Action* JNKOMBPOHAG; // 0x20
		::BNJGDLKNIEJ* _GameContext_k__BackingField; // 0x28
		::OCHJEBJLIJP* GDHFEAKLHFJ; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::OCHJEBJLIJP*>* PAHJPOGLALP; // 0x38
		::System::Boolean JMGIJJDOPGJ; // 0x40
		::System::Boolean AKBAIKCDEHP; // 0x41
		::System::Void _ctor(::BNJGDLKNIEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNJGDLKNIEJ*))((::PBYTE)hIl2Cpp + CPJNHBCIMGA_CTOR_OFFSET))(this, a1);
		}

		::BNJGDLKNIEJ* get_GameContext()
		{
			return ((::BNJGDLKNIEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA_GET_GAMECONTEXT_OFFSET))(this);
		}

		::System::Void KLJJJPECGLI(::System::Type* a1, ::System::Object* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CPJNHBCIMGA_KLJJJPECGLI_OFFSET))(this, a1, a2, a3);
		}

		::OCHJEBJLIJP* BHLDCIHDBDM()
		{
			return ((::OCHJEBJLIJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA_BHLDCIHDBDM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA_DISPOSE_OFFSET))(this);
		}

		::System::Void LCHAENOFEOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA_LCHAENOFEOC_OFFSET))(this);
		}

		::System::Void MMNOIOHPBGC(::OCHJEBJLIJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCHJEBJLIJP*))((::PBYTE)hIl2Cpp + CPJNHBCIMGA_MMNOIOHPBGC_OFFSET))(this, a1);
		}

		::System::Void CNKNJKGKPCK(::OCHJEBJLIJP* a1, ::System::Object* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OCHJEBJLIJP*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CPJNHBCIMGA_CNKNJKGKPCK_OFFSET))(this, a1, a2, a3);
		}

	};
