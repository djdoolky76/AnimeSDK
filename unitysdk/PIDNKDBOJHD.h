#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIDNKDBOJHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC255760)
#define PIDNKDBOJHD_LDBMFCMJBMO_OFFSET UNITYSDK_OFFSET(0xC2557B0)
#define PIDNKDBOJHD_PGLHAMMBGLG_OFFSET UNITYSDK_OFFSET(0xC255B80)
#define PIDNKDBOJHD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC255B10)

inline static constexpr unsigned int PIDNKDBOJHD_TypeDefinitionIndex = 73982;

	class PIDNKDBOJHD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Int32>*>* LILKOCJPAIM; // 0x10
		::System::Single PMIHDMBGDMH; // 0x18
		::System::Void _ctor(::RPG::GameCore::TAMonoTickLodTemplate* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + PIDNKDBOJHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LDBMFCMJBMO(::RPG::GameCore::TAMonoTickLodTemplate* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + PIDNKDBOJHD_LDBMFCMJBMO_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDNKDBOJHD_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Int32 PGLHAMMBGLG(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIDNKDBOJHD_PGLHAMMBGLG_OFFSET))(this, a1);
		}

	};
