#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET UNITYSDK_OFFSET(0x1800B3B0)
#define MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET UNITYSDK_OFFSET(0x1800B300)
#define MOLEMOLE_UICTRLENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1800B2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICtrlEnum_TypeDefinitionIndex = 93169;

	class UICtrlEnum : public ::System::Object
	{
	public:
		::System::String* _ctrlName; // 0x10

		::System::Void _ctor(::MIKOMFIBMBN HKGCJDDIMAH)
		{
			return ((::System::Void(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM__CTOR_OFFSET))(this, HKGCJDDIMAH);
		}

		::MIKOMFIBMBN get_CtrlId()
		{
			return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET))(this);
		}

		::System::Void set_CtrlId(::MIKOMFIBMBN EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
