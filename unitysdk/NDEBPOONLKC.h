#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNNHKEOEAIB;
class GLDAMFHLMPM;

#define NDEBPOONLKC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB21E30)
#define NDEBPOONLKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB21BF0)
#define NDEBPOONLKC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBB21C90)
#define NDEBPOONLKC_KEMNAEEGOMJ_OFFSET UNITYSDK_OFFSET(0xBB21DC0)
#define NDEBPOONLKC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBB219A0)
#define NDEBPOONLKC_MICAHEBOINM_OFFSET UNITYSDK_OFFSET(0xBB21B50)
#define NDEBPOONLKC_POLCALNBNHI_OFFSET UNITYSDK_OFFSET(0xBB21DD0)

inline static constexpr unsigned int NDEBPOONLKC_TypeDefinitionIndex = 59848;

	class NDEBPOONLKC : public ::System::Object
	{
	public:
		::GLDAMFHLMPM* BPJHHDODKPC; // 0x10
		::DNNHKEOEAIB* GDLIFFJGEFH; // 0x18
		::System::Boolean EMHAACACFOM; // 0x20
		::System::Boolean KIFDODHJJBF; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEBPOONLKC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEBPOONLKC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEBPOONLKC_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDEBPOONLKC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean MICAHEBOINM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEBPOONLKC_MICAHEBOINM_OFFSET))(this);
		}

		::System::Boolean KEMNAEEGOMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEBPOONLKC_KEMNAEEGOMJ_OFFSET))(this);
		}

		::System::Void POLCALNBNHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDEBPOONLKC_POLCALNBNHI_OFFSET))(this, a1);
		}

	};
