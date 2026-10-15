#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NJKMEEAHCMJ_ABPIBOIOGAL_OFFSET UNITYSDK_OFFSET(0x1C79B5B0)
#define NJKMEEAHCMJ_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x1C79B6F0)
#define NJKMEEAHCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79BB50)
#define NJKMEEAHCMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C79B370)
#define NJKMEEAHCMJ_EBNGGNNDGPM_OFFSET UNITYSDK_OFFSET(0x1C79B500)
#define NJKMEEAHCMJ_IOOANKBKEJI_OFFSET UNITYSDK_OFFSET(0x1C79B440)
#define NJKMEEAHCMJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C79B3B0)
#define NJKMEEAHCMJ_PKHFPLBIEOO_OFFSET UNITYSDK_OFFSET(0x1C79B6A0)

inline static constexpr unsigned int NJKMEEAHCMJ_TypeDefinitionIndex = 36975;

	class NJKMEEAHCMJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IKMGKHNGJHB; // 0x10
		::System::UInt32 CPPNFCBEJLK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKMEEAHCMJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKMEEAHCMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKMEEAHCMJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void IOOANKBKEJI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJKMEEAHCMJ_IOOANKBKEJI_OFFSET))(this, a1);
		}

		::System::Void ABPIBOIOGAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJKMEEAHCMJ_ABPIBOIOGAL_OFFSET))(this, a1);
		}

		::System::Boolean PKHFPLBIEOO(::RPG::GameCore::AIStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIStatus))((::PBYTE)hIl2Cpp + NJKMEEAHCMJ_PKHFPLBIEOO_OFFSET))(this, a1);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKMEEAHCMJ_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::Void EBNGGNNDGPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKMEEAHCMJ_EBNGGNNDGPM_OFFSET))(this);
		}

	};
