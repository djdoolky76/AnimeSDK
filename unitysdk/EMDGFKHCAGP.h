#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EMDGFKHCAGP_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15525710)
#define EMDGFKHCAGP_CTOR_OFFSET UNITYSDK_OFFSET(0x155258B0)
#define EMDGFKHCAGP_GET_SLICENB_OFFSET UNITYSDK_OFFSET(0x155256F0)
#define EMDGFKHCAGP_MDNPFMJDBBG_OFFSET UNITYSDK_OFFSET(0x15525830)
#define EMDGFKHCAGP_NEENDNIHBFM_OFFSET UNITYSDK_OFFSET(0x15525760)
#define EMDGFKHCAGP_SET_SLICENB_OFFSET UNITYSDK_OFFSET(0x15525700)

inline static constexpr unsigned int EMDGFKHCAGP_TypeDefinitionIndex = 57165;

	class EMDGFKHCAGP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* EFMDDNNMAAB; // 0x10
		::System::Boolean IHFIFLGIHIM; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 _SliceNb_k__BackingField; // 0x1C
		// static const ::System::Object PHJNBDMOOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDGFKHCAGP_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SliceNb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDGFKHCAGP_GET_SLICENB_OFFSET))(this);
		}

		::System::Void set_SliceNb(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMDGFKHCAGP_SET_SLICENB_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMDGFKHCAGP_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Int32 NEENDNIHBFM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDGFKHCAGP_NEENDNIHBFM_OFFSET))(this);
		}

		::System::Void MDNPFMJDBBG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMDGFKHCAGP_MDNPFMJDBBG_OFFSET))(this, a1);
		}

	};
