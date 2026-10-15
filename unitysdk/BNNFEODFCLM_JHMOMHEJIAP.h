#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BNNFEODFCLM_JHMOMHEJIAP_BIKABOFADBP_OFFSET UNITYSDK_OFFSET(0xBDE2510)
#define BNNFEODFCLM_JHMOMHEJIAP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE2500)
#define BNNFEODFCLM_JHMOMHEJIAP_LBKEJAAPKMF_OFFSET UNITYSDK_OFFSET(0xBDE2820)
#define BNNFEODFCLM_JHMOMHEJIAP_OCKMGAJBOPJ_OFFSET UNITYSDK_OFFSET(0xBDE2600)
#define BNNFEODFCLM_JHMOMHEJIAP_PDPIEAFNOFM_OFFSET UNITYSDK_OFFSET(0xBDE2670)

inline static constexpr unsigned int BNNFEODFCLM_JHMOMHEJIAP_TypeDefinitionIndex = 64626;

	class BNNFEODFCLM_JHMOMHEJIAP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* OIMENGGLNFK; // 0x10
		::System::Int32 EFIFPLOMMPJ; // 0x18
		::System::Int32 ELBNJACJCDK; // 0x1C
		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BNNFEODFCLM_JHMOMHEJIAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 BIKABOFADBP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNNFEODFCLM_JHMOMHEJIAP_BIKABOFADBP_OFFSET))(this, a1);
		}

		::System::Boolean OCKMGAJBOPJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNNFEODFCLM_JHMOMHEJIAP_OCKMGAJBOPJ_OFFSET))(this, a1);
		}

		::System::Void LBKEJAAPKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNFEODFCLM_JHMOMHEJIAP_LBKEJAAPKMF_OFFSET))(this);
		}

		::System::Boolean PDPIEAFNOFM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNNFEODFCLM_JHMOMHEJIAP_PDPIEAFNOFM_OFFSET))(this, a1);
		}

	};
