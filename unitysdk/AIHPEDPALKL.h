#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Func_1; }

#define AIHPEDPALKL_BNDCKKCCAGG_OFFSET UNITYSDK_OFFSET(0xEBA59D0)
#define AIHPEDPALKL_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA5A70)
#define AIHPEDPALKL_GLOADGNOLGE_OFFSET UNITYSDK_OFFSET(0xEBA5A10)
#define AIHPEDPALKL_JMKLBMEHDCG_OFFSET UNITYSDK_OFFSET(0xEBA5990)
#define AIHPEDPALKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEBA5940)

inline static constexpr unsigned int AIHPEDPALKL_TypeDefinitionIndex = 61049;

	class AIHPEDPALKL : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* OLPNJHPNJNG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHPEDPALKL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AIHPEDPALKL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JMKLBMEHDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHPEDPALKL_JMKLBMEHDCG_OFFSET))(this);
		}

		::System::Void BNDCKKCCAGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHPEDPALKL_BNDCKKCCAGG_OFFSET))(this);
		}

		::System::Boolean GLOADGNOLGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHPEDPALKL_GLOADGNOLGE_OFFSET))(this);
		}

	};
