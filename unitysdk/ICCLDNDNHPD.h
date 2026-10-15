#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLECIKAMKEG;
class NJMLJBNICND;

#define ICCLDNDNHPD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4C9F0)
#define ICCLDNDNHPD_EINOOAJLCJN_OFFSET UNITYSDK_OFFSET(0x15E4C9E0)
#define ICCLDNDNHPD_GBMBMFOJCFG_OFFSET UNITYSDK_OFFSET(0x15E4C9D0)
#define ICCLDNDNHPD_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x15E4C9C0)

inline static constexpr unsigned int ICCLDNDNHPD_TypeDefinitionIndex = 78227;

	class ICCLDNDNHPD : public ::System::Object
	{
	public:
		::NJMLJBNICND* _Owner_k__BackingField; // 0x10
		::System::Void _ctor(::NJMLJBNICND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMLJBNICND*))((::PBYTE)hIl2Cpp + ICCLDNDNHPD_CTOR_OFFSET))(this, a1);
		}

		::NJMLJBNICND* get_Owner()
		{
			return ((::NJMLJBNICND*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLDNDNHPD_GET_OWNER_OFFSET))(this);
		}

		::DLECIKAMKEG* GBMBMFOJCFG()
		{
			return ((::DLECIKAMKEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLDNDNHPD_GBMBMFOJCFG_OFFSET))(this);
		}

		::DLECIKAMKEG* EINOOAJLCJN()
		{
			return ((::DLECIKAMKEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLDNDNHPD_EINOOAJLCJN_OFFSET))(this);
		}

	};
