#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Random; }

#define BDNJBECKOIB_BBHLKMHFLKJ_OFFSET UNITYSDK_OFFSET(0x162F7C90)
#define BDNJBECKOIB_CTOR_OFFSET UNITYSDK_OFFSET(0x162F7990)
#define BDNJBECKOIB_EICIFNFMNLI_OFFSET UNITYSDK_OFFSET(0x162F7A10)
#define BDNJBECKOIB_GET__RANDOM_OFFSET UNITYSDK_OFFSET(0x162F7980)
#define BDNJBECKOIB_GMPMOBOBHNA_OFFSET UNITYSDK_OFFSET(0x162F7AF0)
#define BDNJBECKOIB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x162F79D0)
#define BDNJBECKOIB_HBGCLKCCOOE_OFFSET UNITYSDK_OFFSET(0x162F7D70)
#define BDNJBECKOIB_KFKPGJFAKNJ_OFFSET UNITYSDK_OFFSET(0x162F7BD0)

inline static constexpr unsigned int BDNJBECKOIB_TypeDefinitionIndex = 77816;

	class BDNJBECKOIB : public ::System::Object
	{
	public:
		::System::Random* __Random_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDNJBECKOIB_CTOR_OFFSET))(this, a1);
		}

		::System::Random* get__Random()
		{
			return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNJBECKOIB_GET__RANDOM_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNJBECKOIB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Int32 EICIFNFMNLI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BDNJBECKOIB_EICIFNFMNLI_OFFSET))(this, a1, a2);
		}

		::System::Boolean GMPMOBOBHNA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDNJBECKOIB_GMPMOBOBHNA_OFFSET))(this, a1);
		}

		::System::Double KFKPGJFAKNJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNJBECKOIB_KFKPGJFAKNJ_OFFSET))(this);
		}

		::System::Int32 BBHLKMHFLKJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BDNJBECKOIB_BBHLKMHFLKJ_OFFSET))(this, a1, a2);
		}

		::System::Single HBGCLKCCOOE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BDNJBECKOIB_HBGCLKCCOOE_OFFSET))(this, a1, a2);
		}

	};
