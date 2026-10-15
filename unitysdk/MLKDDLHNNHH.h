#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MLKDDLHNNHH_CLEAR_OFFSET UNITYSDK_OFFSET(0xB9AE0B0)
#define MLKDDLHNNHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB9AE4C0)
#define MLKDDLHNNHH_DDKJIMBJBMH_OFFSET UNITYSDK_OFFSET(0xB9AE230)
#define MLKDDLHNNHH_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xB9AE480)
#define MLKDDLHNNHH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB9AE170)
#define MLKDDLHNNHH_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xB9AE2E0)
#define MLKDDLHNNHH_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB9AE440)
#define MLKDDLHNNHH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB9AE400)

inline static constexpr unsigned int MLKDDLHNNHH_TypeDefinitionIndex = 71112;

	class MLKDDLHNNHH : public ::System::Object
	{
	public:
		::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>* LGAOOKPFIMF; // 0x10
		::System::Boolean MEIOBBAOACJ; // 0x18
		::System::Boolean APHAAOCDAGN; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_CLEAR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void DDKJIMBJBMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_DDKJIMBJBMH_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_ONCLEAR_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_EPJFIHHDMAK_OFFSET))(this);
		}

	};
