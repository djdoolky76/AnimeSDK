#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class GGJJIAJMFOM;
namespace System { class String; }

#define GGJJIAJMFOM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A01ED0)
#define GGJJIAJMFOM_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A01F40)
#define GGJJIAJMFOM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A01FF0)
#define GGJJIAJMFOM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15A01F90)

inline static constexpr unsigned int GGJJIAJMFOM_TypeDefinitionIndex = 65895;

	class GGJJIAJMFOM : public ::MLKDDLHNNHH
	{
	public:
		::System::String* NMMKDFFHOLL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJJIAJMFOM_CTOR_OFFSET))(this);
		}

		static ::GGJJIAJMFOM* BPLPBPMEODA()
		{
			return ((::GGJJIAJMFOM*(*)())((::PBYTE)hIl2Cpp + GGJJIAJMFOM_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJJIAJMFOM_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJJIAJMFOM_ONEXECUTE_OFFSET))(this);
		}

	};
