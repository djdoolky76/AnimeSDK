#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class MemoryStream; }

#define BNNFEODFCLM_GMACFIJLBEP_CKIKGJAMGDL_OFFSET UNITYSDK_OFFSET(0xBDDD520)
#define BNNFEODFCLM_GMACFIJLBEP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDD3D0)
#define BNNFEODFCLM_GMACFIJLBEP_DCDDKNNINEB_OFFSET UNITYSDK_OFFSET(0xBDDD430)

inline static constexpr unsigned int BNNFEODFCLM_GMACFIJLBEP_TypeDefinitionIndex = 64625;

	class BNNFEODFCLM_GMACFIJLBEP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Byte>* PCPCFNGGCOE; // 0x10
		::System::Int32 ELBNJACJCDK; // 0x18
		::System::Byte KCFPFKNIBDG; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNFEODFCLM_GMACFIJLBEP_CTOR_OFFSET))(this);
		}

		::System::Void DCDDKNNINEB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BNNFEODFCLM_GMACFIJLBEP_DCDDKNNINEB_OFFSET))(this, a1, a2);
		}

		::System::Void CKIKGJAMGDL(::System::IO::MemoryStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + BNNFEODFCLM_GMACFIJLBEP_CKIKGJAMGDL_OFFSET))(this, a1);
		}

	};
