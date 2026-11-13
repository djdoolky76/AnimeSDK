#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LNJBLBNFHKM_ABPIBOIOGAL_OFFSET UNITYSDK_OFFSET(0x1A591310)
#define LNJBLBNFHKM_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x1A591450)
#define LNJBLBNFHKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5918B0)
#define LNJBLBNFHKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5910D0)
#define LNJBLBNFHKM_EBNGGNNDGPM_OFFSET UNITYSDK_OFFSET(0x1A591260)
#define LNJBLBNFHKM_IOOANKBKEJI_OFFSET UNITYSDK_OFFSET(0x1A5911A0)
#define LNJBLBNFHKM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A591110)
#define LNJBLBNFHKM_PKHFPLBIEOO_OFFSET UNITYSDK_OFFSET(0x1A591400)

inline static constexpr unsigned int LNJBLBNFHKM_TypeDefinitionIndex = 54804;

	class LNJBLBNFHKM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IKMGKHNGJHB; // 0x10
		::System::UInt32 CPPNFCBEJLK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJBLBNFHKM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJBLBNFHKM_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJBLBNFHKM_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void IOOANKBKEJI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNJBLBNFHKM_IOOANKBKEJI_OFFSET))(this, a1);
		}

		::System::Void ABPIBOIOGAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNJBLBNFHKM_ABPIBOIOGAL_OFFSET))(this, a1);
		}

		::System::Boolean PKHFPLBIEOO(::RPG::GameCore::AIStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIStatus))((::PBYTE)hIl2Cpp + LNJBLBNFHKM_PKHFPLBIEOO_OFFSET))(this, a1);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJBLBNFHKM_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::Void EBNGGNNDGPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJBLBNFHKM_EBNGGNNDGPM_OFFSET))(this);
		}

	};
